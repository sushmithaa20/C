
#include <stdio.h>

int main()
{
    int n,i,flag=1;
    printf("enter the no : ");
    scanf("%d",&n);
    if(n ==0 || n== 1)
    {
        printf("not a prime");
    }
    for(i=2;i<=n/2;i++)
    {
        if((n%i) == 0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("not a prime");
    }
    else
    {
        printf(" prime");
    }
    return 0;
}
