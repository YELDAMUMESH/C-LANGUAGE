// finding max and min values from the array using pointers
#include<stdio.h>
void min_max(int arr[],int len,int *min,int *max);
int main()
{
    int a[]={190,2000,3,40,5,65,7,8,98,10};
    int min,max;
    int lenght=sizeof(a)/sizeof(a[0]);
    printf("lenght of array is: %d\n",lenght);
    min_max(a,lenght,&min,&max);
    printf("minimum value is : %d\nmaximum value is : %d",min,max);
}


void min_max(int arr[],int len,int *min,int *max)
{
    *min=*max=arr[0];
    int i;
    for(i=1;i<len;i++)
    {
        if(arr[i]>*max)
        *max=arr[i];
        if(arr[i]<*min)
        *min=arr[i];

    }
}