//sum of all marks

#include <stdio.h>

int main()
{
   int i,n,marks[100],sum;
   printf("Enter no. of entries ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("Enter the marks of student%d: ",i+1);
       scanf("%d",&marks[i]);
   }


   for(i=0;i<n;i++)
   {
       sum+=marks[i];
   }
   printf("SUM OF ALL SCORES = %d",sum);
   return 0;


}