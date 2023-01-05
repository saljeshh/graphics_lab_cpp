#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

int main()
{
 int gd,gm,midx,midy;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm," ");//initialize graphics

 midx=getmaxx()/2;//midpoint of x axis
// midy=getmaxy()/2;midpoint of y axis
 settextstyle(0,HORIZ_DIR,2);
 outtextxy(150,50,"TRAFFIC SIGNAL SIMULATOR");
 setcolor(WHITE);
 rectangle(midx-40,100,midx+40,320);
 rectangle(midx-15,320,midx+15,480);
 floodfill(midx-14,321,WHITE);
 circle(midx,140,30);
 circle(midx,210,30);
 circle(midx,280,30);

 while(true)
 {

 //RED color blink
 setfillstyle(SOLID_FILL,RED);
 floodfill(midx,140,WHITE);
 setcolor(RED);
 outtextxy(400,130,"STOP");
 delay(1000);

 setfillstyle(SOLID_FILL,BLACK);
 floodfill(midx,140,WHITE);
 setcolor(BLACK);
 outtextxy(400,130,"STOP");

 //YELLOW COLOR BLINK
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(midx,210,WHITE);
 setcolor(YELLOW);
 outtextxy(400,200,"READY/SLOW");
 delay(2000);

 setfillstyle(SOLID_FILL,BLACK);
 floodfill(midx,210,WHITE);
 setcolor(BLACK);
 outtextxy(400,200,"READY/SLOW");

 //GREEN COLOR BLINK
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(midx,280,WHITE);
 setcolor(GREEN);
 outtextxy(400,270,"GO");
 delay(3000);

 setfillstyle(SOLID_FILL,BLACK);
 floodfill(midx,280,WHITE);
 setcolor(BLACK);
 outtextxy(400,270,"GO");

 }
 getch();
 closegraph();
 return 0;
}
