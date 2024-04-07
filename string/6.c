#include<stdio.h>

int main()

{
    char str[100];
    int i,alp=0,dig=0,splch=0;

    printf("Enter the string :");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a' && str[i]<='z' ) || ( str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }else if(str[i]>='0' && str[i]<='9')
        {
            dig++;
        }else
        {
            splch++;
        }
    }
    printf("alphabets in string are :%d\n",alp);
    printf("digits in string are :%d\n",dig);
    printf("special chatecters in string are :%d\n",splch);

}