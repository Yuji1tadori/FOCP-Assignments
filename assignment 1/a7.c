//Binary to Decimal conversion & Decimal to Binary for a given number as per user’s choice.

#include <stdio.h>

int conversionfirst(int binary) {
    int decimal=0,base=1,remainder;
    
    while (binary>0) 
    {
        remainder=binary%10;
        decimal+=remainder*base;
        binary/=10;
        base*=2;
    }
    return decimal;
}

void conversionsecond(int decimal) 
    {
    if (decimal==0) 
    {
        printf("Binary:0\n");
        return;
    }
    
    int binary[32],i=0;
    while (decimal>0)
     {
        binary[i++]=decimal % 2;
        decimal/=2;
    }
    
    printf("Binary: ");
    for (int j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    printf("\n");
}

int main() 
{
    int choose,num;
    
    printf("Select conversion type:\n");
    printf("1.Binary to Decimal\n");
    printf("2.Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d",&choose);
    
    if (choose==1) {
        printf("Enter a binary number: ");
        scanf("%d",&num);
        printf("Decimal: %d\n",conversionfirst(num));
    } else if (choose==2) {
        printf("Enter a decimal number: ");
        scanf("%d",&num);
        conversionsecond(num);
    }

    return 0;
}