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
		for(j=i;j<=5;j++)      /* enters loop for j=1,2,3,4,5 */
		{
			printf("*");   /* prints if j<=5 */
		}
		printf("\n");
	}
	return 0;
}





/* EXPLAINATION :
    
                1. as i=1 and i< 5 enters the loop 
		2. as j=i=1 nad j<=5 curser moves to nxt statement same procedure is repated until j=5(j++ operation)
		3. prints ("*") output: *****
                4. now curser moves to the top now i value is incremented by 1 then i=2 and i<=5
                5. curser moves to j loop here as j=i=2 <=5 and moves to nxt statement same procedure is repeated until j=5(j++ operation)
		6.prints ("*") output: ****
                .
		.
		.
		.
		.
*/
