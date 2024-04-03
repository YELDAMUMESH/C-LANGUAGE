#include<stdio.h>
int main()
{
    int x=5,y=10;
    int *p,*q;
    p=&x;
    q=p;
    *q=0;
    printf("%d %d",*p,*q);
    return 0;

}