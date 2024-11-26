//Self Reference: A number that is equal to the sum of its digits to the power of the number of digits

#include <stdio.h>

int Armstrong(int num)
{
    int originalno, remainder, A = 0, result = 0, i;

    if (num<0)
    {
        return 0; 
    }

    originalno=num;

    while (originalno != 0)
    {
        originalno /= 10;
        ++A;
    }
    
    originalno=num;

    while (originalno!=0) 
    {
        remainder = originalno % 10;
        int power=1;
        for (i=0;i<A;i++) 
        {
            power*=remainder;  
        }
        result +=power;
        originalno/= 10;
    }

    if (result==num) {
        return 1; 
    } else {
        return 0; 
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (Armstrong(num)) {
        printf("%d is an Armstrong number.\n",num);
    } else {
        printf("%d is not an Armstrong number.\n",num);
    }
    return 0;
}