#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<MMSystem.h>


float p=0.0;
float p1=0.0;
float p2=0.0;
float p3=0.0;
float p4=0.0;
float b =0.0;
static float	tx	=  0.0;
static float	ty	=  0.0;

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);

	 glOrtho(0,500,0,500,0,500);
}




void DrawCircle(float cx, float cy, float rx,float ry, int num_segments)
{
glBegin(GL_TRIANGLE_FAN);

for(int ii = 0; ii < num_segments; ii++)
{
float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

float x = rx * cosf(theta);//calculate the x component
float y = ry * sinf(theta);//calculate the y component

glVertex2f(x + cx, y + cy);//output vertex

}
glEnd();
}

void draw(void)
{
	glClear(GL_COLOR_BUFFER_BIT);



    ///------------sky------------///

	    glColor3f(0.8, 0.9, 0.9);


	    glBegin(GL_POLYGON);
        glVertex2d(0,400);
        glVertex2d(0,500);
        glVertex2d(500,500);
        glVertex2d(500,400);
        glEnd();



      ///------sun------///

   glColor3f(1.0, 1.0, 0.2);
   DrawCircle(450,480,10,10,100);


       ///----bird----///



       glPushMatrix();





     glColor3f(0.2,0.5,0.9);


	    glBegin(GL_POLYGON);
        glVertex3d(p+20.0,475.0,0.0);
        glVertex3d(p+60.0,475.0,0.0);
        glVertex3d(p+50.0,450.0,0.0);
        glVertex3d(p+35.0,455.0,0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex3d(p+48.0,475.0,0.0);
        glVertex3d(p+52.0,485.0,0.0);
        glVertex3d(p+56.0,485.0,0.0);
        glVertex3d(p+60.0,475.0,0.0);
        glEnd();


        glBegin(GL_POLYGON);
        glVertex3d(p+56.0,485.0,0.0);
        glVertex3d(p+70.0,482.0,0.0);
        glVertex3d(p+60.0,475.0,0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex3d(p+30.0,475.0,0.0);
        glVertex3d(p+25.0,490.0,0.0);
        glVertex3d(p+40.0,475.0,0.0);
        glEnd();

     glBegin(GL_POLYGON);
        glVertex3d(p+40.0,475.0,0.0);
        glVertex3d(p+38.0,490.0,0.0);
        glVertex3d(p+48.0,475.0,0.0);
        glEnd();

        glColor3f(0.0, 0.0, 0.0);

DrawCircle(p+58,480,2,2,100);

        glPopMatrix();

        glutPostRedisplay();
        if(p<=500.0)
         {
             p=p+0.05;
         }

        else
        p=-100;
    glutPostRedisplay();




    ///----------hill-----------///

       glColor3f(0.7, 0.9, 0.1);


	    glBegin(GL_POLYGON);
        glVertex2d(0,400);
        glVertex2d(10,440);
        glVertex2d(30,440);
        glVertex2d(40,400);
        glEnd();

         glBegin(GL_POLYGON);
        glVertex2d(40,400);
        glVertex2d(50,440);
        glVertex2d(70,440);
        glVertex2d(80,400);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex2d(80,400);
        glVertex2d(90,440);
        glVertex2d(110,440);
        glVertex2d(120,400);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex2d(120,400);
        glVertex2d(130,420);
        glVertex2d(150,420);
        glVertex2d(160,400);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex2d(160,400);
        glVertex2d(170,440);
        glVertex2d(190,440);
        glVertex2d(200,400);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex2d(205,400);
        glVertex2d(215,440);
        glVertex2d(235,440);
        glVertex2d(245,400);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex2d(250,400);
        glVertex2d(260,440);
        glVertex2d(280,440);
        glVertex2d(290,400);
        glEnd();


        glBegin(GL_POLYGON);
        glVertex2d(290,400);
        glVertex2d(300,440);
        glVertex2d(320,440);
        glVertex2d(330,400);
        glEnd();


        glBegin(GL_POLYGON);
        glVertex2d(340,400);
        glVertex2d(350,435);
        glVertex2d(370,435);
        glVertex2d(380,400);
        glEnd();


        glBegin(GL_POLYGON);
        glVertex2d(380,400);
        glVertex2d(400,440);
        glVertex2d(420,440);
        glVertex2d(440,400);
        glEnd();


        glBegin(GL_POLYGON);
        glVertex2d(440,400);
        glVertex2d(450,435);
        glVertex2d(470,435);
        glVertex2d(480,400);
        glEnd();



        glBegin(GL_POLYGON);
        glVertex2d(480,400);
        glVertex2d(4850,430);
        glVertex2d(490,430);
        glVertex2d(4950,400);
        glEnd();

///-----1.cloud------////

   glPushMatrix();
glColor3f(1.0, 1.0, 1.0);

DrawCircle(p1+90,460,10,10,100);

DrawCircle(p1+100,465,10,10,100);

DrawCircle(p1+110,460,10,10,100);

DrawCircle(p1+100,458,10,10,100);
  glPopMatrix();

   glutPostRedisplay();
        if(p1<=500.0)
         {
             p1=p1+0.02;
         }
  else
        p1=-350;
    glutPostRedisplay();


///-----2.cloud-----//
   glPushMatrix();
glColor3f(1.0, 1.0, 1.0);

DrawCircle(p2+180,460,10,10,100);

DrawCircle(p2+190,465,10,10,100);

DrawCircle(p2+200,460,10,10,100);

DrawCircle(p2+190,458,10,10,100);
  glPopMatrix();

   glutPostRedisplay();
        if(p2<=500.0)
         {
             p2=p2+0.02;
         }
  else
        p2=-350;
    glutPostRedisplay();

///-------3.cloud-------///
   glPushMatrix();
glColor3f(1.0, 1.0, 1.0);

DrawCircle(p3+270,460,10,10,100);

DrawCircle(p3+280,465,10,20,100);

DrawCircle(p3+290,460,10,10,100);

DrawCircle(p3+280,458,10,10,100);
  glPopMatrix();

   glutPostRedisplay();
        if(p3<=500.0)
         {
             p3=p3+0.02;
         }
  else
        p3=-350;
    glutPostRedisplay();

///------4.cloud///////
   glPushMatrix();
glColor3f(1.0, 1.0, 1.0);

DrawCircle(p4+340,460,10,10,100);

DrawCircle(p4+350,465,10,10,100);

DrawCircle(p4+360,460,10,10,100);

DrawCircle(p4+350,458,10,10,100);
  glPopMatrix();

   glutPostRedisplay();
        if(p4<=500.0)
         {
             p4=p4+0.02;
         }
  else
        p4=-350;
 glutPostRedisplay();


       ///----river----///

        glColor3f(0.5,0.6,1);

  	    glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(0,400);
        glVertex2d(500,400);
        glVertex2d(500,0);
        glEnd();




///-----left field-----///
    glColor3f(0.1,0.5,0.1);


	    glBegin(GL_POLYGON);
	    glVertex2d(0,400);
        glVertex2d(130,400);
        glVertex2d(190,250);
        glVertex2d(100,150);
        glVertex2d(0,120);
        glEnd();


        glColor3f(0.0,0.0,0.0);


	    glBegin(GL_POLYGON);
        glVertex2d(130,400);
        glVertex2d(140,400);
        glVertex2d(200,250);
        glVertex2d(190,250);
        glEnd();


	    glBegin(GL_POLYGON);
        glVertex2d(190,250);
        glVertex2d(200,250);
        glVertex2d(100,145);
        glVertex2d(100,150);
        glEnd();

  	    glBegin(GL_POLYGON);
        glVertex2d(100,150);
        glVertex2d(100,145);
        glVertex2d(0,110);
        glVertex2d(0,120);
        glEnd();


///-----Right field------///

        glColor3f(0.1,0.5,0.1);


	    glBegin(GL_POLYGON);
	    glVertex2d(500,400);
        glVertex2d(370,400);
        glVertex2d(310,250);
        glVertex2d(400,150);
        glVertex2d(500,120);
        glEnd();


        glColor3f(0.0,0.0,0.0);


	    glBegin(GL_POLYGON);
        glVertex2d(370,400);
        glVertex2d(365,400);
        glVertex2d(300,250);
        glVertex2d(310,250);
        glEnd();


	    glBegin(GL_POLYGON);
        glVertex2d(310,250);
        glVertex2d(300,250);
        glVertex2d(400,145);
        glVertex2d(400,150);
        glEnd();

  	    glBegin(GL_POLYGON);
        glVertex2d(400,150);
        glVertex2d(400,145);
        glVertex2d(500,110);
        glVertex2d(500,120);
        glEnd();



///------straw-----///


        glColor3f(1,0.7,0.0);
        glBegin(GL_POLYGON);
        glVertex2d(90,202);
        glVertex2d(90 ,260);
        glVertex2d(110,285);
        glVertex2d(118,285);
        glVertex2d(135,260);
        glVertex2d(140,202);
        glEnd();

        glColor3f(0,0,0.0);
        glBegin(GL_POLYGON);
        glVertex2d(112,285);
        glVertex2d(112,295);
        glVertex2d(116 ,295);
        glVertex2d(116,285);
        glEnd();


  ///house1///

 glColor3f(1,0.4,0);
        glBegin(GL_POLYGON);
        glVertex2d(50,262);
        glVertex2d(58,280);
        glVertex2d(60,278);
        glVertex2d(52,260);
        glEnd();



        glBegin(GL_POLYGON);
        glVertex2d(58,280);
        glVertex2d(90,280);
        glVertex2d(100,260);
        glVertex2d(65,260);
        glEnd();


 glColor3f(1,1,0.6);

        glBegin(GL_POLYGON);
        glVertex2d(52,262);
        glVertex2d(60,278);
        glVertex2d(65,262);
        glVertex2d(65,200);
        glVertex2d(52,205);
        glEnd();

 glColor3f(0.9,0.8,0.5);

        glBegin(GL_POLYGON);
        glVertex2d(65,260);
        glVertex2d(95,260);
        glVertex2d(95,205);
        glVertex2d(65,200);
        glEnd();


 glColor3f(1,0.4,0);
        glBegin(GL_POLYGON);
        glVertex2d(52,205);
        glVertex2d(48,195);
        glVertex2d(65,193);
        glVertex2d(65,200);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex2d(65,193);
        glVertex2d(65,200);
        glVertex2d(95,205);
        glVertex2d(100,195);
        glEnd();

        ///----window-----///

        glColor3f(0.4,0.6,0.3);
        glBegin(GL_POLYGON);
        glVertex2d(53,230);
        glVertex2d(53 ,245);
        glVertex2d(60,245);
        glVertex2d(60,230);
        glEnd();

       ///----door----////

        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2d(70,200);
        glVertex2d(70 ,250);
        glVertex2d(90,250);
        glVertex2d(90,202);
        glEnd();

        glColor3f(0.4,0.6,0.3);
        glBegin(GL_POLYGON);
        glVertex2d(70,250);
        glVertex2d(75 ,240);
        glVertex2d(75,202);
        glVertex2d(70,200);
        glEnd();


        glBegin(GL_POLYGON);
        glVertex2d(90,250);
        glVertex2d(85 ,240);
        glVertex2d(85,202);
        glVertex2d(90,202);
        glEnd();



///---tree---///

      glColor3f(0.3,0.0,0.0);
  	    glBegin(GL_POLYGON);
        glVertex2d(30,180);
        glVertex2d(40,180);
        glVertex2d(40,300);
        glVertex2d(30,300);
        glEnd();


        glBegin(GL_POLYGON);
        glVertex2d(30,180);
        glVertex2d(20,170);
        glVertex2d(30,170);
        glEnd();


        glBegin(GL_POLYGON);
        glVertex2d(30,180);
        glVertex2d(30,170);
        glVertex2d(35,160);
        glVertex2d(40,170);
        glVertex2d(40,180);
        glEnd();



        glBegin(GL_POLYGON);
        glVertex2d(40,180);
        glVertex2d(40,170);
        glVertex2d(50,170);
        glEnd();

///uproot

        glBegin(GL_POLYGON);
        glVertex2d(30,300);
        glVertex2d(35,300);
        glVertex2d(33,320);
        glVertex2d(25,320);
        glEnd();


        glBegin(GL_POLYGON);
        glVertex2d(35,300);
        glVertex2d(40,300);
        glVertex2d(45,320);
        glVertex2d(38,320);
        glEnd();

///----leaf----///

glColor3f(0.4,1.0,0.2);
DrawCircle(25,335,20,20,100);
DrawCircle(18,360,20,20,100);
DrawCircle(23,380,20,20,100);
DrawCircle(30,400,20,20,100);
DrawCircle(50,400,20,20,100);
DrawCircle(60,380,20,20,100);
DrawCircle(60,360,20,20,100);
DrawCircle(55,330,20,20,100);
DrawCircle(30,360,20,20,100);
///-----Right House----///


	glColor3f(0.4,0.1,0.3);


	    glBegin(GL_POLYGON);
        glVertex3d(380,210,0.0);
        glVertex3d(450,210,0.0);
        glVertex3d(450,300,0.0);
        glVertex3d(380,300,0.0);
        glEnd();



	glColor3f(1,1,0.1);


	    glBegin(GL_POLYGON);
        glVertex3d(360,300,0.0);
        glVertex3d(470,300,0.0);
        glVertex3d(450,340,0.0);
        glVertex3d(380,340,0.0);
        glEnd();



    glColor3f(0.8,0.4,0.1);


	    glBegin(GL_POLYGON);
        glVertex3d(370,200,0.0);
        glVertex3d(380,210,0.0);
        glVertex3d(450,210,0.0);
        glVertex3d(460,200,0.0);
        glEnd();


    ///---door---///

    glColor3f(0.9,0.9,1);


	    glBegin(GL_POLYGON);
        glVertex3d(400,210,0.0);
        glVertex3d(400,280,0.0);
        glVertex3d(430,280,0.0);
        glVertex3d(430,210,0.0);
        glEnd();


         ///----windows-1,2------///

    glColor3f(0.9,0.9,1);


	    glBegin(GL_POLYGON);
        glVertex3d(385,265,0.0);
        glVertex3d(395,265,0.0);
        glVertex3d(395,285,0.0);
        glVertex3d(385,285,0.0);
        glEnd();


	    glBegin(GL_POLYGON);
        glVertex3d(435,265,0.0);
        glVertex3d(445,265,0.0);
        glVertex3d(445,285,0.0);
        glVertex3d(435,285,0.0);
        glEnd();



        ///---static boat----///

        glColor3f(0.5,0.1,0.0);
	    glBegin(GL_POLYGON);
        glVertex2d(240,240);
        glVertex2d(310,240);
        glVertex2d(290,200);
        glVertex2d(260,200);
        glEnd();





        glColor3f(0.7,0.5,0.3);
	    glBegin(GL_POLYGON);
        glVertex2d(260,240);
        glVertex2d(260,270);
        glVertex2d(290,270);
        glVertex2d(290,240);
        glEnd();



        glColor3f(1,0.3,0);
	    glBegin(GL_POLYGON);
        glVertex2d(303,210);
        glVertex2d(306,210);
        glVertex2d(306,290);
        glVertex2d(303,290);
        glEnd();


    ///----BD-Flag-----///

	   glColor3f(0.3,0,0);


	    glBegin(GL_POLYGON);
        glVertex3d(460,180,0.0);
        glVertex3d(465,180,0.0);
        glVertex3d(465,360,0.0);
        glVertex3d(460,360,0.0);
        glEnd();



	   glColor3f(0.2,0.4,0.2);


	    glBegin(GL_POLYGON);
        glVertex3d(465,360,0.0);
        glVertex3d(495,360,0.0);
        glVertex3d(495,320,0.0);
        glVertex3d(465,320,0.0);
        glEnd();

        glColor3f(1.0, 0.0, 0.0);

        DrawCircle(480,340,8,10,100);

  ///---moving boat---///

	glPushMatrix();

	glTranslatef(tx,ty,0);

	glColor3f(1.0, 0.3, 0.0);

	    glBegin(GL_QUADS);
        glVertex2d(b+100,20);
        glVertex2d(b+80,50);
        glVertex2d(b+200,50);
        glVertex2d(b+180,20);
        glEnd();

  	glColor3f(0.3, 0.0, 0.0);

	    glBegin(GL_QUADS);
        glVertex2d(b+120,50);
        glVertex2d(b+120,100);
        glVertex2d(b+170,100);
        glVertex2d(b+170,50);
        glEnd();

///---sailor----///
   	glColor3f(1, 0.0, 0.0);

	    glBegin(GL_QUADS);
        glVertex2d(b+95,50);
        glVertex2d(b+95,80);
        glVertex2d(b+105,80);
        glVertex2d(b+105,50);
        glEnd();

	glColor3f(1, 1.0, 0.0);
    DrawCircle(b+100,85,5,5,100);

        glColor3f(1, 1.0, 0.0);

	    glBegin(GL_QUADS);
        glVertex2d(b+105,75);
        glVertex2d(b+115,75);
        glVertex2d(b+115,70);
        glVertex2d(b+105,70);
        glEnd();

	    glBegin(GL_QUADS);
        glVertex2d(b+105,65);
        glVertex2d(b+115,65);
        glVertex2d(b+115,60);
        glVertex2d(b+105,60);
        glEnd();

        glColor3f(0.4, 0.2, 0.1);

	    glBegin(GL_QUADS);
        glVertex2d(b+107,10);
        glVertex2d(b+112,10);
        glVertex2d(b+113,85);
        glVertex2d(b+110,85);
        glEnd();

        glPopMatrix();

   glutPostRedisplay();


	glFlush();
}

void spe_key(int key, int x, int y)
{

	switch (key) {




				case GLUT_KEY_RIGHT:

				    if(tx<500)
                     tx +=2;
                    else
                     tx=-200;

				glutPostRedisplay();
				break;



		case GLUT_KEY_LEFT:
                if(tx>-200)
				 tx -=2;
				else
                    tx=500;
				glutPostRedisplay();
				break;



	  default:
			break;
	}
}
void boat_auto(void)
{

 if(b<=450.0)
         {
             b=b+0.03;
         }
  else
        b=-200;

glutPostRedisplay();
}



void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

      case 'l':
        glutIdleFunc(boat_auto);
        break;

		case 's':
			 glutIdleFunc(NULL);
			 break;

	  default:
			break;
	}
}





int main()
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1500,600);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Final Project");
    init();
    glutDisplayFunc(draw);
    glutKeyboardFunc(my_keyboard);
    glutSpecialFunc(spe_key);
    glutFullScreen();
    sndPlaySound("bird.wav",SND_LOOP | SND_ASYNC);
    glutMainLoop();
    return 0;
}
