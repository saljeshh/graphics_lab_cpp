#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void Draw(int X, int Y, int Xc, int Yc){

}

int main(){
    int gd = DETECT, gm;
    int X0,Y0,X,Y,Xc,p,Yc,radius;


    printf("Enter the value of Xc and Yc also radius in row\n");
    scanf("%d%d%d",&Xc, &Yc, &radius);


    // assume circle has center 0,r
    X0 = 0;
    Y0 = r;

    // initial decision parameter
    p = 1-r;


    getch();
    return 0;
}
