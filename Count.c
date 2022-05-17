#include<stdio.h>
int main()
{
    int n,arr[100],i=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        odd++;
    }
    printf("%d %d",even,odd);
    return 0;
}