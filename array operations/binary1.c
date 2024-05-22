#include<stdio.h>

int search(int arr[],int size,int element){
   
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
        
    }
    return -1;

}



int main()
{
    int arr[]={1,2,3,11,22,33,44,55,66,77,88,99};
    int size=sizeof(arr)/sizeof(int);
    int element=33;
    int index=search(arr,size,element);
    printf("the element %d was found at index %d \n",element,index);
    return 0;
}