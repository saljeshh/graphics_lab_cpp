// to implement boundary fill algorithm using 4 connected approach

#include<graphics.h>
#include<conio.h>
#include<stdio.h>


void boundaryFill4c(int x, int y, int fill_color, int b_color){
    // determining current color of seed pixel
    int cc = getpixel(x,y);


    if(cc != fill_color && cc != b_color){
        // assigning seed pixel a fillcolor
        putpixel(x,y,fill_color);

        boundaryFill4c(x-1, y, fill_color, b_color);
        boundaryFill4c(x, y-1, fill_color, b_color);
        boundaryFill4c(x+1, y, fill_color, b_color);
        boundaryFill4c(x, y+1, fill_color, b_color);
    }
}


int main() {

    int gd = DETECT, gm;

    initgraph(&gd,&gm, "");

    rectangle(150,50,400,150);
    int fill_color = 10;
    int b_color = WHITE;
    int x = 160, y = 80;

    boundaryFill4c(x,y,fill_color,b_color);
}





