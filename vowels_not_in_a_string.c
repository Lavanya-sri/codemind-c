#include<stdio.h>
int main()
{
    int a,e,i,o,u,c=0,j;
    char str[100];
    scanf("%[^
]s",str);
    for(j=0;str[j]!=NULL;j++)
    {
        if(str[j]=='a')
        {
            a++;
        }
        if(str[j]=='e')
        {
            e++;
        }
        if(str[j]=='i')
        i++;
        if(str[j]=='o')
        {
            o++;
        }
        if(str[j]=='u')
        {
            u++;
        }
    }
    if(a==0)
    {
        printf("a ");
        c++;
    }
    if(e==0)
    {
        printf("e ");
        c++;
    }
    if(i==0)
    {
        printf("i ");
        c++;
    }
    if(o==0)
    {
        printf("o ");
        c++;
    }
    if(u==0)
    {
        printf("u ");
        c++;
    }
    if(c==0)
    {
        printf("0 ");
    }
}