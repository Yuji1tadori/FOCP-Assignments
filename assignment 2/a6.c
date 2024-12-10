//average of all

#include <stdio.h>

int main()
{
   int i,n,marks[100],sum;
   float avg;
   printf("Enter no. of entries: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("Enter the marks of student%d: ",i+1);
       scanf("%d",&marks[i]);
   }


   for(i=0;i<n;i++)
   {
       sum+=marks[i];
       avg=sum/n;
   }
   printf("SUM OF ALL SCORES IN THE ARRAY = %d",sum);
   printf("\nAVERAGE OF ALL SCORES IN THE ARRAY = %f",avg);
   return 0;


}