#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[30];
	int i,j,k=0,flag=1,r;
	while(n>0)
	{
		r=n%10;
		arr[k] = r;
       n = n / 10;
       k++;
   }

   for (i = 0; i < k; i++)  
    {
       for (j = i + 1; j < k; j++) 
	   {
           if (arr[i] == arr[j]) 
		   {
               flag = 0;
           }
       }

   }
   if(flag==1)
   printf("Unique Number");
   else
   printf("Not Unique Number");
   return 0;
}