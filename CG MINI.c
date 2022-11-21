 #include <stdlib.h>
#include <math.h>
#include <GL\glut.h>
#include<string.h>

float d=0,h=0,b=0,m=0,m1=0,l=0,q=0,c=0;
int slide;

int x,st,stars=0;
int y;

void output(char *str)
{
	int k;
	for (k=0;k<strlen(str);k++){
		glutStrokeCharacter(GLUT_STROKE_ROMAN,str[k]);
	}
}
void intro(void)
{
	glClearColor(0.81, 0.83, 0.74 , 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(194, 204, 151);
	glBegin(GL_POLYGON);
	glVertex2i(25,55);
	glVertex2i(25 ,80);
	glVertex2i(70,80);
   glVertex2i(70,55);
	glEnd();	
	glPushMatrix();
	glTranslatef(10, 95 , 0);
	glColor3f(0,1,0);
	glScalef(0.03 , 1.3 ,0);
	glLineWidth(3);
	output("$");
	glPopMatrix();
	
	glClearColor(0.81, 0.83, 0.74 , 0.0);
	glClear(GL_COLOR_BUFFER_BIT);	
	glPushMatrix();
	glTranslatef(3 , 85 , 0);
	glColor3f(0.0 , 0.13 , 0.8);
	glScalef(0.03 , 0.03 ,0);
	glLineWidth(3);
	output("Mangalore Institute of Technology and Engineering");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(17, 75 , 0);
	glColor3f(0.95 , 0.5 , 0.58);
	glScalef(0.03 , 0.03 ,0);
	glLineWidth(3);
	output("Computer Science and Engineering");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(17, 65 , 0);
	glColor3f(0.99 , 0.2 , 0.58);
	glScalef(0.03 , 0.03 ,0);
	glLineWidth(3);
	output("Computer Graphics Mini-Project on");
	glPopMatrix();
	
	
	glPushMatrix();
	glTranslatef(21, 55 , 0);
	glColor3f(0.45, 0.0 , 0.9);
	glScalef(0.05 , 0.05 ,0);
	glLineWidth(6);
	output("INNOCENT ROBBER");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(5 , 40 , 0);
	glColor3f(1.0 , 0.1 , 0.25);
	glScalef(0.025 , 0.025 ,0);
	glLineWidth(2);
	output("MOHAMMED SIMRAN ");
	glPopMatrix();

	glPushMatrix();
	glTranslatef(10 , 35 , 0);
	glColor3f(1.0 , 0.1 , 0.25);
	glScalef(0.02 , 0.02 ,0);
	glLineWidth(1);
	output("4MT19CS087");
	glPopMatrix();
		
	glPushMatrix();
	glTranslatef(65 , 40 , 0);
	glColor3f(1.0 , 0.0 , 0.25);
	glScalef(0.025 , 0.025 ,0);
	glLineWidth(2);
	output("MUHAMMED JUNAID");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(70 , 35 , 0);
	glColor3f(1.0 , 0.1 , 0.25);
	glScalef(0.02 , 0.02 ,0);
	glLineWidth(1);
	output("4MT19CS090");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(30 , 20 , 0);
	glColor3f(0.8 , 0.0 , 0.13);
	glScalef(0.02 , 0.02 ,0);
	glLineWidth(1);
	output("Under the guidance of");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(32 , 15 , 0);
	glColor3f(0.8 , 0.0 , 0.13);
	glScalef(0.025 , 0.025 ,0);
	glLineWidth(2);
	output("Ms. Sunitha N V");
	glPopMatrix();
	
	glFlush();
	
}
void legs()
{
	glColor3f(0.10,0.29,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(75-h,31);
	glVertex2f(74.7-h,28);
	glVertex2f(79.5-h,28);
	glVertex2f(80-h,31);
	glPopMatrix();
	glEnd();
	glColor3f(0.10,0.29,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(75-h,29);
	glVertex2f(74.6-h,26);
	glVertex2f(76-h,22.5);
	glVertex2f(77-h,22.5);
	glVertex2f(76-h,26.5);
	glVertex2f(77-h,29);
	glPopMatrix();
	glEnd();
	glColor3f(0.10,0.29,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(77.5-h,29);
	glVertex2f(77.1-h,26);
	glVertex2f(79.5-h,23);
	glVertex2f(80.5-h,23);
	glVertex2f(78.5-h,26.5);
	glVertex2f(79.7-h,29);
	glPopMatrix();
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(79.5-h,23);
	glVertex2f(80.5-h,23);
	glVertex2f(80.9-h,22.5);
	glVertex2f(79-h,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(76-h,22.5);
	glVertex2f(77-h,22.5);
	glVertex2f(77-h,22);
	glVertex2f(75.5-h,22);
	glPopMatrix();
	glEnd();
	
}


void slide1()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0,1.0,1.0,0.0);
	//road
	glColor3ub(140,145,148);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(0,20);
	glVertex2i(100,20);
    glVertex2i(100,0);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(0,12);
	glVertex2i(0,14);
	glVertex2i(100,14);
    glVertex2i(100,12);
	glEnd();
	
	glColor3ub(194, 204, 151);
	glBegin(GL_POLYGON);
	glVertex2i(20,20);
	glVertex2i(20,55);
	glVertex2i(75,55);
    glVertex2i(75,20);
	glEnd();
	
	//1stfloor
		glColor3ub(194, 204, 151);
	glBegin(GL_POLYGON);
	glVertex2i(25,55);
	glVertex2i(25 ,80);
	glVertex2i(70,80);
   glVertex2i(70,55);
	glEnd();
	//window1st1
	glColor3ub(144,161,118);
	glBegin(GL_POLYGON);
	glVertex2i(27,57);
	glVertex2i(27,67);
	glVertex2i(31,67);
    glVertex2i(31,57);
	glEnd();
	glColor3f(0.54,0.72,0.72);
	glBegin(GL_POLYGON);
	glVertex2f(27.5,58);
	glVertex2f(27.5,66);
	glVertex2f(30.5,66);
    glVertex2f(30.5,58);
	glEnd();
	
	//window1st2
	glColor3ub(144,161,118);
	glBegin(GL_POLYGON);
	glVertex2i(35,57);
	glVertex2i(35,67);
	glVertex2i(39,67);
    glVertex2i(39,57);
	glEnd();
	glColor3ub(140,189,185);
	glBegin(GL_POLYGON);
	glVertex2i(36,58);
	glVertex2i(36,66.8);
	glVertex2i(38.5,66.8);
    glVertex2i(38.5,58);
	glEnd();
	//winsow13
	glColor3ub(144,161,118);
	glBegin(GL_POLYGON);
	glVertex2i(43,57);
	glVertex2i(43,67);
	glVertex2i(47,67);
    glVertex2i(47,57);
	glEnd();
	glColor3ub(140,189,185);
	glBegin(GL_POLYGON);
	glVertex2i(44,58);
	glVertex2i(44,66.8);
	glVertex2i(46.5,66.8);
    glVertex2i(46.5,58);
	glEnd();
	//window14
	glColor3ub(144,161,118);
	glBegin(GL_POLYGON);
	glVertex2i(51,57);
	glVertex2i(51,67);
	glVertex2i(55,67);
    glVertex2i(55,57);
	glEnd();
	glColor3ub(140,189,185);
	glBegin(GL_POLYGON);
	glVertex2i(52,58);
	glVertex2i(52,66.8);
	glVertex2i(54.5,66.8);
    glVertex2i(54.5,58);
	glEnd();
	//window15
	glColor3ub(144,161,118);
	glBegin(GL_POLYGON);
	glVertex2i(59,57);
	glVertex2i(59,67);
	glVertex2i(63,67);
    glVertex2i(63,57);
	glEnd();
	glColor3ub(140,189,185);
	glBegin(GL_POLYGON);
	glVertex2i(60,58);
	glVertex2i(60,66.8);
	glVertex2i(62.5,66.8);
    glVertex2i(62.5,58);
	glEnd();
	//window16
	glColor3ub(144,161,118);
	glBegin(GL_POLYGON);
	glVertex2i(65,57);
	glVertex2i(65,67);
	glVertex2i(69,67);
    glVertex2i(69,57);
	glEnd();
	glColor3ub(140,189,185);
	glBegin(GL_POLYGON);
	glVertex2i(66,58);
	glVertex2i(66,66.8);
	glVertex2i(68.5,66.8);
    glVertex2i(68.5,58);
	glEnd();
	//window17
   glColor3ub(144,161,118);
	glBegin(GL_POLYGON);
	glVertex2i(27,69);
	glVertex2i(27,79);
	glVertex2i(31,79);
    glVertex2i(31,69);
	glEnd();
	glColor3ub(140,189,185);
	glBegin(GL_POLYGON);
	glVertex2i(28,70);
	glVertex2i(28,78.5);
	glVertex2i(30.5,78.5);
    glVertex2i(30.5,70);
	glEnd();
    //window18
     glColor3ub(144,161,118);
	glBegin(GL_POLYGON);
	glVertex2i(35,69);
	glVertex2i(35,79);
	glVertex2i(39,79);
    glVertex2i(39,69);
	glEnd();
	glColor3ub(140,189,185);
	glBegin(GL_POLYGON);
	glVertex2i(36,70);
	glVertex2i(36,78.5);
	glVertex2i(38.5,78.5);
    glVertex2i(38.5,70);
	glEnd();
	//windows19
	 glColor3ub(144,161,118);
	glBegin(GL_POLYGON);
	glVertex2i(43,69);
	glVertex2i(43,79);
	glVertex2i(47,79);
    glVertex2i(47,69);
	glEnd();
	glColor3ub(140,189,185);
	glBegin(GL_POLYGON);
	glVertex2i(44,70);
	glVertex2i(44,78.5);
	glVertex2i(46.5,78.5);
    glVertex2i(46.5,70);
	glEnd();
    //windows20
     glColor3ub(144,161,118);
	glBegin(GL_POLYGON);
	glVertex2i(51,69);
	glVertex2i(51,79);
	glVertex2i(55,79);
    glVertex2i(55,69);
	glEnd();
	glColor3ub(140,189,185);
	glBegin(GL_POLYGON);
	glVertex2i(52,70);
	glVertex2i(52,78.5);
	glVertex2i(54.5,78.5);
    glVertex2i(54.5,70);
	glEnd();
    //windows21
     glColor3ub(144,161,118);
	glBegin(GL_POLYGON);
	glVertex2i(59,69);
	glVertex2i(59,79);
	glVertex2i(63,79);
    glVertex2i(63,69);
	glEnd();
	glColor3ub(140,189,185);
	glBegin(GL_POLYGON);
	glVertex2i(60,70);
	glVertex2i(60,78.5);
	glVertex2i(62.5,78.5);
    glVertex2i(62.5,70);
	glEnd();
	//windows22
	glColor3ub(144,161,118);
	glBegin(GL_POLYGON);
	glVertex2i(65,69);
	glVertex2i(65,79);
	glVertex2i(69,79);
    glVertex2i(69,69);
	glEnd();
	glColor3ub(140,189,185);
	glBegin(GL_POLYGON);
	glVertex2i(66,70);
	glVertex2i(66,78.5);
	glVertex2i(68.5,78.5);
    glVertex2i(68.5,70);
	glEnd();

	//mainblock
    glColor3ub(237, 239, 230);
	glBegin(GL_POLYGON);
	glVertex2i(20,20);
	glVertex2i(20,24.9);
    glVertex2i(75,24.9);
    glVertex2i(75,20);
    glEnd();
	
	//doorout
		glColor3ub(122, 128, 102);
	glBegin(GL_POLYGON);
    glVertex2i(43,20);
	glVertex2i(43,35);
	glVertex2i(50,35);
    glVertex2i(50,20);
  	glEnd();
	
	//door
    	glColor3ub(122,169,168);
	glBegin(GL_POLYGON);
	glVertex2i(44,20);
	glVertex2i(44,34.7);
	glVertex2i(49,34.7);
   glVertex2i(49,20);
	glEnd();
	
//	board
	glColor3f(0.0 , 0.0 , 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(35.5,37.5);
	glVertex2i(35.5,45);
	glVertex2i(60,45);
    glVertex2i(60,37.5);
	glEnd();
	glColor3f(1.0 , 1.0 , 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(36.5,38.5);
	glVertex2i(36.5,44);
	glVertex2i(59,44);
    glVertex2i(59,38.5);
    
    
    
	glEnd();
	glPushMatrix();
	glTranslatef(39,40,0);
	glColor3f(0.387,0.49,0.517);
	glScalef(0.05,0.03,0);
	glLineWidth(4);
	output("BANK");
	glPopMatrix();
	glEnd();
	
	//block1
		glColor3ub(184, 189, 156);
	glBegin(GL_POLYGON);
	glVertex2i(21,20);
	glVertex2i(21,24);
	glVertex2i(25,24);
    glVertex2i(25,20);
	glEnd();
	
	//block2
			glColor3ub(184, 189, 156);
	glBegin(GL_POLYGON);
	glVertex2i(26,20);
	glVertex2i(26,24);
	glVertex2i(31,24);
    glVertex2i(31,20);
	glEnd();
	
	//block3
		glColor3ub(184, 189, 156);
	glBegin(GL_POLYGON);
	glVertex2i(32,20);
	glVertex2i(32,24);
	glVertex2i(37,24);
    glVertex2i(37,20);
	glEnd();
	//block4
		glColor3ub(184, 189, 156);
	glBegin(GL_POLYGON);
	glVertex2i(38,20);
	glVertex2i(38,24);
	glVertex2i(43,24);
    glVertex2i(43,20);
	glEnd();
	glColor3ub(184, 189, 156);
	glBegin(GL_POLYGON);
	glVertex2i(50,20);
	glVertex2i(50,24);
	glVertex2i(54,24);
    glVertex2i(54,20);
	glEnd();
	
	//block4
		glColor3ub(184, 189, 156);
	glBegin(GL_POLYGON);
	glVertex2i(55,20);
	glVertex2i(55,24);
	glVertex2i(59,24);
    glVertex2i(59,20);
	glEnd();
	
	//block5
		glColor3ub(184, 189, 156);
	glBegin(GL_POLYGON);
	glVertex2i(60,20);
	glVertex2i(60,24);
	glVertex2i(65,24);
    glVertex2i(65,20);
	glEnd();
	//block6
			glColor3ub(184, 189, 156);
	glBegin(GL_POLYGON);
	glVertex2i(66,20);
	glVertex2i(66,24);
	glVertex2i(71,24);
    glVertex2i(71,20);
	glEnd();
	//block7
	glColor3ub(184, 189, 156);
	glBegin(GL_POLYGON);
	glVertex2i(72,20);
	glVertex2i(72,24);
	glVertex2i(75,24);
    glVertex2i(75,20);
	glEnd();
	//window1
		glColor3ub(107,125,102);
	glBegin(GL_POLYGON);
	glVertex2i(25,30);
	glVertex2i(25,45);
	glVertex2i(30,45);
    glVertex2i(30,30);
	glEnd();
	
	
	//window2
	glColor3ub(107,125,102);
	glBegin(GL_POLYGON);
	glVertex2i(65,30);
	glVertex2i(65,45);
	glVertex2i(70,45);
    glVertex2i(70,30);
	glEnd();
	//innerwindow
		glColor3ub(138, 184, 184);
	glBegin(GL_POLYGON);
	glVertex2i(26,31);
	glVertex2i(26,44);
	glVertex2i(29,44);
    glVertex2i(29,31);
	glEnd();
	glColor3ub(107,125,102);
	glBegin(GL_POLYGON);
	glVertex2i(26,32);
	glVertex2i(26,33);
	glVertex2i(29,38);
    glVertex2i(29,37.5);
	glEnd();
	glColor3ub(107,125,102);
	glBegin(GL_POLYGON);
	glVertex2i(26,43);
	glVertex2i(26,42);
	glVertex2i(29,39);
    glVertex2i(29,38.5);
	glEnd();
	
	glColor3ub(138, 184, 184);
	glBegin(GL_POLYGON);
	glVertex2i(66,31);
	glVertex2i(66,44);
	glVertex2i(69,44);
    glVertex2i(69,31);
	glEnd();
		glColor3ub(107,125,102);
	glBegin(GL_POLYGON);
	glVertex2i(66,32);
	glVertex2i(66,33);
	glVertex2i(69,38);
    glVertex2i(69,37.5);
	glEnd();
	glColor3ub(107,125,102);
	glBegin(GL_POLYGON);
	glVertex2i(66,43);
	glVertex2i(66,42);
	glVertex2i(69,39);
    glVertex2i(69,38.5);
	glEnd();
	//side
	glColor3ub(155,220,189);
	glBegin(GL_POLYGON);
	glVertex2i(0,20);
	glVertex2i(0,40);
	glVertex2i(7,40);
    glVertex2i(7,20);
	glEnd();
	glColor3ub(155,220,189);
	glBegin(GL_POLYGON);
	glVertex2i(8,20);
	glVertex2i(8,60);
	glVertex2i(15,60);
    glVertex2i(15,20);
	glEnd();
	glColor3ub(155,220,189);
	glBegin(GL_POLYGON);
	glVertex2i(15,20);
	glVertex2i(15,40);
	glVertex2i(20,40);
    glVertex2i(20,20);
	glEnd();
	glColor3ub(155,220,189);
	glBegin(GL_POLYGON);
	glVertex2i(75,20);
	glVertex2i(75,50);
	glVertex2i(80,50);
    glVertex2i(80,20);
	glEnd();
	glColor3ub(155,220,189);
	glBegin(GL_POLYGON);
	glVertex2i(80,20);
	glVertex2i(80,70);
	glVertex2i(89,70);
    glVertex2i(89,20);
	glEnd();
	glColor3ub(155,220,189);
	glBegin(GL_POLYGON);
	glVertex2i(90,20);
	glVertex2i(90,40);
	glVertex2i(95,40);
    glVertex2i(95,20);
	glEnd();
	glColor3ub(155,220,189);
	glBegin(GL_POLYGON);
	glVertex2i(95,20);
	glVertex2i(95,80);
	glVertex2i(100,80);
    glVertex2i(100,20);
	glEnd();
	
	//car
		glColor3ub(138, 184, 184);
	glBegin(GL_POLYGON);
	glVertex2i(4,21);
	glVertex2i(4,28);
	glVertex2i(17,28);
    glVertex2i(17,21);
	glEnd();
		glColor3ub(0, 184, 184);
	glBegin(GL_POLYGON);
	glVertex2i(8,28);
	glVertex2i(9,32);
	glVertex2i(13,32);
    glVertex2i(14,28);
	glEnd();
	//tyre	
	glColor3f(0.0,0.0,0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
	glPushMatrix();
	glTranslatef(8,21,0);
	glutSolidSphere(2,10,5);
	glPopMatrix();
	
	glColor3f(0.0,0.0,0.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();	
	glTranslatef(13,21,0);
	glutSolidSphere(2,10,5);
	glPopMatrix();
	//car2
	glColor3ub(138, 184, 184);
	glBegin(GL_POLYGON);
	glVertex2i(80,22);
	glVertex2i(80,28);
	glVertex2i(90,28);
    glVertex2i(90,22);
	glEnd();
		glColor3ub(0, 184, 184);
	glBegin(GL_POLYGON);
	glVertex2i(82,28);
	glVertex2i(84,32);
	glVertex2i(87,32);
   glVertex2i(88,28);
   
   //TYRE
	glEnd();
	glColor3f(0.0,0.0,0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
	glPushMatrix();
	glTranslatef(82,21,0);
	glutSolidSphere(2,10,5);
	glPopMatrix();
	
	glColor3f(0.0,0.0,0.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();	
	glTranslatef(88,21,0);
	glutSolidSphere(2,10,5);
	glPopMatrix();
	//clouds
	glPushMatrix();
	glTranslatef(7.8+c , 89.8 , 0);
	glColor3ub(166,225,231);
	glutSolidSphere(4, 80 , 40);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(11.3+c , 92.8 , 0);
	glColor3ub(166,225,231);
	glutSolidSphere(4 , 80 , 40);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(13.8+c, 89.8 , 0);
	glColor3ub(166,225,231);
	glutSolidSphere(4 , 80 , 40);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(40.8+c, 89.8 , 0);
	glColor3ub(166,225,231);
	glutSolidSphere(4, 80 , 40);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(44.3+c, 92.8 , 0);
	glColor3ub(166,225,231);
	glutSolidSphere(4 , 80 , 40);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(47.8+c, 89.8 , 0);
	glColor3ub(166,225,231);
	glutSolidSphere(4 , 80 , 40);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(80.8+c, 89.8 , 0);
	glColor3ub(166,225,231);
	glutSolidSphere(4, 80 , 40);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(84.3+c, 92.8 , 0);
	glColor3ub(166,225,231);
	glutSolidSphere(4 , 80 , 40);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(87.8+c, 89.8 , 0);
	glColor3ub(166,225,231);
	glutSolidSphere(4 , 80 , 40);
	glPopMatrix();
	glFlush();
	
	
}


void robber()
{
	//head
	glColor3f(0.90 , 0.68 , 0.55);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(80-h,43);
	glVertex2f(80-h,38);
	glVertex2f(76.5-h,38);
	glVertex2f(76.5-h,43);
	glPopMatrix();
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77-h , 41 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78 -h, 41 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78-h, 42 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.3 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78-h , 44 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-h , 43 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.3 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-h, 42 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();

//eyes
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.2-h , 44 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-h , 43.3 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.2-h , 44 , 0);
	glColor3f(1.0 , 1.0 , 1.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-h, 43.3 , 0);
	glColor3f(1.0 , 1.0 , 1.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.35-h , 43.3 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.15 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77-h, 44 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.15 , 80 , 40);
	glPopMatrix();
	// smile
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.2-h , 42 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(76.1-h, 41.5 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.1-h, 41.2 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glColor3f(0.0 , 0.0 , 0.0);
	glBegin(GL_POLYGON);
	
	glPushMatrix();
	glVertex2f(77.3-h,40.6);
	glVertex2f(77.3-h,41);
	glVertex2f(76.3-h,41);
    glVertex2f(75.5-h,41.4);
	glVertex2f(75.5-h,41.1);
	glVertex2f(76.3-h,41.3);
	glPopMatrix();
	glEnd();

	//shirt
	glColor3ub(137,207,240);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(80-h,39);
	glVertex2f(80-h,31);
	glVertex2f(75-h,31);
	glVertex2f(76-h,39);
	glPopMatrix();
	glEnd();
	//hammer
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(80-h,39);
	glVertex2f(80.5-h,39);
	glVertex2f(80.5-h,34);
	glVertex2f(80-h,34);
	glEnd();
	glColor3ub(43,39,31);
	glBegin(GL_POLYGON);
	glVertex2f(79-h,34);
	glVertex2f(81-h,34);
	glVertex2f(81-h,33);
	glVertex2f(79-h,33);
	glEnd();
//	
	//hands
	glColor3ub(137,207,240);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(72-h,38);
	glVertex2f(72-h,36);
	glVertex2f(79-h,36);
	glVertex2f(79-h,38);
	glPopMatrix();
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(72-h , 37 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1 , 80 , 40);
	glPopMatrix();
	//hair
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(79.5-h,45);
	glVertex2f(77-h,45);
	glVertex2f(76.5-h,46);
	glVertex2f(79.5-h,45.5);
	glPopMatrix();
	glEnd();
	//piggy bank
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(72-h, 37.8 , 0);
	glColor3f(1.0 , 0.12 , 0.97);
	glutSolidSphere(1.9 , 80 , 40);
	glPopMatrix();
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glPushMatrix();
//	glTranslatef(72.4 , 39.3 , 0);
//	glColor3f(1.0 , 0.12 , 0.97);
//	glutSolidSphere(0.4 , 80 , 40);
//	glPopMatrix();
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glPushMatrix();
//	glTranslatef(72.4 , 39.3 , 0);
//	glColor3f(0.0 , 0.0 , 0.0);
//	glutSolidSphere(0.25 , 80 , 40);
//	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(70.4-h , 39.1 , 0);
	glColor3f(1.0 , 0.12 , 0.97);
	glutSolidSphere(0.4 , 80 , 40);
	glPopMatrix();
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glPushMatrix();
//	glTranslatef(71.4 , 39.3 , 0);
//	glColor3f(0.0 , 0.0 , 0.0);
//	glutSolidSphere(0.25 , 80 , 40);
//	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(69.95-h, 37.7 , 0);
	glColor3f(1.0 , 0.12 , 0.97);
	glutSolidSphere(1 , 3 , 3);
	glPopMatrix();
	glColor3f(1.0 , 0.12 , 0.97);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(70-h,37);
	glVertex2f(70-h,38);
	glVertex2f(71-h,38);
	glVertex2f(71-h,37);
	glPopMatrix();
	glEnd();
	
	legs();
		
}

void door()
{
	//door
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	

	glColor3f(0.53,0.72,0.70);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(50+d,22);
	glVertex2f(50+d,73.5);
	glVertex2f(58,73.5);
	glVertex2i(58,22);
	glPopMatrix();
	glEnd();
	robber();
	glColor3f(0.53,0.72,0.70);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(42,22);
	glVertex2f(42,73.5);
	glVertex2f(50-d,73.5);
	glVertex2i(50-d ,22);
	glTranslatef(15,0,0);
	glPopMatrix();
	glEnd();
	
	
	

}
void bank()
{
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glClearColor(0.81, 0.83, 0.74 , 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0.43,0.54,0.49);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2i(0,0);
	glVertex2i(100,0);
	glVertex2i(100,22);
	glVertex2i(0,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.55,0.57,0.58);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2i(0,0);
	glVertex2i(100,0);
	glVertex2i(100,20);
	glVertex2i(0,20);
	glPopMatrix();
	glEnd();
	glColor3f(0.96,0.97,0.95);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(0.0,22);
	glVertex2f(0.0,44.5);
	glVertex2f(100,44.5);
	glVertex2f(100,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(0.5,22);
	glVertex2f(0.5,44);
	glVertex2i(16,44);
	glVertex2i(16,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(16.5,22);
	glVertex2f(16.5,44);
	glVertex2i(32,44);
	glVertex2i(32,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(32.5,22);
	glVertex2f(32.5,44);
	glVertex2i(48,44);
	glVertex2i(48,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(48.5,22);
	glVertex2f(48.5,44);
	glVertex2i(64,44);
	glVertex2i(64,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(64.5,22);
	glVertex2f(64.5,44);
	glVertex2i(80,44);
	glVertex2i(80,22);
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(80.5,22);
	glVertex2f(80.5,44);
	glVertex2i(96,44);
	glVertex2i(96,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(96.5,22);
	glVertex2f(96.5,44);
	glVertex2i(100,44);
	glVertex2i(100,22);
	glPopMatrix();
	glEnd();
	//doorholder
	glColor3f(0.48,0.50,0.4);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(40,22);
	glVertex2f(40,74);
	glVertex2i(60,74);
	glVertex2i(60,22);
	glPopMatrix();
	glEnd();

	glColor3f(0.90,0.83,0.46);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(42,22);
	glVertex2f(42,73.5);
	glVertex2f(58,73.5);
	glVertex2i(58,22);
	glPopMatrix();
	glEnd();

	door();

	//window
	glColor3f(0.42,0.49,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(4,54);
	glVertex2f(4,100);
	glVertex2f(14,100);
	glVertex2i(14,54);
	glPopMatrix();
	glEnd();
	glColor3f(0.54,0.72,0.72);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(5,55);
	glVertex2f(5,100);
	glVertex2f(13,100);
	glVertex2i(13,55);
	glPopMatrix();
	glEnd();
	glColor3f(0.42,0.49,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(5,65);
	glVertex2f(5,65.8);
	glVertex2f(13,75.2);
	glVertex2i(13,76);
	glPopMatrix();
	glEnd();
	glColor3f(0.42,0.49,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(5,85);
	glVertex2f(5,85.8);
	glVertex2f(13,80.2);
	glVertex2i(13,81);
	glPopMatrix();
	glEnd();
	
	//window2
	glColor3f(0.42,0.49,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(86,54);
	glVertex2f(86,100);
	glVertex2f(96,100);
	glVertex2i(96,54);
	glPopMatrix();
	glEnd();
	glColor3f(0.54,0.72,0.72);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(87,55);
	glVertex2f(87,100);
	glVertex2f(95,100);
	glVertex2i(95,55);
	glPopMatrix();
	glEnd();
	glColor3f(0.42,0.49,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(86,65);
	glVertex2f(86,65.8);
	glVertex2f(95,75.2);
	glVertex2i(95,76);
	glPopMatrix();
	glEnd();
	glColor3f(0.42,0.49,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(86,85);
	glVertex2f(86,85.8);
	glVertex2f(95,80.2);
	glVertex2i(95,81);
	glPopMatrix();
	glEnd();
	//bank
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(30.5,80.5);
	glVertex2f(30.5,94.5);
	glVertex2f(69.5,94.5);
	glVertex2f(69.5,80.5);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(31,81);
	glVertex2f(31,94);
	glVertex2f(69,94);
	glVertex2i(69,81);
	glPopMatrix();
	glEnd();
	
	glPushMatrix();
	glTranslatef(32 , 83.5 , 0);
	glColor3f(0.37 , 0.49 , 0.517);
	glScalef(0.1, 0.08 ,0);
	glLineWidth(8);
	output("BANK");
	glPopMatrix();
	
	glFlush();
	
	
	
}

void insideBank()
{
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glClearColor(0.81, 0.83, 0.74 , 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	//floor
		glColor3ub(140,145,148);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(0,22);
	glVertex2i(100,22);
    glVertex2i(100,0);
	glEnd();
	//table
		glColor3ub(150,123,70);
	glBegin(GL_POLYGON);
	glVertex2i(22,22);
	glVertex2i(22,37);
	glVertex2i(50,37);
    glVertex2i(50,22);
	glEnd();
	//inner table
	glColor3ub(198,163,94);
	glBegin(GL_POLYGON);
	glVertex2f(22.7,22.7);
	glVertex2f(22.7,36.7);
	glVertex2f(49.3,36.7);
    glVertex2f(49.3,22.7);
	glEnd();
	//wndow1
	glColor3ub(197,255,234);
	glBegin(GL_POLYGON);
	glVertex2i(60,58);
	glVertex2i(60,80);
	glVertex2i(68,80);
    glVertex2i(68,58);
	glEnd();
	//crosswindow
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(64,58);
	glVertex2f(64,80);
	glVertex2f(64.3,80);
    glVertex2f(64.3,58);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(60,75);
	glVertex2f(60,75.3);
	glVertex2f(68,75.3);
    glVertex2f(68,75);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(60,70);
	glVertex2f(60,70.3);
	glVertex2f(68,70.3);
    glVertex2f(68,70);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(60,65);
	glVertex2f(60,65.2);
	glVertex2f(68,65.2);
    glVertex2f(68,65);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(60,61);
	glVertex2f(60,61.2);
	glVertex2f(68,61.2);
    glVertex2f(68,61);
	glEnd();
	//window2
		glColor3ub(197,255,234);
	glBegin(GL_POLYGON);
	glVertex2i(74,58);
	glVertex2i(74,80);
	glVertex2i(82,80);
    glVertex2i(82,58);
	glEnd();
	//crosswindow
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(78,58);
	glVertex2f(78,80);
	glVertex2f(78.3,80);
    glVertex2f(78.3,58);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(74,75);
	glVertex2f(74,75.3);
	glVertex2f(82,75.3);
    glVertex2f(82,75);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(74,70);
	glVertex2f(74,70.3);
	glVertex2f(82,70.3);
    glVertex2f(82,70);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(74,65);
	glVertex2f(74,65.2);
	glVertex2f(82,65.2);
    glVertex2f(82,65);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(74,61);
	glVertex2f(74,61.2);
	glVertex2f(82,61.2);
    glVertex2f(82,61);
	glEnd();
	//window3
	glColor3ub(197,255,234);
	glBegin(GL_POLYGON);
	glVertex2i(86,58);
	glVertex2i(86,80);
	glVertex2i(94,80);
    glVertex2i(94,58);
	glEnd();
	//crosswindow
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(90,58);
	glVertex2f(90,80);
	glVertex2f(90.3,80);
    glVertex2f(90.3,58);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(86,75);
	glVertex2f(86,75.3);
	glVertex2f(94,75.3);
    glVertex2f(94,75);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(86,70);
	glVertex2f(86,70.3);
	glVertex2f(94,70.3);
    glVertex2f(94,70);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(86,65);
	glVertex2f(86,65.2);
	glVertex2f(94,65.2);
    glVertex2f(94,65);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(86,61);
	glVertex2f(86,61.2);
	glVertex2f(94,61.2);
    glVertex2f(94,61);
	glEnd();
	
	//vault
	glColor3f(216,216,191);
	glPushMatrix();
	glTranslatef(0,60,0);
	glutSolidSphere(15,50,50);
	glPopMatrix();
		glColor3ub(201,189,140);
	glBegin(GL_POLYGON);
	glVertex2f(13,57);
	glVertex2f(13,62.2);
	glVertex2f(17,62.2);
    glVertex2f(17,57);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(13,59);
	glVertex2f(13,59.4);
	glVertex2f(17,59.4);
    glVertex2f(17,59);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(13,61);
	glVertex2f(13,61.4);
	glVertex2f(17,61.4);
    glVertex2f(17,61);
	glEnd();
	
	//receptionist
	glColor3ub(191,172,67);
	glBegin(GL_POLYGON);
	glVertex2f(31,37);
	glVertex2f(32,46);
	glVertex2f(38,46);
    glVertex2f(39,37);
	glEnd();
	//head 0f receptionist
	glColor3f(0.90 , 0.68 , 0.55);
	glPushMatrix();
	glTranslatef(35,50,0);
	glScalef(1.0,1.6,0);
	glutSolidSphere(3,50,50);
	glPopMatrix();
	glEnd();
//	glColor3ub(197,201,207);
//	glBegin(GL_POLYGON);
//	glVertex2f(32,46);
//	glVertex2f(32,47);
//	glVertex2f(38,47);
//    glVertex2f(38,46);
//	glEnd();
	//recephand
			glColor3ub(191,172,67);
	glBegin(GL_POLYGON);
	glVertex2f(31.9,44);
	glVertex2f(31.9,46);
	glVertex2f(42,46);
   glVertex2f(42,44);
	glEnd();
	glColor3f(0.90 , 0.68 , 0.55);
	glBegin(GL_POLYGON);
	glVertex2f(42,44);
	glVertex2f(42,46);
	glVertex2f(43,46);
    glVertex2f(43,44);
	glEnd();
	
	//reception_nose
	glColor3ub(198,141,113);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(35.5,50);
	glVertex2f(35.5,49);
	glVertex2f(37.5,49);
	glPopMatrix();
	glEnd();
	//reyes
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(34.3 , 52 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(36 , 52 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(34.4 , 52 , 0);
	glColor3f(1.0 , 1.0 , 1.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(36.1, 52 , 0);
	glColor3f(1.0 , 1.0 , 1.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(34.6 , 52 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.15 , 80 , 40);
    glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(36.3, 52 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.15 , 80 , 40);
	glPopMatrix();

    //rhair

    glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(35.3, 55.8 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(1.5, 80 , 40);
	glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(34.5, 55.9 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(32.5, 55.1 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(31.6, 53.3 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
		//rsmile
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(35,47.5);
	glVertex2f(36,46.5);
	glVertex2f(37,47.5);
//    glVertex2f(75.5,41.4);
//	glVertex2f(75.5,41.1);
//	glVertex2f(76.3,41.3);
	glPopMatrix();
	glEnd();
	//head
	glColor3f(0.90 , 0.68 , 0.55);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(80-b,43);
	glVertex2f(80-b,38);
	glVertex2f(76.5-b,38);
	glVertex2f(76.5-b,43);
	glPopMatrix();
	glEnd();
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77-b , 41 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78 -b, 41 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78-b, 42 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.3 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78-b , 44 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-b , 43 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.3 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-b, 42 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	//nose
//	glColor3f(0.90 , 0.68 , 0.55);
//	glBegin(GL_POLYGON);
//	glPushMatrix();
//	glVertex2f(75.7,44);
//	glVertex2f(74.7,42);
//	glVertex2f(76.7,41);
//	glPopMatrix();
//	glEnd();
//eyes
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.2-b , 44 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-b , 43.3 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.2-b , 44 , 0);
	glColor3f(1.0 , 1.0 , 1.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-b, 43.3 , 0);
	glColor3f(1.0 , 1.0 , 1.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.35-b , 43.3 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.15 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77-b, 44 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.15 , 80 , 40);
	glPopMatrix();
	// smile
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.2-b , 42 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(76.1-b, 41.5 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.1-b, 41.2 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glColor3f(0.0 , 0.0 , 0.0);
	glBegin(GL_POLYGON);
	
	glPushMatrix();
	glVertex2f(77.3-b,40.6);
	glVertex2f(77.3-b,41);
	glVertex2f(76.3-b,41);
    glVertex2f(75.5-b,41.4);
	glVertex2f(75.5-b,41.1);
	glVertex2f(76.3-b,41.3);
	glPopMatrix();
	glEnd();
//	
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glPushMatrix();
//	glTranslatef(76.8 , 41.2 , 0);
//	glColor3f(0.90 , 0.68 , 0.55);
//	glutSolidSphere(0.75 , 80 , 40);
//	glPopMatrix();
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glPushMatrix();
//	glTranslatef(76. , 41.2 , 0);
//	glColor3f(0.90 , 0.68 , 0.55);
//	glutSolidSphere(0.75 , 80 , 40);
//	glPopMatrix();
	//shirt
	glColor3ub(137,207,240);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(80-b,39);
	glVertex2f(80-b,31);
	glVertex2f(75-b,31);
	glVertex2f(76-b,39);
	glPopMatrix();
	glEnd();
	//hammer
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(80-b,39);
	glVertex2f(80.5-b,39);
	glVertex2f(80.5-b,34);
	glVertex2f(80-b,34);
	glEnd();
	glColor3ub(43,39,31);
	glBegin(GL_POLYGON);
	glVertex2f(79-b,34);
	glVertex2f(81-b,34);
	glVertex2f(81-b,33);
	glVertex2f(79-b,33);
	glEnd();
//	
	//hands
	glColor3ub(137,207,240);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(72-b,38);
	glVertex2f(72-b,36);
	glVertex2f(79-b,36);
	glVertex2f(79-b,38);
	glPopMatrix();
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(72-b , 37 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1 , 80 , 40);
	glPopMatrix();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(79.5-b,45);
	glVertex2f(77-b,45);
	glVertex2f(76.5-b,46);
	glVertex2f(79.5-b,45.5);
	glPopMatrix();
	glEnd();
	//piggy bank
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(72-b, 37.8 , 0);
	glColor3f(1.0 , 0.12 , 0.97);
	glutSolidSphere(1.9 , 80 , 40);
	glPopMatrix();
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glPushMatrix();
//	glTranslatef(72.4 , 39.3 , 0);
//	glColor3f(1.0 , 0.12 , 0.97);
//	glutSolidSphere(0.4 , 80 , 40);
//	glPopMatrix();
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glPushMatrix();
//	glTranslatef(72.4 , 39.3 , 0);
//	glColor3f(0.0 , 0.0 , 0.0);
//	glutSolidSphere(0.25 , 80 , 40);
//	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(70.4-b , 39.1 , 0);
	glColor3f(1.0 , 0.12 , 0.97);
	glutSolidSphere(0.4 , 80 , 40);
	glPopMatrix();
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glPushMatrix();
//	glTranslatef(71.4 , 39.3 , 0);
//	glColor3f(0.0 , 0.0 , 0.0);
//	glutSolidSphere(0.25 , 80 , 40);
//	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(69.95-b, 37.7 , 0);
	glColor3f(1.0 , 0.12 , 0.97);
	glutSolidSphere(1 , 3 , 3);
	glPopMatrix();
	glColor3f(1.0 , 0.12 , 0.97);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(70-b,37);
	glVertex2f(70-b,38);
	glVertex2f(71-b,38);
	glVertex2f(71-b,37);
	glPopMatrix();
	glEnd();
	//legs
	glColor3f(0.10,0.29,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(75-b,31);
	glVertex2f(74.7-b,28);
	glVertex2f(79.5-b,28);
	glVertex2f(80-b,31);
	glPopMatrix();
	glEnd();
	glColor3f(0.10,0.29,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(75-b,29);
	glVertex2f(74.6-b,26);
	glVertex2f(76-b,22.5);
	glVertex2f(77-b,22.5);
	glVertex2f(76-b,26.5);
	glVertex2f(77-b,29);
	glPopMatrix();
	glEnd();
	glColor3f(0.10,0.29,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(77.5-b,29);
	glVertex2f(77.1-b,26);
	glVertex2f(79.5-b,23);
	glVertex2f(80.5-b,23);
	glVertex2f(78.5-b,26.5);
	glVertex2f(79.7-b,29);
	glPopMatrix();
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(79.5-b,23);
	glVertex2f(80.5-b,23);
	glVertex2f(80.9-b,22.5);
	glVertex2f(79-b,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(76-b,22.5);
	glVertex2f(77-b,22.5);
	glVertex2f(77-b,22);
	glVertex2f(75.5-b,22);
	glPopMatrix();
	glEnd();
	glFlush();
		
}

void star()
{
	glClearColor(0,0,0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(50, 49.9 , 0);
	glScalef(1,1,0);
	glColor3f(1,0,0);
	glutSolidSphere(24, 80 , 40);
	glPopMatrix();
	//Outer triangle
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(15,65);
	glVertex2f(80,10);
	glVertex2f(65,65);
	glEnd();
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(30,85);
	glVertex2f(40,10);
	glVertex2f(65,55);
	glEnd();
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(90,55);
	glVertex2f(56,35);
	glVertex2f(48,72);
	glEnd();
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(50,92);
	glVertex2i(57,72);
	glVertex2i(43,72);
	glEnd();
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(70,86);
	glVertex2i(54,68);
	glVertex2i(68,52);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(50, 49.9 , 0);
	glScalef(1,1,0);
	glColor3f(.98,0.91,.11);
	glutSolidSphere(22, 80 , 40);
	glPopMatrix();
	//innertriangle
	glColor3f(.98,0.91,.11);
	glBegin(GL_POLYGON);
	glVertex2f(69.5,85);
	glVertex2f(56,68);
	glVertex2f(67,52);
	glEnd();
	glColor3f(.98,0.91,.11);
	glBegin(GL_POLYGON);
	glVertex2i(50,90);
	glVertex2i(56,68);
	glVertex2i(44,68);
	glEnd();
	glColor3f(.98,0.91,.11);
	glBegin(GL_POLYGON);
	glVertex2f(89.2,54.8);
	glVertex2f(46,68);
	glVertex2f(57,40);
	glEnd();
	glColor3f(.98,0.91,.11);
	glBegin(GL_POLYGON);
	glVertex2f(30.8,83.5);
	glVertex2f(40.4,12.5);
	glVertex2f(65,55);
	glEnd();
	glColor3f(.98,0.91,.11);
	glBegin(GL_POLYGON);
	glVertex2f(15.2,66.5);
	glVertex2f(79.5,11);
	glVertex2f(65,65);
	glEnd();
	

//gun
 glColor3ub(139,151,165);
	glBegin(GL_POLYGON);
	glVertex2f(35,55);
	glVertex2f(35,63);
	glVertex2f(63,63);
	glVertex2f(63,55);
	glEnd();
	glColor3ub(191,136,42);
	glBegin(GL_POLYGON);
	glVertex2f(38,53);
	glVertex2f(38,55);
	glVertex2f(60,55);
	glVertex2f(60,53);
	glEnd();
	glColor3ub(191,136,42);
	glBegin(GL_POLYGON);
	glVertex2f(60,53);
	glVertex2f(60,55);
	glVertex2f(63,55);
	//glVertex2f(60,53);
	glEnd();
	glColor3ub(139,151,165);
	glBegin(GL_POLYGON);
	glVertex2f(57,40);
	glVertex2f(55,53);
	glVertex2f(60,53);
	glVertex2f(62,40);
	glEnd();
	glColor3ub(148,131,123);
	glBegin(GL_POLYGON);
	glVertex2f(57.5,40.5);
	glVertex2f(55.5,52.5);
	glVertex2f(59.5,52.5);
	glVertex2f(61.5,40.5);
	glEnd();
	glColor3ub(148,131,123);
	glBegin(GL_POLYGON);
	glVertex2f(52,50);
	glVertex2f(51,53);
	glVertex2f(55,53);
	glVertex2f(55.5,50);
	glEnd();
	//strips
	glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(50,60);
	glVertex2f(50,63);
	glVertex2f(50.5,63);
	glVertex2f(50.5,60);
	glEnd();
	glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(51,60);
	glVertex2f(51,63);
	glVertex2f(51.5,63);
	glVertex2f(51.5,60);
	glEnd();
	glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(52,60);
	glVertex2f(52,63);
	glVertex2f(52.5,63);
	glVertex2f(52.5,60);
	glEnd();
	glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(53,60);
	glVertex2f(53,63);
	glVertex2f(53.5,63);
	glVertex2f(53.5,60);
	glEnd();
	glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(54,60);
	glVertex2f(54,63);
	glVertex2f(54.5,63);
	glVertex2f(54.5,60);
	glEnd();
	glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(55,60);
	glVertex2f(55,63);
	glVertex2f(55.5,63);
	glVertex2f(55.5,60);
	glEnd();
	glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(56,60);
	glVertex2f(56,63);
	glVertex2f(56.5,63);
	glVertex2f(56.5,60);
	glEnd();
	glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(57,60);
	glVertex2f(57,63);
	glVertex2f(57.5,63);
	glVertex2f(57.5,60);
	glEnd();

	
}
void hammer(void)
{
	//glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glClearColor(0.81,0.83,0.74 ,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(149,123,70);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(0,25);
	glVertex2i(80,25);
    glVertex2i(80,0);
    glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(198,163,94);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(0,23);
	glVertex2i(78,23);
    glVertex2i(78,0);
    
	glEnd();
	//piggy
	glColor3ub(196,112,148);
	glBegin(GL_POLYGON);
	glVertex2i(30,25);
	glVertex2i(30,35);
	glVertex2i(35,35);
    glVertex2i(35,25);
	glEnd();
	glColor3ub(196,112,148);
	glBegin(GL_POLYGON);
	glVertex2i(55,25);
	glVertex2i(55,35);
	glVertex2i(60,35);
    glVertex2i(60,25);
	glEnd();
		glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(45, 44 , 0);
	glScalef(1.5,0.8,0);
	glColor3ub(196,112,148);
	glutSolidSphere(15, 80 , 40);
	glPopMatrix();
	glColor3ub(196,112,148);
	glBegin(GL_POLYGON);
	glVertex2f(17,41.1);
	glVertex2f(17,46);
	glVertex2f(23,46);
    glVertex2f(23,41.1);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(33, 50 , 0);
	glScalef(1.5,0.8,0);
	glColor3ub(0,0,0);
	glutSolidSphere(1.8, 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(33.2, 49.9 , 0);
	glScalef(1.5,0.8,0);
	glColor3f(1.0,1.0,1.0);
	glutSolidSphere(1.3, 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(33.5, 49.8 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.5 , 80 , 40);
	glPopMatrix();
	glColor3ub(196,112,148);
	glBegin(GL_POLYGON);
	glVertex2f(65,49);
	glVertex2f(65,49.5);
	glVertex2f(75,48.5);
    glVertex2f(68,49);
	glEnd();
	
	//hammer
	glColor3ub(120,95,58);
	glBegin(GL_POLYGON);
	glVertex2f(50,85-m);
	glVertex2f(50,90-m);
	glVertex2f(100,90-m);
    glVertex2f(100,85-m);
	glEnd();
	glColor3ub(43,39,31);
	glBegin(GL_POLYGON);
	glVertex2f(45,80-m);
	glVertex2f(45,95-m);
	glVertex2f(50,95-m);
    glVertex2f(50,80-m);
	glEnd();
	if(stars>798)
		star();
	glFlush();
	
}

void insideBank2()
{
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glClearColor(0.81, 0.83, 0.74 , 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	//floor
		glColor3ub(140,145,148);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(0,22);
	glVertex2i(100,22);
    glVertex2i(100,0);
	glEnd();
	//table
			glColor3ub(150,123,70);
	glBegin(GL_POLYGON);
	glVertex2i(22,22);
	glVertex2i(22,37);
	glVertex2i(50,37);
    glVertex2i(50,22);
	glEnd();
	//inner table
	glColor3ub(198,163,94);
	glBegin(GL_POLYGON);
	glVertex2f(22.7,22.7);
	glVertex2f(22.7,36.7);
	glVertex2f(49.3,36.7);
    glVertex2f(49.3,22.7);
	glEnd();
	//wndow1
	glColor3ub(197,255,234);
	glBegin(GL_POLYGON);
	glVertex2i(60,58);
	glVertex2i(60,80);
	glVertex2i(68,80);
    glVertex2i(68,58);
	glEnd();
	//crosswindow
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(64,58);
	glVertex2f(64,80);
	glVertex2f(64.3,80);
    glVertex2f(64.3,58);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(60,75);
	glVertex2f(60,75.3);
	glVertex2f(68,75.3);
    glVertex2f(68,75);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(60,70);
	glVertex2f(60,70.3);
	glVertex2f(68,70.3);
    glVertex2f(68,70);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(60,65);
	glVertex2f(60,65.2);
	glVertex2f(68,65.2);
    glVertex2f(68,65);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(60,61);
	glVertex2f(60,61.2);
	glVertex2f(68,61.2);
    glVertex2f(68,61);
	glEnd();
	//window2
		glColor3ub(197,255,234);
	glBegin(GL_POLYGON);
	glVertex2i(74,58);
	glVertex2i(74,80);
	glVertex2i(82,80);
    glVertex2i(82,58);
	glEnd();
	//crosswindow
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(78,58);
	glVertex2f(78,80);
	glVertex2f(78.3,80);
    glVertex2f(78.3,58);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(74,75);
	glVertex2f(74,75.3);
	glVertex2f(82,75.3);
    glVertex2f(82,75);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(74,70);
	glVertex2f(74,70.3);
	glVertex2f(82,70.3);
    glVertex2f(82,70);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(74,65);
	glVertex2f(74,65.2);
	glVertex2f(82,65.2);
    glVertex2f(82,65);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(74,61);
	glVertex2f(74,61.2);
	glVertex2f(82,61.2);
    glVertex2f(82,61);
	glEnd();
	//window3
	glColor3ub(197,255,234);
	glBegin(GL_POLYGON);
	glVertex2i(86,58);
	glVertex2i(86,80);
	glVertex2i(94,80);
    glVertex2i(94,58);
	glEnd();
	//crosswindow
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(90,58);
	glVertex2f(90,80);
	glVertex2f(90.3,80);
    glVertex2f(90.3,58);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(86,75);
	glVertex2f(86,75.3);
	glVertex2f(94,75.3);
    glVertex2f(94,75);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(86,70);
	glVertex2f(86,70.3);
	glVertex2f(94,70.3);
    glVertex2f(94,70);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(86,65);
	glVertex2f(86,65.2);
	glVertex2f(94,65.2);
    glVertex2f(94,65);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(86,61);
	glVertex2f(86,61.2);
	glVertex2f(94,61.2);
    glVertex2f(94,61);
	glEnd();
	
	//vault
	glColor3f(216,216,191);
	glPushMatrix();
	glTranslatef(0,60,0);
	glutSolidSphere(15,50,50);
	glPopMatrix();
		glColor3ub(201,189,140);
	glBegin(GL_POLYGON);
	glVertex2f(13,57);
	glVertex2f(13,62.2);
	glVertex2f(17,62.2);
    glVertex2f(17,57);
	glEnd();
	glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(13,59);
	glVertex2f(13,59.4);
	glVertex2f(17,59.4);
    glVertex2f(17,59);
	glEnd();
		glColor3ub(146,202,182);
	glBegin(GL_POLYGON);
	glVertex2f(13,61);
	glVertex2f(13,61.4);
	glVertex2f(17,61.4);
    glVertex2f(17,61);
	glEnd();
	
	//receptionist
	glColor3ub(191,172,67);
	glBegin(GL_POLYGON);
	glVertex2f(31,37);
	glVertex2f(32,46);
	glVertex2f(38,46);
    glVertex2f(39,37);
	glEnd();
		//recephand
	glColor3ub(191,172,67);
	glBegin(GL_POLYGON);
	glVertex2f(36.9,44);
	glVertex2f(36.9,55);
	glVertex2f(38,55);
   glVertex2f(38,44);
	glEnd();
	glColor3f(0.90 , 0.68 , 0.55);
	glBegin(GL_POLYGON);
	glVertex2f(36.9,55);
	glVertex2f(38,55);
	glVertex2f(38,56);
    glVertex2f(36.9,56);
	glEnd();
	//head 0f receptionist
	glColor3f(0.90 , 0.68 , 0.55);
	glPushMatrix();
	glTranslatef(35,50,0);
	glScalef(1.0,1.6,0);
	glutSolidSphere(3,50,50);
	glPopMatrix();
	glEnd();
//	glColor3ub(197,201,207);
//	glBegin(GL_POLYGON);
//	glVertex2f(32,46);
//	glVertex2f(32,47);
//	glVertex2f(38,47);
//    glVertex2f(38,46);
//	glEnd();

	//reception_nose
	glColor3ub(198,141,113);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(35.5,50);
	glVertex2f(35.5,49);
	glVertex2f(37.5,49);
	glPopMatrix();
	glEnd();
	//reyes
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(34.3 , 52 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(36 , 52 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(34.4 , 52 , 0);
	glColor3f(1.0 , 1.0 , 1.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(36.1, 52 , 0);
	glColor3f(1.0 , 1.0 , 1.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(34.6 , 52 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.15 , 80 , 40);
    glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(36.3, 52 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.15 , 80 , 40);
	glPopMatrix();
	//rsmile
//	glColor3f(0.0 , 0.0 , 0.0);
//	glBegin(GL_POLYGON);
//	glPushMatrix();
//	glVertex2f(77.3,40.6);
//	glVertex2f(77.3,41);
//	glVertex2f(76.3,41);
//    glVertex2f(75.5,41.4);
//	glVertex2f(75.5,41.1);
//	glVertex2f(76.3,41.3);
//	glPopMatrix();
//	glEnd();
    //rhair

    glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(35.3, 55.8 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(1.5, 80 , 40);
	glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(34.5, 55.9 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(32.5, 55.1 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(31.6, 53.3 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	//recephand
	glColor3ub(191,172,67);
	glBegin(GL_POLYGON);
	glVertex2f(31.9,44);
	glVertex2f(31.9,55);
	glVertex2f(33,55);
   glVertex2f(33,44);
	glEnd();
	glColor3f(0.90 , 0.68 , 0.55);
	glBegin(GL_POLYGON);
	glVertex2f(31.9,55);
	glVertex2f(33,55);
	glVertex2f(33,56);
    glVertex2f(31.9,56);
	glEnd();
	
	//rsmile
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(36,47.8);
	glVertex2f(35,46.8);
	
	glVertex2f(36,47.4);
	glVertex2f(37,46.8);
	
	glPopMatrix();
	glEnd();
	//head
	glColor3f(0.90 , 0.68 , 0.55);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(80-b,43);
	glVertex2f(80-b,38);
	glVertex2f(76.5-b,38);
	glVertex2f(76.5-b,43);
	glPopMatrix();
	glEnd();
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77-b , 41 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78 -b, 41 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78-b, 42 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.3 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78-b , 44 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-b , 43 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.3 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-b, 42 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	//nose
//	glColor3f(0.90 , 0.68 , 0.55);
//	glBegin(GL_POLYGON);
//	glPushMatrix();
//	glVertex2f(75.7,44);
//	glVertex2f(74.7,42);
//	glVertex2f(76.7,41);
//	glPopMatrix();
//	glEnd();
//eyes
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.2-b , 44 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-b , 43.3 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.2-b , 44 , 0);
	glColor3f(1.0 , 1.0 , 1.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-b, 43.3 , 0);
	glColor3f(1.0 , 1.0 , 1.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.35-b , 43.3 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.15 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77-b, 44 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.15 , 80 , 40);
	glPopMatrix();
	// smile
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.2-b , 42 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(76.1-b, 41.5 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.1-b, 41.2 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glColor3f(0.0 , 0.0 , 0.0);
	glBegin(GL_POLYGON);
	
	glPushMatrix();
	glVertex2f(77.3-b,40.6);
	glVertex2f(77.3-b,41);
	glVertex2f(76.3-b,41);
    glVertex2f(75.5-b,41.4);
	glVertex2f(75.5-b,41.1);
	glVertex2f(76.3-b,41.3);
	glPopMatrix();
	glEnd();
//	
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glPushMatrix();
//	glTranslatef(76.8 , 41.2 , 0);
//	glColor3f(0.90 , 0.68 , 0.55);
//	glutSolidSphere(0.75 , 80 , 40);
//	glPopMatrix();
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glPushMatrix();
//	glTranslatef(76. , 41.2 , 0);
//	glColor3f(0.90 , 0.68 , 0.55);
//	glutSolidSphere(0.75 , 80 , 40);
//	glPopMatrix();
	//shirt
	glColor3ub(137,207,240);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(80-h,39);
	glVertex2f(80-h,31);
	glVertex2f(75-h,31);
	glVertex2f(76-h,39);
	glPopMatrix();
	glEnd();
//	//hammer
//	glColor3f(0,0,0);
//	glBegin(GL_POLYGON);
//	glVertex2f(80-h,39);
//	glVertex2f(80.5-h,39);
//	glVertex2f(80.5-h,34);
//	glVertex2f(80-h,34);
//	glEnd();
//	glColor3ub(43,39,31);
//	glBegin(GL_POLYGON);
//	glVertex2f(79-h,34);
//	glVertex2f(81-h,34);
//	glVertex2f(81-h,33);
//	glVertex2f(79-h,33);
//	glEnd();
//	
	//hands
	glColor3ub(137,207,240);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(72-h,38);
	glVertex2f(72-h,36);
	glVertex2f(79-h,36);
	glVertex2f(79-h,38);
	glPopMatrix();
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(72-h , 37 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1 , 80 , 40);
	glPopMatrix();
	//gun
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(72-b,38.3);
	glVertex2f(72-b,36);
	glVertex2f(71-b,36);
	glVertex2f(71-b,37.3);
	glVertex2f(68.5-b,37.3);
	glVertex2f(68.5-b,38.3);
		
	glPopMatrix();
	glEnd();
	//hair
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(79.5-b,45);
	glVertex2f(77-b,45);
	glVertex2f(76.5-b,46);
	glVertex2f(79.5-b,45.5);
	glPopMatrix();
	glEnd();
	glColor3f(0.10,0.29,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(75-b,31);
	glVertex2f(74.7-b,28);
	glVertex2f(79.5-b,28);
	glVertex2f(80-b,31);
	glPopMatrix();
	glEnd();
	glColor3f(0.10,0.29,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(75-b,29);
	glVertex2f(74.6-b,26);
	glVertex2f(76-b,22.5);
	glVertex2f(77-b,22.5);
	glVertex2f(76-b,26.5);
	glVertex2f(77-b,29);
	glPopMatrix();
	glEnd();
	glColor3f(0.10,0.29,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(77.5-b,29);
	glVertex2f(77.1-b,26);
	glVertex2f(79.5-b,23);
	glVertex2f(80.5-b,23);
	glVertex2f(78.5-b,26.5);
	glVertex2f(79.7-b,29);
	glPopMatrix();
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(79.5-b,23);
	glVertex2f(80.5-b,23);
	glVertex2f(80.9-b,22.5);
	glVertex2f(79-b,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(76-b,22.5);
	glVertex2f(77-b,22.5);
	glVertex2f(77-b,22);
	glVertex2f(75.5-b,22);
	glPopMatrix();
	glEnd();
	glFlush();

}
void last()
{
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glClearColor(0.81, 0.83, 0.74 , 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0.43,0.54,0.49);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2i(0,0);
	glVertex2i(100,0);
	glVertex2i(100,22);
	glVertex2i(0,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.55,0.57,0.58);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2i(0,0);
	glVertex2i(100,0);
	glVertex2i(100,20);
	glVertex2i(0,20);
	glPopMatrix();
	glEnd();
	glColor3f(0.96,0.97,0.95);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(0.0,22);
	glVertex2f(0.0,44.5);
	glVertex2f(100,44.5);
	glVertex2f(100,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(0.5,22);
	glVertex2f(0.5,44);
	glVertex2i(16,44);
	glVertex2i(16,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(16.5,22);
	glVertex2f(16.5,44);
	glVertex2i(32,44);
	glVertex2i(32,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(32.5,22);
	glVertex2f(32.5,44);
	glVertex2i(48,44);
	glVertex2i(48,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(48.5,22);
	glVertex2f(48.5,44);
	glVertex2i(64,44);
	glVertex2i(64,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(64.5,22);
	glVertex2f(64.5,44);
	glVertex2i(80,44);
	glVertex2i(80,22);
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(80.5,22);
	glVertex2f(80.5,44);
	glVertex2i(96,44);
	glVertex2i(96,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.72,0.74,0.61);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(96.5,22);
	glVertex2f(96.5,44);
	glVertex2i(100,44);
	glVertex2i(100,22);
	glPopMatrix();
	glEnd();
	//doorholder
	glColor3f(0.48,0.50,0.4);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(40,22);
	glVertex2f(40,74);
	glVertex2i(60,74);
	glVertex2i(60,22);
	glPopMatrix();
	glEnd();

	glColor3f(0.90,0.83,0.46);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(42,22);
	glVertex2f(42,73.5);
	glVertex2f(58,73.5);
	glVertex2i(58,22);
	glPopMatrix();
	glEnd();

	//door
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	

	glColor3f(0.53,0.72,0.70);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(50+d-l,22);
	glVertex2f(50+d-l,73.5);
	glVertex2f(58,73.5);
	glVertex2i(58,22);
	glPopMatrix();
	glEnd();
	
	glColor3f(0.53,0.72,0.70);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(42,22);
	glVertex2f(42,73.5);
	glVertex2f(50-d+l,73.5);
	glVertex2i(50-d+l ,22);
	glTranslatef(15,0,0);
	glPopMatrix();
	glEnd();

	//window
	glColor3f(0.42,0.49,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(4,54);
	glVertex2f(4,100);
	glVertex2f(14,100);
	glVertex2i(14,54);
	glPopMatrix();
	glEnd();
	glColor3f(0.54,0.72,0.72);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(5,55);
	glVertex2f(5,100);
	glVertex2f(13,100);
	glVertex2i(13,55);
	glPopMatrix();
	glEnd();
	glColor3f(0.42,0.49,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(5,65);
	glVertex2f(5,65.8);
	glVertex2f(13,75.2);
	glVertex2i(13,76);
	glPopMatrix();
	glEnd();
	glColor3f(0.42,0.49,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(5,85);
	glVertex2f(5,85.8);
	glVertex2f(13,80.2);
	glVertex2i(13,81);
	glPopMatrix();
	glEnd();
	
	//window2
	glColor3f(0.42,0.49,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(86,54);
	glVertex2f(86,100);
	glVertex2f(96,100);
	glVertex2i(96,54);
	glPopMatrix();
	glEnd();
	glColor3f(0.54,0.72,0.72);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(87,55);
	glVertex2f(87,100);
	glVertex2f(95,100);
	glVertex2i(95,55);
	glPopMatrix();
	glEnd();
	glColor3f(0.42,0.49,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(86,65);
	glVertex2f(86,65.8);
	glVertex2f(95,75.2);
	glVertex2i(95,76);
	glPopMatrix();
	glEnd();
	glColor3f(0.42,0.49,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(86,85);
	glVertex2f(86,85.8);
	glVertex2f(95,80.2);
	glVertex2i(95,81);
	glPopMatrix();
	glEnd();
	//bank
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(30.5,80.5);
	glVertex2f(30.5,94.5);
	glVertex2f(69.5,94.5);
	glVertex2f(69.5,80.5);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(31,81);
	glVertex2f(31,94);
	glVertex2f(69,94);
	glVertex2i(69,81);
	glPopMatrix();
	glEnd();
	
	glPushMatrix();
	glTranslatef(32 , 83.5 , 0);
	glColor3f(0.37 , 0.49 , 0.517);
	glScalef(0.1, 0.08 ,0);
	glLineWidth(8);
	output("BANK");
	glPopMatrix();
	
	//robber exiting
		glColor3f(0.90 , 0.68 , 0.55);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(80-h-q,43);
	glVertex2f(80-h-q,38);
	glVertex2f(76.5-h-q,38);
	glVertex2f(76.5-h-q,43);
	glPopMatrix();
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77-h-q , 41 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78 -h-q, 41 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78-h-q, 42 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.3 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78-h-q , 44 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-h-q , 43 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.3 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-h-q, 42 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(1.5 , 80 , 40);
	glPopMatrix();

//eyes
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.2-h-q, 44 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.75, 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-h-q, 43.3 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.2-h-q, 44 , 0);
	glColor3f(1.0 , 1.0 , 1.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.5-h-q, 43.3 , 0);
	glColor3f(1.0 , 1.0 , 1.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78.35-h-q, 43.3 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.15 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77-h-q, 44 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.15 , 80 , 40);
	glPopMatrix();
	// smile
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.2-h-q , 42 , 0);
	glColor3f(0.0 , 0.0 , 0.0);
	glutSolidSphere(0.6 , 80 , 40);
	glPopMatrix();
	

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(76.1-h-q, 41.5 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(77.1-h-q, 41.2 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(0.75 , 80 , 40);
	glPopMatrix();
	glColor3f(0.0 , 0.0 , 0.0);
	glBegin(GL_POLYGON);
	
	glPushMatrix();
	glVertex2f(77.3-h-q,40.6);
	glVertex2f(77.3-h-q,41);
	glVertex2f(76.3-h-q,41);
    glVertex2f(75.5-h-q,41.4);
	glVertex2f(75.5-h-q,41.1);
	glVertex2f(76.3-h-q,41.3);
	glPopMatrix();
	glEnd();
	
	//shirt
	glColor3ub(137,207,240);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(80-h-q,39);
	glVertex2f(80-h-q,31);
	glVertex2f(75-h-q,31);
	glVertex2f(76-h-q,39);
	glPopMatrix();
	glEnd();
	//hammer
//	glColor3f(0,0,0);
//	glBegin(GL_POLYGON);
//	glVertex2f(80-h-q,39);
//	glVertex2f(80.5-h-q,39);
//	glVertex2f(80.5-h-q,34);
//	glVertex2f(80-h-q,34);
//	glEnd();
//	glColor3ub(43,39,31);
//	glBegin(GL_POLYGON);
//	glVertex2f(79-h-q,34);
//	glVertex2f(81-h-q,34);
//	glVertex2f(81-h-q,33);
//	glVertex2f(79-h-q,33);
//	glEnd();
//	bag
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(85-h-q, 33 , 0);
	glRotatef(30,0,0,1);
	glScalef(0.7,1.5,0);

	glColor3ub(199,168,81);
	glutSolidSphere(4.5 , 80 , 40);
	
	glPopMatrix();
	glColor3ub(199,168,81);
	glBegin(GL_POLYGON);
	glVertex2f(76-h-q,40);
	glVertex2f(81-h-q,36);
	glVertex2f(83-h-q,39);
	//glVertex2f(79-h-q,33);
	glEnd();
	glPushMatrix();
	glTranslatef(82.9-h-q, 32. , 0);
	glColor3f(0.37 , 0.49 , 0.517);
	glScalef(0.05, 0.03 ,0);
	glLineWidth(4);
	output("$");
	glPopMatrix();
	//hands
	glColor3ub(137,207,240);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(74-h-q,37.5);
	glVertex2f(73-h-q,36);
	glVertex2f(78-h-q,36);
	glVertex2f(78-h-q,38);
	glPopMatrix();
	glEnd();
	glColor3ub(137,207,240);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(74-h-q,37.5);
	glVertex2f(73-h-q,36);
	glVertex2f(78-h-q,40);
	glVertex2f(78-h-q,40.7);
	glPopMatrix();
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(78-h-q , 40 , 0);
	glColor3f(0.90 , 0.68 , 0.55);
	glutSolidSphere(0.5, 80 , 40);
	glPopMatrix();
	//hair
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(79.5-h-q,45);
	glVertex2f(77-h-q,45);
	glVertex2f(76.5-h-q,46);
	glVertex2f(79.5-h-q,45.5);
	glPopMatrix();
	glEnd();

	//legs
		glColor3f(0.10,0.29,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(75-h-q,31);
	glVertex2f(74.7-h-q,28);
	glVertex2f(79.5-h-q,28);
	glVertex2f(80-h-q,31);
	glPopMatrix();
	glEnd();
	glColor3f(0.10,0.29,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(75-h-q,29);
	glVertex2f(74.6-h-q,26);
	glVertex2f(76-h-q,22.5);
	glVertex2f(77-h-q,22.5);
	glVertex2f(76-h-q,26.5);
	glVertex2f(77-h-q,29);
	glPopMatrix();
	glEnd();
	glColor3f(0.10,0.29,0.40);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(77.5-h-q,29);
	glVertex2f(77.1-h-q,26);
	glVertex2f(79.5-h-q,23);
	glVertex2f(80.5-h-q,23);
	glVertex2f(78.5-h-q,26.5);
	glVertex2f(79.7-h-q,29);
	glPopMatrix();
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(79.5-h-q,23);
	glVertex2f(80.5-h-q,23);
	glVertex2f(80.9-h-q,22.5);
	glVertex2f(79-h-q,22);
	glPopMatrix();
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2f(76-h-q,22.5);
	glVertex2f(77-h-q,22.5);
	glVertex2f(77-h-q,22);
	glVertex2f(75.5-h-q,22);
	glPopMatrix();
	glEnd();
	glFlush();
	

}
void timer0(int v)
{
	if(c<100)
	c=c+.0001;
	glutTimerFunc(50 ,timer0 , 0);
	glutPostRedisplay();
}


void timer(int v)
{
	if(d<8)
		d = d+0.5;
	if(h<25)
		h=h+0.01;
	glutTimerFunc(300 ,timer , 0);
	glutPostRedisplay();
}

void timer1(int v)
{
	if(b<25)
		b=b+0.01;
	glutTimerFunc(300 ,timer1 , 0);
	glutPostRedisplay();
}

void timer2(int v)
{
	if(m<24)
	{
		m=m+0.03;
		stars=stars+1;
	}
	
	glutTimerFunc(200 ,timer2 , 0);
	glutPostRedisplay();
}

void timer3(int v)
{
	if(m1<24)
	{
		m1=m1+0.03;
	
	}
	
	glutTimerFunc(200 ,timer3 , 0);
	glutPostRedisplay();
}

void timer4(int v)
{
	if(l<8)
	{
		l=l+0.5;
	
	}
    glutTimerFunc(50 ,timer4 , 0);
	glutPostRedisplay();
}
void timer5(int v)
{
	
	if(x<35){
		q=q+.01;
	}
//	
	glutTimerFunc(50 ,timer5 , 0);
	glutPostRedisplay();
}

void key(unsigned char key,int x,int y)
{
	if(key=='A' || key=='a')
	{
		slide=2;
		
		glutPostRedisplay();
	}
	if(key=='S' || key=='s')
	{
		slide=3;
		
		glutPostRedisplay();
	}
	if(key=='D' || key=='d')
	{
		slide=4;
		glutPostRedisplay();
	}
	if(key=='F'|| key=='f')
	{
		slide=5;
		glutPostRedisplay();
	}
	if(key=='G'|| key=='g')
	{
		slide=6;
		glutPostRedisplay();
	}
	if(key=='H'|| key=='h')
	{
		slide=7;
		glutPostRedisplay();
	}
	
}

void display()
{
	
	if(slide==2)
	{
		slide1();
		glutTimerFunc(50 ,timer0 , 0);
		glutPostRedisplay();
		
	}
	if(slide==3)
	{
		bank();
		glutTimerFunc(1000 , timer , 0);
		glutPostRedisplay();
	}
	if(slide==4){
		insideBank();
		glutTimerFunc(500 , timer1 , 0);
		glutPostRedisplay();
	}
	if(slide==5){
		hammer();
		glutTimerFunc(500 , timer2 , 0);
		glutPostRedisplay();
	}
	if(slide==6){
		insideBank2();
		glutTimerFunc(500 , timer3 , 0);
		glutPostRedisplay();
	}
	if(slide==7){
		last();
		glutTimerFunc(2000 ,timer4 , 0);
		glutTimerFunc(500 ,timer5 , 0);
		glutPostRedisplay();
	}
	
}

int main(int argc , char **argv)
{
	glutInit(&argc , argv);
	glutInitWindowPosition(0 , 0);
	glutInitWindowSize(1024 , 1024);
	glutCreateWindow("intro");
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0 , 100.0 , 0.0 , 100.0 , 0.0 , 100.0);
	intro();
	glutDisplayFunc(display);
	glutKeyboardFunc(key);

	glutMainLoop();
	return 0;
}
