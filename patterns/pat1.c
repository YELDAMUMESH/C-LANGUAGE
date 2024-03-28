/*WAP to print the following pattern 
    *****
    *****
    *****
    *****
    *****
*/

#include<stdio.h>
int main()
{
	int i,j;
	for ( i=1;i<=5;i++)	                   /* enters loop for i=1,2,3,4,5 */
	{
		for(j=1;j<=5;j++)                  /* enters loop for j=1,2,3,4,5 */
		{
			printf("*");               /* if j<=5 prints the statement */
		}
		printf("\n");                      /* prints new line */
	}
	return 0;
}


