//program for XOR operation

#include<stdio.h>
int main()
{
 int a=3,b=4;
 a=a^b;
 b=a^b;
 a=a^b;
 printf("after XOR operation a=%d,b=%d",a,b);
 return 0;   
}

//note : when can perform swaping using XOR operator