#include<conio.h>
#include<dos.h>
#include<graphics.h>

int main()
{   
     initwindow(800,800);

    
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
   

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
    
     getch();
    closegraph();
}
