
#include <stdio.h>
int power(int r,int n)
{
    int i,ans=1;
    for(i=1;i<=n;i++)
    {
        ans=ans*r;
    }
   
    return ans;
}
int len(int no)
{
    int i=0;
    while(no>0)
    {
        no=no/10;
        i++;
    }
    return i;
}

int main()
{
   int no,sum=0,i,temp,r,p;
   printf("eneter the no: ");
   scanf("%d",&no);
   p=len(no);
   temp=no;
   while(no>0)
   {
       r=no%10;
       sum=sum+power(r,p);
       no=no/10;
   }
    printf("%d \n",sum);
   if(temp == sum)
   {
       printf("Armstrong ");
   }
    
   else
   {
       printf(" not Armstrong");
   }
   
    return 0;
}
