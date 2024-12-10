#include <stdio.h>

int main() {
    int n,A,B;

    printf("Enter the length of array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++) {
        printf("Enter value %d:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("array before change:\t");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    printf("Where do you want your value?\n1.Front\n2.In between\n3.End\n: ");
    scanf("%d",&A);

    if(A==1) {
        for (int i=0;i<n-1;i++) {
            arr[i]=arr[i+1];
        }
        n--;

        printf("The array after change\t");
        for (int i=0;i<n;i++) {
            printf("%d\t",arr[i]);
        }
        printf("\n");

    } else if (A == 2) {
        printf("Enter the position to change: ", n);
        scanf("%d",&B);

        if (B<1||B>n) {
            printf("Not Applicable\n");
        } else {
            for(int i=B-1;i<n-1;i++) {
                arr[i]=arr[i+1];
            }
            n--;

            printf("The array after change %d:\t",B);
            for (int i=0;i<n;i++) {
                printf("%d\t",arr[i]);
            }
            printf("\n");
        }

    } else if(A==3) {
        n--;

        printf("The array after change:\t");
        for (int i=0;i<n;i++) {
            printf("%d\t",arr[i]);
        }
        printf("\n");

    } else {
        printf("not applicable\n");
    }

    return 0;
}
