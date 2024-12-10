// maximum & minimum scores in an array

#include <stdio.h> 

int main(){ 
    int i,n,marks[100],min,max;
    printf("Enter no. of Entries: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
    }

    min=max=marks[0];

    for(i=1;i<n;i++){
        if(marks[i]>max)
        max=marks[i];

        else if (marks[i]<min)
        min=marks[i];
    }


    printf("Minium marks : %d",min);
    printf("\nMaximum marks : %d",max);

    return 0;
}