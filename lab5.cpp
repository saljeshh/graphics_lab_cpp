#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main() {
    int gd = DETECT, gm;
    int x0,y0,xn,yn,del_x,del_y,a,tempx0, tempy0, x,y;

    printf("Enter value for (x0,y0,xn,yn) ");
    scanf("%d%d%d%d",&x0,&y0,&xn,&yn);

    initgraph(&gm,&gd,"");

    del_x = abs(xn-x0);
    del_y = abs(yn-y0);

    if(((xn-x0) > 0 && (yn-y0) <0)  || ((xn-x0 < 0 && yn-y0 > 0)))
    {
        a = -1;
    }else{
        a = 1;
    }

    if(del_x >= del_y)

    {
        //1st
        if(xn < x0){
        //swap
            tempx0 = x0;
            tempy0 = y0;

            x0 = xn;
            y0 = yn;

            xn = tempx0;
            yn = tempy0;

        }

        //2nd
        x = x0;
        y = y0;

        //3rd
        putpixel(x,y,RED);

        //4th
        int p = 2*del_y - del_x;


        //printing
        printf("k\tP\t(x,y)\n ");
        printf("*-----------------------------*\n");


        //5th
        int i = 0;
        while(i < del_x){
            if(p < 0)
        {
            x = x + 1;
            y=y;
            putpixel(x,y,RED);

            printf("%d\t%d\t%(%d,%d)\n ",i,p,x,y);
            p = p + 2*del_y;

        }else{
            x = x + 1;
            y = y + a;
            putpixel(x,y,RED);
            printf("%d\t%d\t%(%d,%d)\n ",i,p,x,y);
            p = p + 2* del_y - 2* del_x;

        }

        i += 1;

        }


    } else{
        //1st
        if(yn < y0){
        //swap
            tempx0 = x0;
            tempy0 = y0;

            x0 = xn;
            y0 = yn;

            xn = tempx0;
            yn = tempy0;

        }

        //2nd
        x = x0;
        y = y0;

        //3rd
        putpixel(x,y,RED);

        //4th
        int p = 2*del_x - del_y;


        //printing
        printf("k\tP\t(x,y)\n ");
        printf("*-----------------------------*\n");


        //5th
        int i = 0;
        while(i < del_x){
            if(p < 0)
        {
            x = x;
            y=y+1;
            putpixel(x,y,RED);

            printf("%d\t%d\t%(%d,%d)\n ",i,p,x,y);
            p = p + 2*del_x;

        }else{
            x = x+a;
            y = y + 1;
            putpixel(x,y,RED);
            printf("%d\t%d\t%(%d,%d)\n ",i,p,x,y);
            p = p + 2* del_x - 2* del_y;

        }

        i += 1;

        }

    }



    getch();

    return 0;
}
