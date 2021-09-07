//MID POINT
#include<iostream>
#include<graphics.h>

using namespace std;

//Poting point
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
int main()
{
	int gd=DETECT,gm,x,y,r;
	initgraph(&gd,&gm,"");

	
	cout << " Enter the Of The Center Co-ordinate:";
	cin >>x>>y;
	
	cout<<"Enter radius of the circle:";
	cin >> r;
	
	MP(x,y,r);
	
	getch();
	return 0;
	
	
	
	
	
}
