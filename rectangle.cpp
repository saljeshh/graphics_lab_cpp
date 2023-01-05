#include<graphics.h>
#include<conio.h>
#include<stdio.h>


int main(){

    int gd = DETECT, gm;

    initgraph(&gd,&gm,"");

    circle(10,10,RED);
    rectangle(200,10,400,200);


    getch();
    return 0;

}
