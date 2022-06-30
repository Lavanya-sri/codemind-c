#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0,y=0,x;
    scanf("%d",&n);
    float avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        c=1;
        if(arr[i]==0)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                arr[j]=0;
            }
        }
        if(c==x)
        {
            y=1;
            printf("%d ",arr[i]);
        }
    }
    if(y==0)
    printf("-1");

}