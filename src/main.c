#include <stdio.h>
#include <GL/glut.h>

int main(int argc, char* argv[])
{

	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);
		glVertex2f(-0.5, -0.5);
		glVertex2f(-0.5, -0.5);
		glVertex2f(-0.5, -0.5);
		glVertex2f(-0.5, -0.5);
	glEnd();
	
	glFlush();

	return 0;
}
