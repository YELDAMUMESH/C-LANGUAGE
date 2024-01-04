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

/* EXPLAINATION :
 
            initial value of i=1,i<=5 so it enters the loop here in 2nd loop initial value of j=1,j<=5 
            so it enters to nxt statement and prints the star(*) now cursor moves to next statement and prints 
	    new line now cursor moves to the starting for loops here increment of i takes place  now i=2..this
	    complete loops stops when i=5 and loop ends here.   */
