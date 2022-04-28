#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    int sum=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            sum=sum+(str[i]-'0');
        }
    }
    printf("%d",sum);
    return 0;
}