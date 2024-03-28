//call by value example

#include<stdio.h>
void fun();
int main()
{
int x,y;
x=10,y=20;
fun(x,y);
printf("x=%d,y=%d",x,y);
return 0;

}

void fun(int x,int y)
{
    x=20;
    y=10;
}