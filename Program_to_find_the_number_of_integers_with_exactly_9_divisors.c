#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=0,m=0,i,j;
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            printf("%d ",i);
            m++;
        }
    }
    printf("
Total=%d",m);
    return 0;
}
