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

    for(int i=0;i<n;i++)
    {
        if(num==a[i])
        {
            printf("%d element found in %d postition\n ",num,i);
            exit(0);
        }
    }
    printf("element not found");
}