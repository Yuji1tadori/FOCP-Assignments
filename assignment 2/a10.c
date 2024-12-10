#include <stdio.h>

int main() {
    int A, count=0;

    printf("Enter the length of array: ");
    scanf("%d",&A);

    int arr[A];
    printf("Enter the values: ");
    for (int i=0;i<A;i++) {
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<A;i++) {
        int num=arr[i];
        int Prime=1;

        if (num<=1) {
            Prime=0;
        } else {
            for (int j=2;j*j<=num;j++) {
                if (num%j==0) {
                    Prime=0;
                    break;
                }
            }
        }

        if (Prime) {
            count++;
        }
    }

    printf("The number of prime numbers in the array is: %d\n", count);

    return 0;
}