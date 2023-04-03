#include<stdio.h>
int main()
{    // WAP to find the area of the circle. Take radius of circle from user as input.
    int r,area;
    printf("enter the radius of circle\n");
    scanf("%d",&r);
    area = 3.14*r*r;
    printf("area of circle is %d\n",area);
return 0;
}