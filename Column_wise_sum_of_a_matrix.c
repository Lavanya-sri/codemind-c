#include<stdio.h>
int main()
{
    int n,m,i,j,arr[100][100],sum=0,max;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    max=0;
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+arr[j][i];
        }
      printf("%d ",sum);
    }

    return 0;
}