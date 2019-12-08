#include<stdio.h>

int main()
{
    int i,temp,j,n,arr[]={23,1,7,13,29,14,53,2};
    n=sizeof(arr)/sizeof(arr[0]);
    printf("array before sorting\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    for(i=1;i<=n-1;i++)
        for(j=0;j<=n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

    printf("sorted array\n");
    for(i=0;i<=n-1;i++)
        printf("%d ",arr[i]);
}
