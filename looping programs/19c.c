#include<stdio.h>

int main()

{
    int i,j,num,sp;

    printf("Enter number :");
    scanf("%d",&num);
     
     
    for(i=1;i<=num;i++)

    {
        for(sp=num;sp>=i;sp--)
        {
            printf(" ");
        } 
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        
        }
        

       
        printf("\n");
    
    }
    return 0;

}