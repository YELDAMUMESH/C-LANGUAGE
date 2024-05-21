#include<stdio.h>
int i;
void display(int arr[],int n)
{
    
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);

    }
    printf("\n");
}


void delete(int arr[],int size,int index)
{
    for(i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];

    }


}


int main()
{
int arr[]={0,1,2,3,4};
int size=sizeof(arr)/sizeof(int);
int index=0;
display(arr,size);
delete( arr,size,index);
size=size-1;
display(arr,size);
return 0;
}