#include <stdio.h>

int main() {
    int n;

    printf("Enter the length of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the values: \n");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int Extra[n];
    for (int i=0;i<n;i++) {
        Extra[i]=0;
    }

    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (arr[i]==arr[j]) {
                Extra[i]++; 
            }
        }
    }
    int A = 0;
    printf("digit having same value: ");
    for (int i=0;i<n;i++) {
        if(Extra[i]>0) {
            printf("%d",arr[i]);
            A=1;
        }
    }
    if(A==0) {
        printf("-1");
    }

    printf("\n");

    return 0;
}