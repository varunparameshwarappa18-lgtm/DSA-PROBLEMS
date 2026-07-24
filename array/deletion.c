#include<stdio.h>
void main()
{
    int a[10],i,size,pos;
    printf("enter the size of a array :");
    scanf("%d",&size);
    printf("enter the elements:");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the postion u want to delete");
    scanf("%d",&pos);
    if(pos<=0 || pos>size)
    {
        printf("invalid");
    }
    else
    for(i=pos-1;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    printf("elements of a array");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
        
    }
}