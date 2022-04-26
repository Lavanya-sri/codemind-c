#include<stdio.h>
int main()
{
    int n,arr[40],i,key;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    int flag=0;
    for(i=0;i<n;i++)
    {
    if(arr[i]==key)
    {
        flag=1;
    }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    printf("False");
    return 0;
}