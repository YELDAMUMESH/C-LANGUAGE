//sum of array elements

#include<stdio.h>
int main()
{
    int a[]={11,22,36,5,2};
    int sum=0,*p;
    for(p=&a[0];p<=&a[4];p++)
    sum+=*p;
    printf("Sum of array elements is %d\n",sum);
    return 0;
}