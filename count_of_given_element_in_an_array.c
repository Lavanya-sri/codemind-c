#include<stdio.h>
int main()
{
    int n,arr[40],i,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&z);
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==z)
        {
            flag++;
           // break;
        }
    }
    if(flag==0)
    printf("%d",flag);
    else
    printf("%d",flag);
    return 0;
}