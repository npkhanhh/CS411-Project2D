#include"Line.h"
#include "Letter.h"
#include <time.h>		/* time */
#include <stdlib.h>		/* srand, rand */
#include <string>


// Global vars
int x_1, x_2;
int y_1, y_2;
Line globalLine;
const int SIZE_OF_DICTIONARY = 5;
vector<Object2D> letters;		// the letters in the word
bool firstRender = true;

// vars to tracking mouse activities
bool clickedOnObject = false;
bool isPressing;	// true if left mouse button is clicked
int xMouse, yMouse;	// position of the mouse

// Dictionary
string dictionary[SIZE_OF_DICTIONARY] = { 
	"Graphics", 
	"Computer", 
	"DucHuy", 
	"PhucKhanh",
	"Project"
};



int wWidth = 1500;	// width of window
int wHeight = 800;	// height of window

void InitSetup();
void RenderScene(void);
void MouseClick(int iButton, int iState, int x, int y);	// Callback function triggered when mouse button is actived
void MouseMotionFunction(int x, int y);					// Callback function triggered when mouse moves when one mouse button is pressed
void MousePassiveMotionFunction(int x, int y);			// Callback function triggered when mouse moves when no mouse button is pressed

Object2D *getLetter(char &c);

int main(int argc, char* argv[]) {
	// Choose a word randomly from databse
	srand(time(NULL));
	int index = rand() % SIZE_OF_DICTIONARY;
	string word = "v"; //dictionary[index];
	Object2D *c = NULL;
	letters;
	for (int i = 0; i < word.length(); ++i) {
		c = getLetter(word[i]);
		letters.push_back(*c);
		delete c;
		c = NULL;
	}


	// openGL initiallization
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(wWidth, wHeight);
	glutCreateWindow("2D game 1151019-1151020");
	InitSetup();

	glutDisplayFunc(RenderScene);

	// Register callback functions for mouse control
	glutMouseFunc(MouseClick);
	glutMotionFunc(MouseMotionFunction);
	glutPassiveMotionFunc(MousePassiveMotionFunction);
	glutMainLoop();

	

	return 0;
}

void InitSetup() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	// Smooth out lines
	//glEnable(GL_LINE_SMOOTH);
	glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
	glEnable(GL_BLEND);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, wWidth, 0, wHeight);
	glMatrixMode(GL_MODELVIEW);
}


void RenderScene(void) {
	glClearColor(1, 1, 1, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	// Render background
	glColor3f(1, 1, 1);	// white background
	glBegin(GL_POLYGON);
		glVertex2f(0, 0);
		glVertex2f(wWidth, 0);
		glVertex2f(wWidth, wHeight);
		glVertex2f(0, wHeight);
	glEnd();
	glFlush();

	// render the whole word
	// if this is the first time the word is rendered, 
	// set up the offset that that word will be translated
	if (firstRender) {
		int xi = -90, yi = 100;
		for (int i = 0; i < letters.size(); ++i) {
			xi = xi + 110;
			letters[i].Draw(xi, yi);
			letters[i].fillColor();
		}
		firstRender = false;
	}
	else {
		for (int i = 0; i < letters.size(); ++i) {
			letters[i].Draw();
			letters[i].fillColor();
		}
	}

	// Render global line
	globalLine.Draw(0, 0);


	// Render the signal rectangle, green if clicked on object, red if not
	if (clickedOnObject) {
		glColor3f(0, 1, 0);
		glBegin(GL_POLYGON);
			glVertex2f(0, 0);
			glVertex2f(100, 0);
			glVertex2f(100, 100);
			glVertex2f(0, 100);
		glEnd();
		glFlush();
		glutPostRedisplay();
	}
	else {
		glColor3f(1, 0, 0);
		glBegin(GL_POLYGON);
			glVertex2f(0, 0);
			glVertex2f(100, 0);
			glVertex2f(100, 100);
			glVertex2f(0, 100);
		glEnd();
		glFlush();
		glutPostRedisplay();
	}

	// Render the coordinate of the mouse
	int cur = 0;
	if (isPressing)
		glColor3f(1, 0, 0);
	else
		glColor3f(0, 0, 0);

	string xMouseStr = std::to_string(xMouse);
	string yMouseStr = std::to_string(yMouse);

	glRasterPos2d(wWidth - 150, wHeight - 150);
	for (int i = 0; i < xMouseStr.size(); ++i) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, xMouseStr[i]);
	}
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, ';');
	for (int i = 0; i < yMouseStr.size(); ++i) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, yMouseStr[i]);
	}
	
	glutSwapBuffers();
}


void MouseClick(int iButton, int iState, int x, int y) {
	if (iButton == GLUT_LEFT_BUTTON) {
		// if the button is the left button
		if (iState == GLUT_DOWN) {
			// if left button is clicked
			x_1 = x;
			y_1 = wHeight - y;
			xMouse = x;
			yMouse = y;
			isPressing = true;
			clickedOnObject = false;
			for (int i = 0; i < letters.size(); ++i) {
				if (letters[i].isInside(x, wHeight - y)) {
					clickedOnObject = true;
					break;
				}
			}
		}
		else if (iState == GLUT_UP) {
			// if left button is released
			x_2 = x;
			y_2 = wHeight - y;
			xMouse = x;
			yMouse = y;
			isPressing = false;
			globalLine.setEndPoints(Vec2f(x_1, y_1), Vec2f(x_2, y_2));
			
			for(int i = 0;i<letters.size();++i)
			{
				letters[i].Cut(2);
				letters[i].Draw(-1, -1);
			}
			glutPostRedisplay();
		}
		
	}
}

void MouseMotionFunction(int x, int y) {
	x_2 = x;
	y_2 = wHeight - y;

	xMouse = x;
	yMouse = y;
	globalLine.setEndPoints(Vec2f(x_1, y_1), Vec2f(x_2, y_2));

	glutPostRedisplay();
}

void MousePassiveMotionFunction(int x, int y) {
	xMouse = x;
	yMouse = y;
	glutPostRedisplay();
}




// Handle dictionary
Object2D *getLetter(char &c) {
	int ascii = (int)c;
	switch (ascii) {
	case 65:
	case 97:
		return new A();
		break;
	case 66:
	case 98:
		return new B();
		break;
	case 67:
	case 99:
		return new C();
		break;
	case 68:
	case 100:
		return new D();
		break;
	case 69:
	case 101:
		return new E();
		break;
	case 70:
	case 102:
		return new F();
		break;
	case 71:
	case 103:
		return new G();
		break;
	case 72:
	case 104:
		return new H();
		break;
	case 73:
	case 105:
		return new I();
		break;
	case 74:
	case 106:
		return new J();
		break;
	case 75:
	case 107:
		return new K();
		break;
	case 76:
	case 108:
		return new L();
		break;
	case 77:
	case 109:
		return new M();
		break;
	case 78:
	case 110:
		return new N();
		break;
	case 79:
	case 111:
		return new O();
		break;
	case 80:
	case 112:
		return new P();
		break;
	case 81:
	case 113:
		return new Q();
		break;
	case 82:
	case 114:
		return new R();
		break;
	case 83:
	case 115:
		return new S();
		break;
	case 84:
	case 116:
		return new T();
		break;
	case 85:
	case 117:
		return new U();
		break;
	case 86:
	case 118:
		return new V();
		break;
	case 87:
	case 119:
		return new W();
		break;
	case 88:
	case 120:
		return new X();
		break;
	case 89:
	case 121:
		return new Y();
		break;
	case 90:
	case 122:
	default:
		return new Z();
		break;
	}
}