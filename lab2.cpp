#include<graphics.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    settextstyle(4,0,2);
    outtextxy(220,100,"BASIC 2D SHAPES");
    line(200,130,500,130);

    settextstyle(2,0,5);
    setcolor(CYAN);
    line(100,180,80,220);
    settextstyle(1,0,1);
    outtextxy(50,250,"line");

    setcolor(WHITE);
    circle(180,210,27);
    setfillstyle(1,GREEN);
    floodfill(180,210,WHITE);
    outtextxy(140,250,"circle");

    int arr[] = {260,180, 290,240, 230,240, 260,180};
    //drawpoly(4, arr);
    setfillstyle(1, RED);
    fillpoly(4, arr);
    outtextxy(210,250,"triangle");

    rectangle(320,180,350,240);
    setfillstyle(1,YELLOW);
    floodfill(325,190,WHITE);
    outtextxy(310,270,"rectangle");

    int pentagon[] = {390,180, 420,180, 440,215, 415,240, 370,215, 390,180};
    setfillstyle(1,WHITE);
    fillpoly(6,pentagon);
    outtextxy(390,250,"pentagon");

    int hexagon[] = {480,180, 510,180, 530,215, 510,240, 480,240, 460,215, 480,180};
    setfillstyle(1,MAGENTA);
    fillpoly(7,hexagon);
    outtextxy(490,270,"hexagon");


    getch();
    return 1;
}
