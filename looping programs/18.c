#include<stdio.h>

int main()

{
    int no,i=1;
      printf("\nEnter number:");
      scanf("%d",&no);
    while(i<=10)
    {
        printf("\n%d*%d :%d",no,i,no*i);
        i++;
    }
    
    return 0;
    


}