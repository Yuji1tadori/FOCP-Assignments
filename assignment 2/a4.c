// find out how many scored 99

#include <stdio.h>

int main()
{
   int i,flag,n,marks[100];
   printf("Enter no. of entries: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("Enter the marks of student %d: ",i+1);
       scanf("%d",&marks[i]);
   }

   printf("Finding no. of studentd who've 99 ...");
   for(i=0;i<n;i++)
   {
       if (marks[i]==99) 
       {
           flag+=1;
           printf("\nStudent %d scored 99 ",i+1);
       }
   }

   printf("\nNumber of students who have scored 99 is %d",flag);
   if (flag==0)
   printf("\nNone of the student scored 99");

}