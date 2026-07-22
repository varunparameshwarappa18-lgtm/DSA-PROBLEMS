#include<stdio.h>
void main()
{
    int a[10],i,size,num,pos;
    printf("enter the size of a array :");
    scanf("%d",&size);
    printf(" enter the elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the potion of the array:");
    scanf("%d",&pos);
    for(i=size-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    printf("element of the array:");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}