#include<stdio.h>
int main()
{
    int n,i,avg,s,x;
    scanf("%d",&n);
    int arr[50];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int add=0;
    for(i=0;i<n;i++)
    {
        add=add+arr[i];
        //avg=add/n;
    }
    avg=float(add)/float(n);
    s=0;
    for(i=0;i<n;i++)
    {
        //s=arr[0];
        if(avg>=arr[i])
        {
            s++;
        }
    }
    printf("%d",s);
    return 0;
}
