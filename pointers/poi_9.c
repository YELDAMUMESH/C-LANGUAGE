#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60};
    int *p=&a[3];
    printf("%d\n",*(p--));     //post decreament
    printf("%d\n",*p);         //current stage
    printf("%d\n",*(--p));     //pre decreament
    printf("%d\n",*(++p));     //pre increament
    printf("%d\n",*(p++));     //post increment
    printf("%d\n",*p);         //current stage
    return 0;

}