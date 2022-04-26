#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[30];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int odd=0;
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            odd=odd+arr[i];
        }
    }
    printf("%d",odd);
    return 0;
}