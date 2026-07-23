#include<stdio.h>
void main()
{
    int a[10],i,size,number;
    printf("enter the size of a array :");
    scanf("%d",&size);
    printf(" enter the elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("element of the array:");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}