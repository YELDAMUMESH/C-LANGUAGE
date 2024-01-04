#include <stdio.h>
int main()
{
	int n, b, i, f=1;
	printf("enter the n value:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		f = f * i;
	}
	printf("the factorial of %d is %d\n", n, f);
	return 0;
}
