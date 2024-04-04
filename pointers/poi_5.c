//finding mid value for an array

#include<stdio.h>
int *find_mid(int arr[],int n);
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int l=sizeof(a)/sizeof(a[0]);
    int *mid=find_mid(a,l);
    printf("mid element is:%d",*mid);
    return 0;
}


int *find_mid(int arr[],int n)
{
    return &arr[n/2];
}