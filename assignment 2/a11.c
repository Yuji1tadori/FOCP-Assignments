#include <stdio.h>

int main() {
    int n,A,B,C,D,E;

    printf("Enter the length of array: ");
    scanf("%d",&n);

    int arr[n+1]; 
    for(int i=0;i<n;i++) {
        printf("Enter value%d:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Where do you want to change?\n1.Front\n2.between\n3.End\n ");
    scanf("%d",&A);

    printf("array before change:\t");
    for(int i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    if (A==1) {
        printf("Enter the value ");
        scanf("%d",&B);

        for (int i=n;i>0;i--) {
            arr[i]=arr[i-1];
        }
        arr[0]=B;
        n++;      
        printf("The array after change:\t");
        for (int i=0;i<n;i++) {
            printf("%d\t",arr[i]);
        }
        printf("\n");

    } else if (A==2) {
        printf("Enter the values: ");
        scanf("%d",&C);
        printf("Enter the place where you want to insert the value: ",n);
        scanf("%d",&D);

        if(D<1||D>n+1) {
            printf("Not applicable\n");
        } else {
            for (int i=n;i>=D-1;i--) {
                arr[i+1]=arr[i];
            }
            arr[D-1]=C;
            n++; 
            printf("The array after change %d:\t",D);
            for (int i=0;i<n;i++) {
                printf("%d\t",arr[i]);
            }
            printf("\n");
        }

    } else if(A==3) {
        printf("Enter the element to insert at the end: ");
        scanf("%d",&E);
        arr[n]=E;
        n++;    
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