
// to implement basic 2d transformations
//2 scaling

#include<stdio.h>
#include<conio.h>
#include<graphics.h>


int main(){
    int sx, sy;
    int gd = DETECT, gm;

    printf("Enter the translation vector sx and sy");
    scanf("%d%d",&sx,&sy);

    initgraph(&gd,&gm,"");


    int arr[] = {40,50,80,30,100,60,70,90,40,50};

    drawpoly(5,arr);
    int outx = 40;
    int outy = 110;
    outtextxy(outx,outy,"Initial object");


    int newTranslationArr[10];

    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            newTranslationArr[i] = arr[i] * sx;
        }else{
            newTranslationArr[i] = arr[i] * sy;
        }
    }


    drawpoly(5,newTranslationArr);
    outtextxy(outx * sx,outy * sy,"final scaled");

    getch();

    return 0;
}
