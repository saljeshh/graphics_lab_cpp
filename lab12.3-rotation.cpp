

// to implement basic 2d transformations
//3 rotation
// conver into radian

/*
    angle = 3.14/180 * angle

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>


int main(){
    int sx, sy;
    int gd = DETECT, gm;
    float angle;
    printf("Enter the rotation angle");
    scanf("%f",&angle);

    initgraph(&gd,&gm,"");
    initwindow(2000,2000);


    int arr[] = {140,150,180,130,200,160,170,190,140,150};

    drawpoly(5,arr);
    int outx = 40;
    int outy = 110;
    outtextxy(outx,outy,"Initial object");

    angle = (3.14/180) * angle;


    int newTranslationArr[10];

    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            newTranslationArr[i] = arr[i] * cos(angle) - arr[i+1] * sin(angle);
            printf("%d",newTranslationArr[i]);
        }else{
            newTranslationArr[i] = arr[i-1] * sin(angle) + arr[i] * cos(angle);
            printf("%d",newTranslationArr[i]);
        }
    }


    drawpoly(5,newTranslationArr);
    outtextxy(outx * sx,outy * sy,"final scaled");

    getch();

    return 0;
}
