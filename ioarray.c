#include<stdio.h>

void main()
{
    int n;
    printf("enter array size\n");
    scanf("%d",&n);

    int a[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("elements are:%d\n",a[i]);
    }
    
}