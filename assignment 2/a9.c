#include <stdio.h>

int main() {
    int A;

    printf("Enter the amount of numbers in array: ");
    scanf("%d",&A);

    int arr[A];
    printf("Enter the values: ");
    for (int i=0;i<A;i++) {
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<A;i++) {
        if ((i==0||arr[i]>=arr[i-1])&& (i==A-1||arr[i]>=arr[i+1])) {
            printf("A peak element is:%d\n",arr[i]);
            break;
        }
    }

    return 0;
}