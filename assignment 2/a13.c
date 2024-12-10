#include <stdio.h>

int main() {
    int n;

    printf("Enter the length of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter values:\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Original Array: ");
    for (int i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    printf("\n");

    if (n>1) {
        int last=arr[n-1];

        for (int i=n-1;i>0;i--) {
            arr[i] =arr[i-1];
        }

        arr[0]=last;
    }

    printf("Array after shifting: ");
    for (int i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    printf("\n");

    return 0;
}