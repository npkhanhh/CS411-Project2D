#include"Line.h"
#include "Letter.h"
#include <time.h>		/* time */
#include <stdlib.h>		/* srand, rand */


// Global vars
int x_1, x_2;
int y_1, y_2;
Line globalLine;
const int SIZE_OF_DICTIONARY = 5;
// Dictionary
string dictionary[SIZE_OF_DICTIONARY] = { 
	"Graphics", 
	"Computer", 
	"DucHuy", 
	"PhucKhanh",
	"Project"
};



int wWidth = 1024;	// width of window
int wHeight = 768;	// height of window

void RenderScene(void);
void SetupRC(void);
void MouseClick(int iButton, int iState, int x, int y);	// Callback function triggered when mouse button is actived
void MouseMotionFunction(int x, int y);					// Callback function triggered when mouse moves when one mouse button is pressed


int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(wWidth, wHeight);
	glutCreateWindow("2D game 1151019-1151020");

	glutDisplayFunc(RenderScene);
	SetupRC();

	// Register callback functions for mouse control
	glutMouseFunc(MouseClick);
	glutMotionFunc(MouseMotionFunction);
	glutMainLoop();

	

	return 0;
}


void RenderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 1, 1);	// white background

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, wWidth, 0, wHeight, 0, 1);
	glMatrixMode(GL_MODELVIEW);

	glBegin(GL_POLYGON);
		glVertex2f(0, 0);
		glVertex2f(150, 0);
		glVertex2f(150, 150);
		glVertex2f(0, 150);
	glEnd();
	glFlush();


	// TODO: Display a random word from dictionary
	/*int index = rand() % SIZE_OF_DICTIONARY;
	string word = dictionary[index];
	for (int i = 0; i < word.length(); ++i) {

	}*/

	F a;
	a.Draw(0, 0);
	//a.fillColor();
}

void SetupRC(void) {
	glClearColor(0.5, 0.5, 0.5, 1);
}


void MouseClick(int iButton, int iState, int x, int y) {
	if (iButton == GLUT_LEFT_BUTTON) {
		// if the button is the left button
		if (iState == GLUT_DOWN) {
			// if left button is clicked
			x_1 = x;
			y_1 = wHeight - y;
		}
		else if (iState == GLUT_UP) {
			// if left button is released
			x_2 = x;
			y_2 = wHeight - y;
			globalLine.setEndPoints(Vec2f(x_1, y_1), Vec2f(x_2, y_2));
			globalLine.Draw(0, 0);
		}
		
	}
}

void MouseMotionFunction(int x, int y) {
	x_2 = x;
	y_2 = wHeight - y;
	globalLine.setEndPoints(Vec2f(x_1, y_1), Vec2f(x_2, y_2));
	RenderScene();
	globalLine.Draw(0, 0);
}