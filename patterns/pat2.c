/* WAP to print following pattern 
   
    *****
    ****
	***
	**   
	*         
 */


#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)              /* enetrs loop for i=1,2,3,4,5 */
	{
		for(j=i;j<=5;j++)          /* enters loop for j=1,2,3,4,5 */
		{
			printf("*");           /* prints if j<=5 */
		}
		printf("\n");
	}
	return 0;
}





