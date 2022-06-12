#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,sum=0,r=0,d=0,i=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        r=n%10;
        i++;
        n=n/10;
    }
    n=temp;
    while(n)
    {
        d=n%10;
        sum=sum+pow(d,i);
        n=n/10;
        i--;
    }
if(temp==sum)
{
    printf("True");
}
else
{
    printf("False");
}
return 0;
}