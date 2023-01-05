// To implement 2d window to viewport coordinate transformation

#include<stdio.h>
#include<conio.h>
#include<graphics.h>


/*
Enter the value for window xmin, ymin,xmax,ymax100
100
600
600
Enter the value for window vxmin, vymin,vxmax,vymax800
100
900
600

*/

int main() {

    int gd = DETECT, gm;

    //taking inputs
    int x_min,y_min,x_max,y_max;
    //for viewport window
    int vx_min,vy_min,vx_max,vy_max;

    //for scale factor
    float sx,sy;

    printf("Enter the value for window xmin, ymin,xmax,ymax");
    scanf("%d%d%d%d",&x_min,&y_min,&x_max,&y_max);

    printf("Enter the value for window vxmin, vymin,vxmax,vymax");
    scanf("%d%d%d%d",&vx_min,&vy_min,&vx_max,&vy_max);


    // calculation for scale factor for sx
    sx = (vx_max - vx_min) / float(x_max - x_min);

    // calculation for scale factor for xy
    sy = (vy_max - vy_min) / float(y_max - y_min);

    printf("%0.2f",sx);
    printf("%0.2f",sy);





    initgraph(&gd,&gm,"");
    initwindow(2000,2000);

    // making window
    rectangle(x_min,y_min,x_max,y_max);

    // making viewport coordinate
    setlinestyle(1,0,1); //dotted linne
    rectangle(vx_min,vy_min,vx_max,vy_max);


    // making trinangle inside window
    int arr[] = {180,400,550,390,250,180,180,400};
    setlinestyle(0,0,1); //dotted linne
    drawpoly(4,arr);



    // finding the NT vayesakeko wala traingle

    // x' = x/5 + 780
    // y' = x/5 + 780

    // new array for viewport scaled traingle
    int viewportTraingle[8];

    for(int i = 0; i <= 8; i++){
        // in array check for even first and make x'
        if(i % 2 == 0){
            viewportTraingle[i] = arr[i]/5 + 780;
        }else{
            // for odd points i.e y'
            viewportTraingle[i] = arr[i]/5 + 80;
        }
    }

    drawpoly(4,viewportTraingle);


    getch();
    return 1;
}
