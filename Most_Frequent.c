#include<stdio.h>
int main()
{
    int n,c=0,a=0,arr[100],i,j,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
            if(c>a)
            {
                a=c;
                b=arr[i];
            }
            else if(c==a&&arr[i]<b)
            {
                b=arr[i];
            }
    }
    printf("%d",b);
    
}