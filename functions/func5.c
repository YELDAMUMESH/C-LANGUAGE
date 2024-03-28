// program for call by reference
#include<stdio.h>
void fun();
int main()
{
    int x,y;
    x=10,y=20;
    fun(&x,&y);
    printf("x=%d,y=%d",x,y);
    return 0;

}

void fun(int *ptr1,int *ptr2)
{
    *ptr1=20;
    *ptr2=10;
}
