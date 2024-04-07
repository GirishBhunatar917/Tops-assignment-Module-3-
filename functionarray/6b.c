#include <stdio.h>
void main(){
    int i,j,n;
    printf("Enter the number of row and columns:");
    scanf("%d",&n);
    int arr1[n][n],arr2[n][n],mul[n][n];
    printf("Enter values for matrix 1 \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the number at %d%d:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    printf("Enter values for matrix 2\n ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the number at %d%d:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            mul[i][j] = 0;
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }


    printf("The multiplication of two matrices are:\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }

}