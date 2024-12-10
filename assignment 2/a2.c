/*  print grade of students as per their marks given in an array. (>=75-- A
    grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade).     */


#include <stdio.h>

int main()
{
   int i,n,marks[100];
   printf("Enter no. of entries: ");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       printf("Enter the marks of student %d: ",i+1);
       scanf("%d",&marks[i]);
   }

   printf(" STUDENT \t MARKS \t GRADES");
   for(i=0;i<n;i++){
       switch (marks[i]) {
           case 75 ... 100:
           printf("\n STUDENT %d \t %d \t A",i+1,marks[i]);
           break;


           case 60 ... 74:
           printf("\n STUDENT %d \t %d \t B",i+1,marks[i]);
           break;


           case 40 ... 59:
           printf("\n STUDENT %d \t %d \t C",i+1,marks[i]);
           break;


           case 0 ... 39:
           printf("\n STUDENT %d \t %d \t D",i+1,marks[i]);
           break;
       }


   }
}