//Nur Hossain Memel 
#include <graphics.h>
  

int main()
{
    
    
    int gd = DETECT, gm;
  
    initwindow(920,520, "NUR HOSSAIN MEMEL");
    initgraph(&gd, &gm, "");
    //Mainframe
    
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
    
    getch();
    closegraph();
}

