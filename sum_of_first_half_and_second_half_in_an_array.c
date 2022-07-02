#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,i,c,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    c=n/2;
    for(i=0;i<c;i++)
    {
        a=a+arr[i];
       
    }
    for(i=c;i<n;i++)
    {
        b=b+arr[i];
       
    }
  printf("%d
%d",a,b);
    return 0;
}