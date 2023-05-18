#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,key,low,mid,high,a[20];
    printf("\nEnter the numer of elements\n");
    scanf("%d",&n);
    printf("\nEnter N elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the key to search\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            printf("\nSuccessfull search\n");
            printf("\nitem=%d found at %d position",key,mid+1);
            exit(0);
        }
        if(key<a[mid])
            high=mid-1;
        else
        low=mid+1;
    }
    printf("\nKey item not found-Unsuccessfull search\n");
}
