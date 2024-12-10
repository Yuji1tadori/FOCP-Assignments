//increase every student's marks by 5 & then print the updated array.

#include <stdio.h>

int main()
{
   int i,n,marks[100];
   printf("Enter the no. of entries : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("Enter the marks of student %d: ",i+1);
       scanf("%d",&marks[i]);
   }


   printf("Updating array by increasing 5 marks");
   for(i=0;i<n;i++)
   {
       marks[i]+=5;
   }


   printf("\n Final array of marks \n");
   for(i=0;i<n;i++)
   {
       printf("%d  ",marks[i]);
   }
}