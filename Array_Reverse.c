
// Program Written By Nirbhay Kaushik
#include<stdio.h>
int main()
{
    int arr[1000],i,n;        // First Array Declaration and Local Variables
    int arr1[1000],j=0,size=0;    // Second Array Declaration and Local Variables
    scanf("%d",&n);         // Input for 'n' variable
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);      // Loop for array input
    }
    size=n-1;
    for(i=size;i>=0;i--,size--)
    {
        arr1[j]=arr[size];              // Logical Loop For Reversing Array
        j++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);      // Print Reverse Array
    }
    return 0;
}
