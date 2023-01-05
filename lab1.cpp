#include<graphics.h>
#include<conio.h>

int main(){

    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    circle(320,250,50);

    rectangle(315,230,325,260);
    circle(295,240,10);
    circle(345,240,10);
    rectangle(310,275,330,285);

    line(320,200,320,140);
    line(350,210,380,160);
    line(290,210,260,160);

    rectangle(300,300,340,390);
    line(300,300,270,340);
    line(340,300,370,340);

    line(300,390,270,440);
    line(340,390,370,440);

    getch();
    return 1;
}
