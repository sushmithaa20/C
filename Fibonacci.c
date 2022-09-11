
#include <stdio.h>

int main()
{
    int no,n1=0,n2=1,n3,i;
    printf("enter the no of elements : ");
    scanf("%d",&no);
    if(no==1)
    {
        printf("0 ");
    }
    if(no >= 2)
    {
        printf("\n %d %d",n1,n2);
    }
    for(i=2;i<no;i++)
    {
        n3=n1+n2;
        printf(" %d",n3);
        n1=n2;
        n2=n3;
    }

    return 0;
}
