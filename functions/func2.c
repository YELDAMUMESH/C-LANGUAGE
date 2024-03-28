//program for finding factorial of given number 
#include <stdio.h>
int factorial(int n);
int main()
{
	int n,f,a;
	printf("enter the n value:");
	scanf("%d", &n);
	a=factorial(n);
	printf("the factorial of %d is %d\n", n, a);
	return 0;
}
int factorial(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return(f);
}