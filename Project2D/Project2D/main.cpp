#include"Line.h"
#include "Letter.h"

int wWidth = 400;	// width of window
int wHeight = 300;	// height of window

void RenderScene(void);
void SetupRC(void);


int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(wWidth, wHeight);
	glutCreateWindow("2D game 1151019-1151020");

	glutDisplayFunc(RenderScene);
	SetupRC();
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


	Z a;
	a.Draw();
	a.fillColor();
}

void SetupRC(void) {
	glClearColor(0.5, 0.5, 0.5, 1);
}

