#include<stdio.h>
int main()
{
    int n,temp,f,result=0,i,d=0;
    scanf("%d",&n);
    temp=n;
    while(temp)
    {
        f=1;
        d=temp%10;
        for(i=1;i<=d;i++)
        {
            f=f*i;
        }
        result+=f;
        temp=temp/10;
    }
    if(result==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
          printf("The number %d is not a strong number",n);
    }
    return 0;
}