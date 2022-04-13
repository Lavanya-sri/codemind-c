#include<stdio.h>
int findGCD(int a,int b);
   
   
int findGCD(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        return findGCD(a-b,b);
        else
        return findGCD(a,b-a);
    }
    return a;
}
int main()
{
    int a,b,gcd;
    scanf("%d %d",&a,&b);
    gcd=findGCD(a,b);
    printf("%d",gcd);
    return 0;
}