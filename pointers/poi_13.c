//printing a series in reverse order

#include<stdio.h>
#define N 5
int main()
{
    int a[N],*p;
    printf("enter %d elements in the array: ",N);
    for(p=a;p<=a+N-1;p++)
    scanf("%d",p);
    printf("elements in reverse order:\n");
    for(p=a+N-1;p>=a;p--)
    printf("%d\t",*p);
    return 0;
}