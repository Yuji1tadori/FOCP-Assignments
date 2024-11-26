//self reference: if sum of divisors is equal to number it means number is Perfect Number

#include <stdio.h>

int perfectno(int num) {
    int sum=0;

    for (int i=1;i<=num/2;i++)
    {
        if (num%i==0) 
        { 
            sum+=i;
        }
    }
    return sum==num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (perfectno(num)) printf("%d is a Perfect Number.\n", num);
    else printf("%d is not a Perfect Number.\n", num);
    return 0;
}