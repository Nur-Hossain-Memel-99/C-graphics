#include <graphics.h>
  
int main()
{
   
    int gd = DETECT, gm;
    initwindow(1000,800, " COLOR EMOJI ");
    initgraph(&gd, &gm,"");
    
    
    //Emoji
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
    
    getch();
    closegraph();
  
    return 0;
}
