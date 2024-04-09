// program for printing address of a variable  

#include<stdio.h>
int main()
{
    int i=10;
    int *p=&i;
    printf("The address of variable i is %p\n",p);//hexa value
    printf("%d",*&p);//decimal form of the address pointed by p
    return 0;
}