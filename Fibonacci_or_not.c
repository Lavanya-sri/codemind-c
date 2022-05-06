#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=0,i=0;
    scanf("%d",&n);
    while(1)
    {
        c=a+b;
        a=b;
        b=c;
        i+=1;
    
        if(c==n)
        {
            printf("True");
            break;
        }
        else
        {
            if(c>n)
            {
            printf("False");
            break;
            }
        }
    }   
    
    return 0;
}