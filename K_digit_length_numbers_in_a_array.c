#include<stdio.h>
int main()
{
    int n,k,arr[100],c=0,t=0,i,m;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        m=arr[i];
        c=0;
        if(m==0)
        {
            c++;
        }
        else
        {
            while(m!=0)
            {
                m=m/10;
                c++;
            }
        }
        if(c==k)
        {
            t++;
        }
        
    }
    printf("%d",t);
}