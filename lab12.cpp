// to implement basic 2d transformations


//1 .

#include<stdio.h>
#include<conio.h>
#include<graphics.h>


int main(){
    int tx, ty;
    int gd = DETECT, gm;

    printf("Enter the translation vector tx and ty");
    scanf("%d%d",&tx,&ty);

    initgraph(&gd,&gm,"");


    int arr[] = {40,50,80,30,100,60,70,90,40,50};

    drawpoly(5,arr);
    int outx = 40;
    int outy = 110;
    outtextxy(outx,outy,"Initial Object");


    int newTranslationArr[10];

    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            newTranslationArr[i] = arr[i] + tx;
        }else{
            newTranslationArr[i] = arr[i] + ty;
        }
    }


    drawpoly(5,newTranslationArr);
    outtextxy(outx + tx,outy + ty,"final");

    getch();

    return 0;
}
