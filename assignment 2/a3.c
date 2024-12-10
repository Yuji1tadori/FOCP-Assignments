// who scored first “99” in an array marks.

#include <stdio.h>

int main(){
   int i,flag,n,marks[100];
   printf("Enter no. of entries: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("Enter the marks of student %d: ",i+1);
       scanf("%d",&marks[i]);
   }


   printf("Finding who scored 99 first ...");
   for(i=0;i<n;i++){
       if (marks[i]==99)
       {
           flag+=1;
           printf("\n Student %d scored 99 first ",i+1);
           break;
       }
   }
   if (flag==0)
   printf("\n none of the student scored 99");
}