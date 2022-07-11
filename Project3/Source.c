#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<windows.h>

int number = -1;

//Draw segments
void draw_A()
{
	glBegin(GL_POLYGON); //A
	glColor3f(0.8, 0.0, 0.0);
	glVertex2i(-30, 63);
	glVertex2i(-30, 53);
	glVertex2i(30, 53);
	glVertex2i(30, 63);
	glEnd();
}

void draw_B()
{
	glBegin(GL_POLYGON); //B
	glColor3f(0.8, 0.0, 0.0);
	glVertex2i(30, 50);
	glVertex2i(30, 8);
	glVertex2i(40, 8);
	glVertex2i(40, 50);
	glEnd();
}

void draw_C()
{
	glBegin(GL_POLYGON); //C
	glColor3f(0.8, 0.0, 0.0);
	glVertex2i(30, 2);
	glVertex2i(30, -40);
	glVertex2i(40, -40);
	glVertex2i(40, 2);
	glEnd();
}

void draw_D()
{
	glBegin(GL_POLYGON); //D
	glColor3f(0.8, 0.0, 0.0);
	glVertex2i(-30, -43);
	glVertex2i(-30, -53);
	glVertex2i(30, -53);
	glVertex2i(30, -43);
	glEnd();
}

void draw_E()
{
	glBegin(GL_POLYGON); //E
	glColor3f(0.8, 0.0, 0.0);
	glVertex2i(-40, 2);
	glVertex2i(-40, -40);
	glVertex2i(-30, -40);
	glVertex2i(-30, 2);
	glEnd();

}

void draw_F()
{
	glBegin(GL_POLYGON); //F
	glColor3f(0.8, 0.0, 0.0);
	glVertex2i(-40, 50);
	glVertex2i(-40, 8);
	glVertex2i(-30, 8);
	glVertex2i(-30, 50);
	glEnd();
}

void draw_G()
{
	glBegin(GL_POLYGON); //G
	glColor3f(0.8, 0.0, 0.0);
	glVertex2i(-28, 10);
	glVertex2i(-28, 0);
	glVertex2i(28, 0);
	glVertex2i(28, 10);
	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glLineWidth(2);
	
	glBegin(GL_LINE_LOOP);//A
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-30,63);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-30,53);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(30,53);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(30,63);
	glEnd();

	glBegin(GL_LINE_LOOP); //B
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(30, 50);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(30, 8);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(40, 8);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(40, 50);
	glEnd();

	glBegin(GL_LINE_LOOP); //C
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(30, 2);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(30, -40);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(40, -40);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(40, 2);
	glEnd();

	glBegin(GL_LINE_LOOP); //D
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-30, -43);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-30, -53);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(30, -53);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(30, -43);
	glEnd();

	glBegin(GL_LINE_LOOP); //E
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-40, 2);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-40, -40);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-30, -40);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-30, 2);
	glEnd();

	glBegin(GL_LINE_LOOP); //F
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-40, 50);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-40, 8);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-30, 8);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-30, 50);
	glEnd();

	glBegin(GL_LINE_LOOP); //G
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-28, 10);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(-28, 0);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(28, 0);
	glColor4f(0.1, 0.1, 0.1, 0.1);
	glVertex2i(28, 10);
	glEnd();

	switch (number) 
	{
	case 0: //0
		draw_A();
		draw_B();
		draw_C();
		draw_D();
		draw_E();
		draw_F();
		break;
	case 1: //1
		draw_B();
		draw_C();
		break;
	case 2: //2
		draw_A();
		draw_B();
		draw_G();
		draw_E();
		draw_D();
		break;
	case 3: //3
		draw_A();
		draw_B();
		draw_G();
		draw_C();
		draw_D();
		break;
	case 4: //4
		draw_B();
		draw_C();
		draw_F();
		draw_G();
		break;
	case 5: //5
		draw_A();
		draw_C();
		draw_D();
		draw_F();
		draw_G();
		break;
	case 6://6
		draw_A();
		draw_C();
		draw_D();
		draw_E();
		draw_F();
		draw_G();
		break;
	case 7://7
		draw_A();
		draw_B();
		draw_C();
		break;
	case 8://8
		draw_A();
		draw_B();
		draw_C();
		draw_D();
		draw_E();
		draw_F();
		draw_G();
		break;
	case 9://9
		draw_A();
		draw_B();
		draw_C();
		draw_D();
		draw_G();
		draw_F();
		break;
	case 10://A
		draw_A();
		draw_B();
		draw_C();
		draw_G();
		draw_E();
		draw_F();
		break;
	case 11://B
		draw_G();
		draw_C();
		draw_D();
		draw_E();
		draw_F();
		break;
	case 12://C
		draw_A();
		draw_D();
		draw_E();
		draw_F();
		break;
	case 13://D
		draw_B();
		draw_C();
		draw_D();
		draw_E();
		draw_G();
		break;
	case 14://E
		draw_A();
		draw_G();
		draw_F();
		draw_D();
		draw_E();
		break;
	case 15://F
		draw_A();
		draw_G();
		draw_E();
		draw_F();
		break;
		
	}
	glutSwapBuffers();
}

void reshape(int w, int h) 
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100,100,-100,100);
	glMatrixMode(GL_MODELVIEW);

}

void timer_asc()
{
	number += 1;
	display();
	glutTimerFunc(1000, timer_asc, 5);
}

/*void timer_desc()
{
	number -= 1;
	display();
	glutTimerFunc(1000, timer_desc, 5);
}*/

void welcomeDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1, 0, 0);
	glRasterPos3f(-85, 70, 0);
	char str[50] = "SEVEN SEGMENT DISPLAY";
	for(int i=0;i<strlen(str);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);

	glColor3f(0, 0, 1);
	glRasterPos3f(-50, -50, 0);
	char str2[50] = "Submitted by:-";
	for (int i = 0; i < strlen(str2); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[i]);
	
	glColor3f(1, 1, 1);
	glRasterPos3f(-85, 0, 0);
	char str3[50] = "***Left click on mouse to START***";
	for (int i = 0; i < strlen(str3); i++)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, str3[i]);


	glColor3f(1.0, 1.0, 1.0);
	glRasterPos3f(-65, -70,0);
	char* string = "Name1";
	int i = 0;
	while (string[i] != '\0') {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, string[i]);
		i++;
	}

	glColor3f(1.0, 1.0, 1.0);
	glRasterPos3f(-65, -80,0);
	char* string2 = "Name2";
	int len, j = 0;
	len = (int)strlen(string2);
	for (j = 0; j < len; j++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, string2[j]);

	}
	glutSwapBuffers();
}
void init()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
}

void mouse(int btn, int state, int x, int y)
{
	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		glutTimerFunc(0, timer_asc, 0);
	}
	/*if (btn == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		glutTimerFunc(0, timer_desc, 0);
	}*/
}

int main(int argc, char** argv) 
{
	glutInit(&argc, argv);         
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_SINGLE);
	glutInitWindowSize(350, 400);  
	glutInitWindowPosition(50, 50);
	glutCreateWindow("seven segment display");
	glutReshapeFunc(reshape);
	glutDisplayFunc(welcomeDisplay);
	glutMouseFunc(mouse);
	init();
	glutMainLoop();
	return 0;
}