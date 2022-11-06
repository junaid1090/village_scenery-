#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include<windows.h>

float windowWidth=900;
float windowHeight=700;
float boatX = 0;
float planeX = 0;
float moonY = 0;
bool boatScale = false;
bool planeScale = false;
bool moonScale = false;

void home(){

//home
      glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,153,153);
		glVertex2f(-55.0,15.0);
		glVertex2f(-55.0,0.0);
		glVertex2f(-40.0,0.0);
		glVertex2f(-40.0,15.0);

	glEnd();
    glPopMatrix();

     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(57,62,95);
		glVertex2f(-61.0,15.0);
		glVertex2f(-61.0,0.0);
		glVertex2f(-55.0,0.0);
		glVertex2f(-55.0,15.0);

	glEnd();
    glPopMatrix();


//roof-1
     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,51,102);
		glVertex2f(-58.0,25.0);
		glVertex2f(-54.0,15.0);
		glVertex2f(-38.0,15.0);
		glVertex2f(-45.0,25.0);

	glEnd();
    glPopMatrix();


//roof-2
    glPushMatrix();
      glBegin(GL_TRIANGLES);//
		glColor3ub(0,25,51);
		glVertex2f(-62.0,15.0);
		glVertex2f(-58.0,25.0);
		glVertex2f(-54.0,15.0);

	glEnd();
   glPopMatrix();


//door
     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(204,204,0);
		glVertex2f(-46.0,8.0);
		glVertex2f(-46.0,0.0);
		glVertex2f(-49.0,0.0);
		glVertex2f(-49.0,8.0);

	glEnd();
    glPopMatrix();

//window-right
    glPushMatrix();
      glBegin(GL_QUADS);//
		glColor3ub(255,178,102);
		glVertex2f(-42.0,10.0);
		glVertex2f(-42.0,7.0);
		glVertex2f(-44.5,7.0);
		glVertex2f(-44.5,10.0);

	glEnd();
    glPopMatrix();

//window-left
    glPushMatrix();
      glBegin(GL_QUADS);//
		glColor3ub(255,178,102);
		glVertex2f(-51.0,10.0);
		glVertex2f(-51.0,7.0);
		glVertex2f(-53.5,7.0);
		glVertex2f(-53.5,10.0);

	glEnd();
    glPopMatrix();


//window-left-2
    glPushMatrix();
      glBegin(GL_QUADS);//
		glColor3ub(255,178,102);
		glVertex2f(-59.5,10.0);
		glVertex2f(-59.5,7.0);
		glVertex2f(-57.0,7.0);
		glVertex2f(-57.0,10.0);

	glEnd();
    glPopMatrix();

//home-road

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(102,51,0);
		glVertex2f(-63.0,-2.0);
		glVertex2f(-62.0,0.0);
		glVertex2f(-38.0,0.0);
		glVertex2f(-37.0,-2.0);

	glEnd();
    glPopMatrix();
}

void tree(){

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(51,102,0);
		glVertex2f(-68.5,14.0);
		glVertex2f(-68.5,0.0);
		glVertex2f(-67.0,0.0);
		glVertex2f(-67.0,14.0);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_TRIANGLES);

		glColor3ub(34,139,34);
		glVertex2f(-74.0,14.0);
		glVertex2f(-68.0,19.0);
        glVertex2f(-62.0,14.0);

	glEnd();
    glPopMatrix();

     glPushMatrix();
      glBegin(GL_TRIANGLES);

		glColor3ub(34,139,34);
		glVertex2f(-74.0,17.0);
		glVertex2f(-68.0,25.0);
        glVertex2f(-62.0,17.0);

	glEnd();
    glPopMatrix();


}

void mountain(){
//mountain

    glPushMatrix();
      glBegin(GL_TRIANGLES);
        glColor3ub(51,102,0);
		glVertex2f(-86.0,30.0);
		glVertex2f(-76.5,38.0);
        glVertex2f(-67.0,30.0);

	glEnd();
    glPopMatrix();
}

void mountain2(){
    glPushMatrix();

		glColor3ub(51,102,0);
		glTranslatef(-67,-78,0);
        glScalef(3,2.1,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();


	   glPushMatrix();

		glColor3ub(51,102,0);
		glTranslatef(-42,-78,0);
        glScalef(2.8,2,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();


	   glPushMatrix();

		glColor3ub(51,102,0);
		glTranslatef(-17,-78,0);
        glScalef(3,2.1,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();

	  glPushMatrix();

		glColor3ub(51,102,0);
		glTranslatef(5,-78,0);
        glScalef(2.5,2,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();


	  glPushMatrix();
        glColor3ub(51,102,0);
		glTranslatef(65,-79.5,0);
        glScalef(1.3,0.3,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();

}

void window(){
     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(52.0,22.0);
		glVertex2f(52.0,18.0);
		glVertex2f(56.0,18.0);
		glVertex2f(56.0,22.0);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(59.0,22.0);
		glVertex2f(59.0,18.0);
		glVertex2f(63.0,18.0);
		glVertex2f(63.0,22.0);

	glEnd();
    glPopMatrix();

}

void moon(){
     glPushMatrix();

		glColor3ub(192,192,192);
		glTranslatef(25,70+moonY,0);
        glScalef(1,1.2,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();

}

void tree2(){
   glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(51,102,0);
		glVertex2f(53.5,-30.0);
		glVertex2f(53.5,0.0);
		glVertex2f(57.0,0.0);
		glVertex2f(57.0,-30.0);
      glEnd();
    glPopMatrix();

    glPushMatrix();
        glColor3ub(34,139,34);
		glTranslatef(55,10,0);
        glScalef(1,2,0);
        glutSolidSphere(5.5,50,8);

        glPopMatrix();
	  glEnd();

    glPushMatrix();
        glColor3ub(34,139,34);
		glTranslatef(49,2,0);
        glScalef(1,1,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();

	   glPushMatrix();
        glColor3ub(34,139,34);
		glTranslatef(49,10,0);
        glScalef(1,1,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();

    glPushMatrix();
        glColor3ub(34,139,34);
		glTranslatef(61,2,0);
        glScalef(1,1,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();


    glPushMatrix();
        glColor3ub(34,139,34);
		glTranslatef(61,10,0);
        glScalef(1,1,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();

}

void straw(){
      glPushMatrix();
      glBegin(GL_POLYGON);
		glColor3ub(102,51,0);
		glVertex2f(2.0 ,-6.0);
		glVertex2f(2.0 ,-3.0);
		glVertex2f(-3.0 ,-3.0);
		glVertex2f(-3.0,-6.0);

	 glEnd();
    glPopMatrix();

     glPushMatrix();
      glBegin(GL_POLYGON);
		glColor3ub(102,51,0);
		glVertex2f(2.0 ,-3.0);
		glVertex2f(1.0 ,-1.5);
		glVertex2f(-2.0 ,-1.5);
		glVertex2f(-3.0,-3.0);

	 glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_POLYGON);
		glColor3ub(102,51,0);
		glVertex2f(1.0 ,-1.5);
		glVertex2f(0.0 ,-0.5);
		glVertex2f(-1.0 ,-0.5);
		glVertex2f(-2.0,-1.5);

	 glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(102,51,0);
		glVertex2f(-4.0 ,-6.5);
		glVertex2f(-4.0 ,-6.0);
		glVertex2f(3.0 ,-6.0);
		glVertex2f(3.0,-6.5);

	 glEnd();
    glPopMatrix();

}

void boat(){
//boat

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,0,0);
		glVertex2f(-78.0 + boatX,-55.0);
		glVertex2f(-70.0 + boatX,-60.0);
		glVertex2f(-59.0 + boatX,-60.0);
		glVertex2f(-52.0 + boatX,-55.0);

	 glEnd();
    glPopMatrix();

   glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(81, 4, 0);
		glVertex2f(-71.0 + boatX,-50.0);
		glVertex2f(-71.0 + boatX,-55.0);
		glVertex2f(-59.0 + boatX,-55.0);
		glVertex2f(-59.0 + boatX,-50.0);

	glEnd();
    glPopMatrix();
}

void boat2(){
//boat

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(96,96,96);
		glVertex2f(78.0 - boatX,-40.0);
		glVertex2f(70.0 - boatX,-45.0);
		glVertex2f(59.0 - boatX,-45.0);
		glVertex2f(52.0 - boatX,-40.0);

	 glEnd();
    glPopMatrix();

   glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,153,153);
		glVertex2f(72.0 - boatX,-37.0);
		glVertex2f(72.0 - boatX,-40.0);
		glVertex2f(57.0 - boatX,-40.0);
		glVertex2f(57.0 - boatX,-37.0);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,153,153);
		glVertex2f(71.0 - boatX,-34.0);
		glVertex2f(71.0 - boatX,-37.0);
		glVertex2f(61.0 - boatX,-37.0);
		glVertex2f(61.0 - boatX,-34.0);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(64,64,64);
		glVertex2f(73.0 - boatX,-34.0);
		glVertex2f(73.0 - boatX,-40.0);
		glVertex2f(76.0 - boatX,-40.0);
		glVertex2f(76.0 - boatX,-34.0);

	glEnd();
    glPopMatrix();

     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(255,255,255);
		glVertex2f(73.5 - boatX,-32.0);
		glVertex2f(73.5 - boatX,-34.0);
		glVertex2f(75.5 - boatX,-34.0);
		glVertex2f(75.5 - boatX,-32.0);

	glEnd();
    glPopMatrix();
}

void plane(){
    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(102,110,54);
		glVertex2f(-10.0 - planeX,63.0);
		glVertex2f(-10.0 - planeX,60.0);
		glVertex2f(-21.0 - planeX,60.0);
		glVertex2f(-17.0 - planeX,63.0);
      glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_TRIANGLES);
		glColor3ub(102,110,54);
		glVertex2f(-10.0 - planeX,63.0);
		glVertex2f(-10.0 - planeX,65.0);
		glVertex2f(-13.0 - planeX,63.0);
      glEnd();
    glPopMatrix();

     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(255,255,255);
		glVertex2f(-17.0 - planeX,62.0);
		glVertex2f(-17.0 - planeX,60.0);
		glVertex2f(-16.0 - planeX,60.0);
		glVertex2f(-16.0 - planeX,62.0);
      glEnd();
    glPopMatrix();
    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(255,255,255);
		glVertex2f(-15.0 - planeX,62.0);
		glVertex2f(-15.0 - planeX,61.0);
		glVertex2f(-14.0 - planeX,61.0);
		glVertex2f(-14.0 - planeX,62.0);
      glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(255,255,255);
		glVertex2f(-12.0 - planeX,62.0);
		glVertex2f(-12.0 - planeX,61.0);
		glVertex2f(-13.0 - planeX,61.0);
		glVertex2f(-13.0 - planeX,62.0);
      glEnd();
    glPopMatrix();
}

void plane2(){

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(102,110,54);
		glVertex2f(4.0  + planeX,73.0);
		glVertex2f(4.0  + planeX,70.0);
		glVertex2f(15.0 + planeX,70.0);
		glVertex2f(11.0 + planeX,73.0);
      glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_TRIANGLES);
		glColor3ub(102,110,54);
		glVertex2f(4.0 + planeX,73.0);
		glVertex2f(4.0 + planeX,75.0);
		glVertex2f(7.0 + planeX,73.0);
      glEnd();
    glPopMatrix();

     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(255,255,255);
		glVertex2f(11.0 + planeX,72.0);
		glVertex2f(11.0 + planeX,70.0);
		glVertex2f(10.0 + planeX,70.0);
		glVertex2f(10.0 + planeX,72.0);
      glEnd();
    glPopMatrix();
    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(255,255,255);
		glVertex2f(9.0 + planeX,72.0);
		glVertex2f(9.0 + planeX,71.0);
		glVertex2f(8.0 + planeX,71.0);
		glVertex2f(8.0 + planeX,72.0);
      glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(255,255,255);
		glVertex2f(6.0 + planeX,72.0);
		glVertex2f(6.0 + planeX,71.0);
		glVertex2f(7.0 + planeX,71.0);
		glVertex2f(7.0 + planeX,72.0);
      glEnd();
    glPopMatrix();
}


void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-80, 80, -80, 80);

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glViewport(0, 0 ,windowWidth ,windowHeight);

//sky
     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(	0,51,51 );
		glVertex2f(-80.0,80.0);
		glVertex2f(-80.0,30.0);
		glVertex2f(80.0,30.0);
		glVertex2f(80.0,80.0);

	glEnd();
    glPopMatrix();

//plane
   plane();
   plane2();

//moon
    moon();

//ground
     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(	71,110,54);
		glVertex2f(-80.0,30.0);
		glVertex2f(-80.0,-90.0);
		glVertex2f(80.0,-90.0);
		glVertex2f(80.0,30.0);

	glEnd();
    glPopMatrix();

 //MOUNTAIN2
 mountain2();


//home
home();
   glPushMatrix();
     glTranslatef(26,8,0);
     glScalef(1,0.8,1);
     home();
    glPopMatrix();

   glPushMatrix();
     glTranslatef(-24,12,0);
     glScalef(1,0.6,1);
     home();
    glPopMatrix();

   glPushMatrix();
     glTranslatef(95,-79,0);
     glScalef(1,0.5,1);
     home();
    glPopMatrix();


//tree2();
  glPushMatrix();
     glTranslatef(-10,9,0);
     glScalef(1,1,1);
     tree2();
    glPopMatrix();

  glPushMatrix();
     glTranslatef(-9,-10,0);
     glScalef(0.7,0.7,1);
     tree2();
    glPopMatrix();

  glPushMatrix();
     glTranslatef(19,-10,0);
     glScalef(0.7,0.7,1);
     tree2();
    glPopMatrix();

  glPushMatrix();
     glTranslatef(28,4,0);
     glScalef(0.8,0.8,1);
     tree2();
    glPopMatrix();


//TREE  MOUNTAIN
  glPushMatrix();
     glColor3ub(55,139,34);
	 glTranslatef(40,-26,0);
     glScalef(8.5,1.7,0);
     glutSolidSphere(5.5,50,8);
    glPopMatrix();
   glEnd();


//Mountain
mountain();

  glPushMatrix();
    glTranslatef(11,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(20,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(30,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(40,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(50,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(60,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(70,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(80,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(90,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(100,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(110,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(120,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(130,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(140,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();

  glPushMatrix();
    glTranslatef(150,0,0);
    glScalef(1,1,1);
    mountain();
   glPopMatrix();


//STRAW-----
  glPushMatrix();
    glTranslatef(-68,6,0);
    glScalef(3.5,4,1);
    straw();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(25,-67,0);
    glScalef(2,2,1);
    straw();
    glPopMatrix();


//Sea-----
    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,51,102);
		glVertex2f(-80.0,-65.0);
		glVertex2f(-80.0,-30.0);
		glVertex2f(80.0,-30.0);
		glVertex2f(80.0,-65.0);

	glEnd();
    glPopMatrix();


//boat-----

    boat();

    boat2();


//tree-----
//tree();

  glPushMatrix();
    glTranslatef(0,30,0);
    glScalef(1,0.8,1);
    tree();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(20,30,0);
    glScalef(1,0.8,1);
    tree();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(40,30,0);
    glScalef(1,0.8,1);
    tree();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(60,30,0);
    glScalef(1,0.8,1);
    tree();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(80,30,0);
    glScalef(1,0.8,1);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(100,30,0);
    glScalef(1,0.8,1);
    tree();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(120,30,0);
    glScalef(1,0.8,1);
    tree();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(135,30,0);
    glScalef(1,0.8,1);
    tree();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(133,-80,0);
    glScalef(1,0.6,1);
    tree();
    glPopMatrix();

//Road---
    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(64,64,64);
		glVertex2f(0.10,30.0);
		glVertex2f(-20.0,-30.0);
		glVertex2f(-5.0,-30.0);
		glVertex2f(15.0,30.0);

	glEnd();
    glPopMatrix();


  glFlush();
    glutSwapBuffers();

}

void keyboard( unsigned char key, int x, int y ){
    switch ( key )
    {
    case 'B':
        boatScale = true; //boat run
         glutPostRedisplay();
        break;
    case 'b':
        boatScale = false; //boat stop
         glutPostRedisplay();
        break;
    case 'P':
        planeScale = true; //plane run
         glutPostRedisplay();
        break;
    case 'p':
        planeScale = false; //plane stop
         glutPostRedisplay();
        break;
    case 'M':
        moonScale = true; //moon up
         glutPostRedisplay();
        break;
    case 'm':
        moonScale = false; //moon stop
         glutPostRedisplay();
        break;
    }

}

void boatAnimation(){
    if(boatScale == true){
		boatX += 0.010;
		if(boatX > 170)
			boatX = -40;
    }
    else if (boatScale == false)
	{
		boatX = 1;

	}

}

void boatAnimation2(){
    if(boatScale == true){
		boatX += 0.010;
		if(boatX > 170)
			boatX = -40;
    }
    else if (boatScale == false)
	{
		boatX = 1;

	}

}

void planeAnimation(){
    if(planeScale == true){
		planeX += 0.010;
		if(planeX > 70)
			planeX = -110;
    }
    else if (planeScale == false)
	{
		planeX = 1;

	}

}

void planeAnimation2(){
    if(planeScale == true){
		planeX += 0.010;
		if(planeX > 70)
			planeX = -110;
    }
    else if (planeScale == false)
	{
		planeX = 1;

	}

}

void moonAnimation(){
    if(moonScale == true){
		moonY += 0.010;
		if(moonY > 70)
			moonY = -60;
    }
    else if (moonScale == false)
	{
		moonY = 1;

	}

}

void mydisplay(void){
    boatAnimation();
    boatAnimation2();
    planeAnimation();
    planeAnimation2();
    moonAnimation();

    glutPostRedisplay();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("Home");

    glutKeyboardFunc(keyboard);
     glutIdleFunc(mydisplay);
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
