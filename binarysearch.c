#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,num;
    printf("enter the array size\n");
    scanf("%d",&n);

    int a[n];

    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the element to be searched\n");
    scanf("%d",&num);
    
    int low=0,mid,high=n;
    mid=(low+high)/2;

    while(
        
    )
    if(num==a[mid])
    {
        printf("%d element found in %d position ",a[mid],mid);
    }
    else if(num>mid)
    {
        high = mid-1;
    }
    else
    {
        low = mid+1;
    }
}