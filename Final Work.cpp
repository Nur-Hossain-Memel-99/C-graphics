#include<graphics.h>
#include<iostream>
#include<math.h>
#include<dos.h>

using namespace std;
int dda(){
 		//DDA 
 		float x,y,x1,y1,x2,y2,dx,dy,step;
 		int i;
    cout<<"Enter the value of x1 and y1 :";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 and y2 :";
	cin>>x2>>y2;

	dx=abs(x2-x1);
	dy=abs(y2-y1);

	if(dx>dy)
	    step=dx;
	 else
	    step=dy;

	 dx=dx/step;
	 dy=dy/step;

	  x=x1;
	  y=y1;

	i=1;

	while(i<=step)
	{
		putpixel(x,y,4);
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(50);

	   }
	   getch();	
	
}

int emoji(){
	setfillstyle(1,YELLOW);
    circle(350,220,200);
    floodfill(350,220,15);
    
	
	
	setfillstyle(1,BLACK);
	circle(260,190,20);
	floodfill(261,191,15);
	
	setfillstyle(1,BLACK);
	circle(440,190,20);
	floodfill(441,191,15);
	
	setfillstyle(1,WHITE);
	circle(250,180,50);
	floodfill(240,180,15);
	
	setfillstyle(1,WHITE);
	circle(450,180,50);
	floodfill(460,180,15);
	
	setcolor(RED);  
    ellipse(350,280,180,
     360,100,50);
     //Text
    setcolor(RED);
	settextstyle(8, 0, 5);
    outtextxy(300, 450, "HELLO!");
    
	
}
int flag1()
{
	setfillstyle(12,GREEN);
    rectangle(200,200, 520,400);
    floodfill(210,210,15);
    
    setfillstyle(12,RED);
    circle(350,300,60);
    floodfill(352,302,15);
    
    setfillstyle(12,BROWN);
    rectangle(195,200,200,800);
    floodfill(196,201,15);
    
}

int sohid(){
	rectangle(10,10,900,500);
    
    
    //Base
    setfillstyle(1,6);
    rectangle(110,460,800,470);
    floodfill(111,461,15);
    
    setfillstyle(1,6);
    rectangle(40,435,870,445);
    floodfill(41,436,15);
    
    //1st Piller
    setfillstyle(1,15);
    rectangle(170,280,250,433);
    floodfill(171,281,15);
    setcolor(GREEN);
    rectangle(190,300,230,428);
    setfillstyle(1,0);
    floodfill(191,301,GREEN);
    
    //5th Piller
    
    setcolor(15);
    rectangle(740,280,660,433);
    setfillstyle(1,15);
    floodfill(738,281,15);

    setcolor(GREEN);
    rectangle(720,300,680,428);
    setfillstyle(1,0);
    floodfill(718,301,GREEN);
    
    //2nd Piller
    setcolor(15);
    rectangle(275,255,355,433);
    setfillstyle(1,15);
    floodfill(276,256,15);
    
    setcolor(GREEN);
    rectangle(295,280,335,428);
    setfillstyle(1,0);
    floodfill(296,281,GREEN);
    
    //4th Piller
    setcolor(15);
    rectangle(560,255,640,433);
    setfillstyle(1,15);
    floodfill(561,256,15);
    
    setcolor(GREEN);
    rectangle(580,280,620,428);
    setfillstyle(1,0);
    floodfill(581,281,GREEN);
    
    //Middle Piller
    setcolor(15);
    rectangle(520,245,395,433);
    setfillstyle(1,15);
    floodfill(396,431,15);
    
    
    
    setcolor(GREEN);
    rectangle(405,255,455,428);
    setfillstyle(1,0);
    floodfill(406,256,GREEN);
    
    rectangle(465,255,510,428);
    setfillstyle(1,0);
    floodfill(466,256,GREEN);
    
    //Midhead
    setcolor(15);
    line(532,155,520,245);
    line(383,155,395,245);
    line(532,155,383,155);
    setfillstyle(1,15);
    floodfill(396,244,15);
    
    setcolor(GREEN);
    line(390,163,405,240);
    line(390,163,520,163);
    line(405,240,510,240);
    line(520,163,510,240);
    setfillstyle(1,0);
    floodfill(391,164,GREEN);
    
    rectangle(455,165,465,238);
    setfillstyle(1,15);
    floodfill(456,166,GREEN);
    
     //MId circle
    setcolor(15);
    circle(460,265,90);
    setfillstyle(1,RED);
    floodfill(470,270,15);
	floodfill(525,245,15);
    floodfill(467,235,15);
    floodfill(407,260,15);
    floodfill(390,245,15);
}
build(){
rectangle(200,150,700,650);
	setfillstyle(1,11);
	floodfill(205,155,15);
	//base
	setcolor(0);
	line(300,550,600,550);
	line(310,540,590,540);
	line(590,540,600,550);
	line(300,550,310,540);
	setfillstyle(1,7);
	
	floodfill(311,541,0);
	
	//build
	line(380,540,380,340);
	line(520,540,520,340);
	line(450,540,450,335);
	
	line(450,335,520,340);
	line(380,340,450,335);
	
	setfillstyle(1,8);
	floodfill(381,341,0);
	floodfill(519,341,0);
	
	line(200,600,300,550);
	line(600,550,750,600);
	setfillstyle(1,6);
	floodfill(210,610,0);
	
	//Tree
	rectangle(340,525,345,540);
	circle(343,515,10);
	
	setfillstyle(1,2);
	floodfill(343,515,0);
	setfillstyle(1,6);
	floodfill(341,526,0);
	
	rectangle(555,525,560,540);
	circle(558,515,10);
	
	setfillstyle(1,6);
	floodfill(556,526,0);
	setfillstyle(1,2);
	floodfill(558,515,0);
	
	//sun
	circle(650,200,25);
	setfillstyle(1,14);
	floodfill(651,200,0);
	//cloud
	circle(250,275,20);
	circle(270,275,15);
	circle(290,275,10);
	
	
	circle(650,325,20);
	circle(630,325,15);
	circle(610,325,10);
	
	setfillstyle(1,15);
	floodfill(250,275,0);
	floodfill(270,275,0);
	floodfill(265,275,0);
	
	floodfill(290,275,0);
	floodfill(650,325,0);
	floodfill(635,325,0);
	floodfill(620,325,0);
	floodfill(610,325,0);
	
	//Windows
	
	//1
	rectangle(385,350,400,365);
	
	rectangle(385,375,400,390);
	rectangle(385,400,400,415);
	rectangle(385,425,400,440);
	rectangle(385,450,400,465);
	rectangle(385,475,400,490);
	rectangle(385,500,400,515);
	//2
	rectangle(415,350,433,367);
	rectangle(415,377,433,394);
	rectangle(415,404,433,421);
	rectangle(415,431,433,448);
	rectangle(415,458,433,475);
	rectangle(415,485,433,502);
	rectangle(415,512,433,529);
	
	//3
	rectangle(460,350,478,367);
	rectangle(460,377,478,394);
	rectangle(460,404,478,421);
	rectangle(460,431,478,448);
	rectangle(460,458,478,475);
	rectangle(460,485,478,502);
	rectangle(460,512,478,529);
	
	
	//4
	rectangle(500,350,515,365);
	rectangle(500,375,515,390);
	rectangle(500,400,515,415);
	rectangle(500,425,515,440);
	rectangle(500,450,515,465);
	rectangle(500,475,515,490);
	rectangle(500,500,515,515);
		
	
}

int space(){
	
   
   //Moon
    for(int x=1; x<=600 ;x++){
	circle(450,100,50);
	setfillstyle(1,7);
    floodfill(451,100,15);
	
	circle(430,110,10);
	setfillstyle(1,8);
    floodfill(431,110,15);
	
	circle(460,85,12);
	setfillstyle(1,8);
    floodfill(461,85,15);
	
	
	//stars
	
	circle(120,110,4);
    setfillstyle(1,13);
    floodfill(121,110,15);
    
    circle(200,300,4);
    setfillstyle(1,3);
    floodfill(201,300,15);
    
    circle(50,700,4);
    setfillstyle(1,4);
    floodfill(51,700,15);
    
    circle(60,300,4);
    setfillstyle(1,1);
    floodfill(61,301,15);
	
    circle(100+x,100,4);
    setfillstyle(1,13);
    floodfill(101+x,100,15);
    
    circle(200+x,100,4);
    setfillstyle(1,15);
    floodfill(201+x,100,15);
    
    circle(450+x,300,4);
    setfillstyle(1,12);
    floodfill(451+x,300,15);
    
    circle(300+x,120,4);
    setfillstyle(1,11);
    floodfill(301+x,120,15);
    
    circle(80+x,220,4);
    setfillstyle(1,4);
    floodfill(81+x,220,15);
    
    circle(400+x,420,4);
    setfillstyle(1,5);
    floodfill(401+x,420,15);
    
    circle(110+x,540,4);
    setfillstyle(1,2);
    floodfill(111+x,540,15);
    
    circle(120+x,500,4);
    setfillstyle(1,12);
    floodfill(121+x,500,15);
    
	circle(300+x,550,4);
    setfillstyle(1,7);
    floodfill(301+x,550,15);
    
	circle(200+x,600,4);
    setfillstyle(1,14);
    floodfill(201+x,600,15);
    
	circle(350+x,650,4);
    setfillstyle(1,4);
    floodfill(351+x,650,15);
  
    //spaceship
    //body
    rectangle(50+x,350,200+x,450);
    setfillstyle(1,9);
    floodfill(51+x,351,15);
    
    rectangle(30+x,370,50+x,430);
	setfillstyle(1,12);
    floodfill(31+x,371,15);
    
	rectangle(70+x,350,85+x,450);
    setfillstyle(1,12);
    floodfill(71+x,351,15);
    
    rectangle(165+x,350,180+x,450);
    setfillstyle(1,12);
    floodfill(166+x,351,15);
    
    rectangle(110+x,370,150+x,430);
    setfillstyle(1,11);
    floodfill(111+x,371,15);
    //wings
    line(50+x,350,50+x,310);
    line(50+x,350,120+x,350);
    line(50+x,310,120+x,350);
    setfillstyle(1,10);
    floodfill(51+x,315,15);
    
    line(50+x,450,50+x,490);
    line(50+x,450,120+x,450);
    line(50+x,490,120+x,450);
    setfillstyle(1,10);
    floodfill(51+x,455,15);
    
    line(205+x,350,205+x,450);
    line(205+x,350,270+x,400);
    line(270+x,400,205+x,450);
    setfillstyle(1,12);
    floodfill(206+x,400,15);
    
    
   
    
    
    delay(100);
    cleardevice();
}
    
    
}

int breshen(){
	int dx, dy, p, end;

      float x1, x2, y1, y2, x, y;
      
      printf("Enter Value of X1: ");
      scanf("%f", &x1);
      printf("Enter Value of Y1: ");
      scanf("%f", &y1);
      printf("Enter Value of X2: ");
      scanf("%f", &x2);
      printf("Enter Value of Y2: ");
      scanf("%f", &y2);
      dx = abs(x1 - x2);
      dy = abs(y1 - y2);
      p = 2 * dy - dx;
      if(x1 > x2)
      {
            x = x2;
            y = y2;
            end = x1;
      }
      else
      {
            x = x1;
            y = y1;
            end = x2;
      }
      putpixel(x, y, 10);
      
      while(x < end)
      {
            x = x + 1;
            if(p < 0)
            {
                  p = p + 2 * dy;
            }
            else
            {
                  y = y + 1;
                  p = p + 2 * (dy - dx);
            }
            putpixel(x, y, 10);
            delay(50);
      }
      
      
      
}

void PP(int x0,int y0,int x,int y){
	
	putpixel(x0+x,y0+y,3);
	putpixel(x0+x,y0-y,3);
	putpixel(x0-x,y0+y,3);
	putpixel(x0-x,y0-y,3);
	putpixel(x0+x,y0+y,3);
	putpixel(x0+x,y0-y,3);
	putpixel(x0-x,y0+y,3);
	putpixel(x0-x,y0-y,3);	
	
}

//Midpoint
void MP(int x0,int y0,int r){
	
	int x=0 ,y = r;
	int f = 1-r; 
	//decission parameter
	
	
	PP(x0,y0,x,y);
	while(x<y)
	{
		x++;
		if(f<=0)
		{
			f += (2*x)+1;
			
			
		}
		else
		{
			y--;
			f += (2*(x-y))+1;
		}
		
		PP(x0,y0,x,y);
	}
	
	
}
int mid()
{
	int x,y,r;

	
	cout << " Enter the Of The Center Co-ordinate:";
	cin >>x>>y;
	
	cout<<"Enter radius of the circle:";
	cin >> r;
	
	MP(x,y,r);
	
	
	return 0;
	
	
	
	
	
}
//MAIN
int main ()
{   
	
	initwindow(900,800);
	
	
	
	
    //N
    //setcolor(GREEN);
    rectangle(150,50, 155,90);
    setfillstyle(1,9);
    floodfill(151,51,15);
    
    rectangle(170,50, 175,90);
    setfillstyle(1,9);
    floodfill(171,51,15);
    
    line(150,50,170,90);
    line(155,50,175,90);
     setfillstyle(1,9);
    floodfill(156,55,15);
    
    //U
    
    rectangle(180,50, 185,90);
    rectangle(180,85, 205,90);
    rectangle(200,50, 205,90);
    setfillstyle(1,9);
    floodfill(181,51,15);
    floodfill(191,86,15);
    floodfill(201,51,15);
    
    //R
    rectangle(210,50, 215,90);
    rectangle(210,50, 230,70);
    line(210,70,230,90);
    line(215,70,230,85);
    line(230,85,230,90);
    setfillstyle(1,9);
    floodfill(211,51,15);
    floodfill(216,51,15);
    floodfill(213,71,15);
    floodfill(213,80,15);
    floodfill(213,80,15);
    floodfill(229,86,15);
    
    //H 
    rectangle(240,50, 245,90);
    
    settextstyle(0, HORIZ_DIR, 2);
	outtextxy(210, 100, "CSE1802014009 ");
    
    rectangle(255,50, 260,90);
    rectangle(245,65, 255,70);
    setfillstyle(1,9);
    floodfill(241,51,15);
    floodfill(256,51,15);
    floodfill(246,66,15);
    
    //O
    circle(285,70,20);
    circle(285,70,15);
    setfillstyle(1,9);
    floodfill(266,70,15);
    //SS
    rectangle(310,50,340,55);
    rectangle(310,85,340,90);
    line(310,50,340,85);
    line(310,55,340,90);
    setfillstyle(1,9);
    floodfill(315,51,15);
     floodfill(311,86,15);
     floodfill(312,56,15);
    
    rectangle(350,50,380,55);
    rectangle(350,85,380,90);
    line(350,50,380,85);
    line(350,55,380,90);
     setfillstyle(1,9);
    floodfill(355,51,15);
     floodfill(351,86,15);
     floodfill(352,56,15);
    
    //A
    
    rectangle(390,50,420,70);
    rectangle(395,55,415,65);
    rectangle(390,70,400,90);
    rectangle(410,70,420,90);
    setfillstyle(1,9);
    floodfill(391,51,15);
    floodfill(391,71,15);
    floodfill(411,71,15);
    
    //I
    rectangle(430,50,455,55);
    rectangle(430,85,455,90);
    rectangle(440,55,445,85);
    setfillstyle(1,9);
    floodfill(431,51,15);
    floodfill(441,56,15);
    floodfill(431,86,15);
    //N
     rectangle(465,50, 470,90);
    setfillstyle(1,9);
    floodfill(466,51,15);
    
    rectangle(480,50, 485,90);
    setfillstyle(1,9);
    floodfill(481,51,15);
    
    line(465,50,480,90);
    line(470,50,485,90);
     setfillstyle(1,9);
    floodfill(471,55,15);
	
	int i,gd=DETECT,gm;

	initgraph(&gd,&gm,"");
	
	cout<<"\t**************************************\n";
	cout<<"\t\tNur Hossain Memel\n";

	cout<<"\t\t1.National Flag\n";
	cout<<"\t\t2.Emoji\n";
	cout<<"\t\t3.Sohid Minar\n";
	cout<<"\t\t4.Building\n";
	cout<<"\t\t5.Breshenham Line drawing Algorithm\n";
	cout<<"\t\t6.DDA Line drawing Algorithm\n";
	cout<<"\t\t7.Mid Point Circle drawing Algorithm\n";
	cout<<"\t\t8.Spaceship Animation\n";
	while(1){
	
	int choice;

	
    cout<<"\nEnter your choice here :";
     cin>>choice;
  
     
       switch(choice)
     {
     	
     	
     	case(1):
             flag1();
     	break;
     		
     	case(2):
             emoji();
         break;
         
         case(3):
             sohid();
         break;
         
         case(4):
             build();
         break;
         
         case(5):
             breshen();
         break;
         
         case(6):
             dda();
         break;
         case(7):
             mid();
         break;
         case (8):
         		space();
         case(9):
         	
             cleardevice();
         break;
     			
		default:
     	cout<<"Error";
	 }
     

}
	

	  getch();

	return 0;

}

