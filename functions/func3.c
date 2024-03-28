//program of finding area of rectangle
#include<stdio.h>
int area_rec(int l,int b);
int main()
{
int length,breadth;
printf("enter the values of length and breadth\n");
scanf("%d %d",&length,&breadth);
area_rec(length,breadth);
return 0;
}

int area_rec(int l,int b)
{
    int area;
    area=l*b;
    printf("The area of the rectangle is %d",area);
}