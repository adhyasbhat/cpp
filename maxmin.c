#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);

    int a[n];

    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int maxnum = INT_MIN;
    int minnum = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(maxnum<a[i])
        {
            maxnum=a[i];
        }
        if(minnum>a[i])
        {
            minnum=a[i];
        }

       
    }
     printf("the max num is %d \n",maxnum);
        printf("the min num is %d \n",minnum);
}