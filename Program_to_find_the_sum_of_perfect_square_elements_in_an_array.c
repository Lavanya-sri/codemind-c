#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,x,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        x=sqrt(a[i]);
        if(x*x==a[i])
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}