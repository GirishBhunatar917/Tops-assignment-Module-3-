#include<stdio.h>
void main(){
    int i,sum=0;
    int arr[5];
    for(i=0;i<5;i++){
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

    for(i=0;i<5;i++){
        sum=sum+arr[i];
    }

    printf("The sum of is:%d",sum);


    

}