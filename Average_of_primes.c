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
    float c=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(prime(a[i]))
        {
            sum=sum+a[i];
            c++;
        }
    }
    printf("%.2f",sum/c);
    return 0;
}