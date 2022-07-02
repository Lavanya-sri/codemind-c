#include<stdio.h>
int prime(int n)
{
    int i,a=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
        if(a==2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
int main()
{
    int n,a[100],i;
    int c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(prime(a[i]))
        {
            if(a[i]<=k)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}