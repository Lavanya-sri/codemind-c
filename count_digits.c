#include<stdio.h>
int main()
{
    int n,arr[100],c=0,i,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        m=arr[i];
        c=0;
        if(m==0)
        c++;
        else
        {
            while(m!=0)
            {
                m=m/10;
                c++;
            }
        }
        printf("%d ",c);
    }
}