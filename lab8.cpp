#include<stdio.h>
#include<graphics.h>
#include<conio.h>


// midpoint circle drawing algorithm
void draw(int x, int y, int Xc, int Yc){
    putpixel(x + Xc, y + Yc, RED);
    putpixel(-x + Xc, y + Yc, BLUE);
    putpixel(-x + Xc, -y + Yc, YELLOW);
    putpixel(x + Xc, -y + Yc, GREEN);

    putpixel(y + Xc, x + Yc, RED);
    putpixel(y + Xc, -x + Yc, GREEN);
    putpixel(-y + Xc, -x + Yc, YELLOW);
    putpixel(-y + Xc, x + Yc, BLUE);
}


int main(){
    int gd = DETECT, gm;
    int r, p, X0, Y0, x, y, Xc, Yc,k;

    // input
    printf("Enter Xc, Yc radius for circle \n");
    scanf("%d%d%d",&Xc, &Yc,&r);


    // Assuming circle has center of (0,r)
    X0 = r;
    Y0 = 0;

    // initial decision parameter
    p = 1 - r;


    initgraph(&gm,&gd,"");

    printf("K\tPk\t(x, y)\n");

    // for initial pint
    x = X0;
    y = Y0;
    draw(x,y,Xc, Yc);


    int i = 0;
    // for other points
    while(x >= y){
        printf("%d\t%d\t(%d ,%d)\n",i,p,x,y);
        if(p < 0){
            x = x;
            y = y + 1;
            p = p + 2*y + 1;

            draw(x,y,Xc,Yc);
        } else{
            x -= 1;
            y += 1;
            p = p + 2*y -2*x + 1;
            draw(x,y,Xc,Yc);
        }
        i++;
    }

    getch();
    return 0;

}

