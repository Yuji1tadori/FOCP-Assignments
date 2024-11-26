#include <stdio.h>

void swap1(int num1,int num2)
{
    int A;
    A=num1;
    num1=num2;
    num2=A;
    printf("The swapped numbers using third variable are:%d & %d.\n",num1,num2);
}

void swap2(int num1, int num2)
{
    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    printf("The swapped numbers without using third variable are:%d & %d.\n",num1,num2);
}

void swap3(int num1,int num2)
{
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("The swapped numbers using bitwise XOR are: %d & %d.\n",num1,num2);
}

void swap4(int *num1, int *num2)
{
    int A;
    A=*num1;
    *num1=*num2;
    *num2=A;
    printf("The swapped numbers using pointers are:%d & %d.\n",*num1,*num2);
}

int main()
{
    int num1,num2,method;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("The numbers before swapping are %d and %d.\n",num1,num2);
    printf("In what way do you want to swap\n1. By using third Variable\n2. Without using third Variable\n3. Using bitwise XOR\n4. Using pointers\nEnter the corresponding number:");
    scanf(" %d",&method);
   switch (method)
   {
       case (1):
       swap1(num1,num2);
       break;

       case(2):
       swap2(num1,num2);
       break;

       case(3):
       swap3(num1,num2);
       break;

       case(4):
       swap4(&num1,&num2);
       break;

       default:
       printf("Invalid.");
       break;
   }

}