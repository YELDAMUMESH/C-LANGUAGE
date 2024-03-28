//difference b/w bitwise and  logical operators  
#include<stdio.h>
int main()
{
char x=1,y=2,a;
a=x&y;
printf("result of x&y is %d",a);
if(x&&y)
printf("\nresult of x&&y is %d",x&&y);
return 0;
}