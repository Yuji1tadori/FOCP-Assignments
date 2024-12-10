#include <stdio.h>
#include <math.h>

int main() {
    int option;
    int num1,num2,result;

    printf("Calculator\n");
    printf("Choose what you want:\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Log\n");
    printf("6.Square root\n");
    printf("Enter your option: ");
    scanf("%d",&option);

    switch (option) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d",&num1,&num2);
            result=num1+num2;
            printf("Result:%d\n",result);
            break;
        case 2:
            printf("Enter two numbers:");
            scanf("%d %d",&num1,&num2);
            result=num1-num2;
            printf("Result:%d\n",result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d",&num1,&num2);
            result=num1*num2;
            printf("Result:%d\n",result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d",&num1,&num2);
            if (num2!=0) {
                result=num1/num2;
                printf("Result: %d\n", result);
            } else {
                printf("not possible\n");
            }
            break;
        case 5:
            printf("Enter a number: ");
            scanf("%d",&num1);
            if (num1>0) {
                result=(int)log10(num1); 
                printf("Log :%d\n",result);
            } else {
                printf("not possible\n");
            }
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%d",&num1);
            if (num1>=0) {
                result=(int)sqrt(num1); 
                printf("Square root: %d\n",result);
            } else {
                printf("not possible\n");
            }
            break;
        default:
            printf("not possible\n");
    }

    return 0;
}