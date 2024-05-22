#include<stdio.h>
int i;
int linear_search(int arr[],int size,int element)
{
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        return i;
    }
    return -1;

}


int main()
{
    int arr[]={4,5,3,2,8,9,7};
    int element=8;
    int size=sizeof(arr)/sizeof(i);
    int index=linear_search(arr,size,element);
    if(index==-1)
    {
        printf("element not found");
    }
    else
    {
        printf("element found at index %d\n",index);
        
    }

return 0;
}