#include<stdio.h>

int main()
{
    int n,b,i,j,temp;
    int a[100];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(i=0;i<n-i-1;i++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("a [ %d ]",a[i]);
    }
   

    return 0;
}