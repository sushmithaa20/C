#include<string.h>
#include <stdio.h>

int main()
{
    int i,n,r,sum=0,temp;
    printf("enter the no: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp == sum)
    {
        printf("pallindrome \n");
    }
    else
    {
        printf("not pallindrome \n");
    }
    
    return 0;
}
