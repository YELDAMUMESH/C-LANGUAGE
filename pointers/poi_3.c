#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    a=20;b=6;
    p=&a,q=&b;
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",*p);
    printf("%d\n",*q);
    return 0;
    
}