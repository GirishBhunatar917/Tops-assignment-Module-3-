#include <stdio.h>
void main(){
    int i,j,n;
    printf("Enter the number of row and columns:");
    scanf("%d",&n);
    int arr1[n][n],arr2[n][n],sum[n][n];
    printf("Enter values for matrix 1\n ");
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

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    printf("The sum of two matrices are:\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

}