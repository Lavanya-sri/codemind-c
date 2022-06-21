#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
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
    int n1,n2,x,y;
    scanf("%d",&n1);
    scanf("%d",&n2);
    y=n1+n2;
    for(x=y+1;;x++)
    {
       if(prime(x))
       {
           break;
       }
    }
    printf("%d",x-y);
    return 0;
    
}