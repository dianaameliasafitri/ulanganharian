#include <GL/glut.h>
void renderScene();
int main(int argc, char* argv[])
{
glutInit(&argc, argv);
glutCreateWindow("ulangan");
glutDisplayFunc(renderScene);
glutMainLoop();
return 0;
}
void renderScene()
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);

glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(-0.1f,0.05f);

glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(-0.6f,0.05f);

glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(-0.5f,-0.1f);

glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(-0.6f,-0.25);

glColor3f(1.5f, 0.5f, 1.5f);
glVertex2f(-0.1f,-0.25f);

glColor3f(1.5f, 0.5f, 1.5f);
glVertex2f(-0.1f,-0.4f);

glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(0.1f,-0.1f);

glColor3f(1.5f, 0.5f, 1.5f);
glVertex2f(-0.1f,0.2f);
glEnd();
glFlush();
}


