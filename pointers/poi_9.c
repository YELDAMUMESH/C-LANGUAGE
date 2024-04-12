//increment and decrement 

#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60};
    int i;
    int *p=&a[3];
    printf("%d\t",*(p--));     //post decrement
    printf("%d\t",*p);         //current stage
    printf("%d\t",*(--p));     //pre decrement
    printf("%d\t",*(++p));     //pre increment
    printf("%d\t",*(p++));     //post increment
    printf("%d\n",*p);         //current stage
    

    //changing the array values using pointers

    *p=80;
    printf("%d\n",*p);
    for(i=0;i<=5;i++)
    {
        printf("%d\t",a[i]);

    }
    return 0;

}