//comparing 2 pointers

#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int *p=&a[3],*q=&a[5];
    printf("%d\n",p<=q);
    printf("%d\n",p>=q);
    q=&a[3];
    printf("%d\n",p==q);
    return 0;
}