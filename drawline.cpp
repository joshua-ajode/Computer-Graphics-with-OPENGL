#include <GL/glut.h>

void drawLine();

int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 400);
    glutCreateWindow("Draw lines");

    glClearColor(1.0, 0.5, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 200, 0.0, 200);

    glutDisplayFunc(drawLine); // display callback
    glutMainLoop();
    return 0;
}

void drawLine(){
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0.0, 0.0, 0.0); // Black in color

   glBegin(GL_LINES);
        glVertex2i(10, 10);
        glVertex2i(150, 170);
        glVertex2i(10, 150);
        glVertex2i(170, 10);
        glVertex2i(90, 90);
        glVertex2i(10, 90);
   glEnd();
   glFlush();

}
