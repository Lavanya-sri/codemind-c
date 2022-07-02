#include<stdio.h>
int main()
{
    int i,j,c=0;
    char str[100];
    scanf("%[^
]s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        for(j=0;str[j]!=NULL;j++)
        {
            if(i!=j)
            {
                if(str[i]==str[j])
                {
                    c=1;
                    break;
                }
            }
        }
    }
    if(c==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}