#include<stdio.h>

int main()

{
    int no,i=1;
    while(i<=5)
    {
        printf("\nEnter number:");
        scanf("%d",&no);
        if(no%2==0)
        {
            printf("\neven");
        }
        else
        {
            printf("\nodd");
        }
        i++;
    }
    return 0;
    


}