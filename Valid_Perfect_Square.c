#include<stdio.h>
#include<math.h>
int main()
{
    int t,x,n;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        x=sqrt(n);
        if(x*x==n)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        printf("
");
        t--;
    }
    return 0;
}