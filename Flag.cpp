
#include <graphics.h>
  

int main()
{
    
    
    int gd = DETECT, gm;
  
    
    initgraph(&gd, &gm, "");
    
    setfillstyle(12,GREEN);
    rectangle(200,200, 520,400);
    floodfill(210,210,15);
    
    setfillstyle(12,RED);
    circle(350,300,60);
    floodfill(352,302,15);
    
    setfillstyle(12,BROWN);
    rectangle(195,200,200,800);
    floodfill(196,201,15);
    
    getch();
    closegraph();
}
