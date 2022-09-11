#include<string.h>
#include <stdio.h>

int main()
{
    int j,i,n=0,flag=0;
   char a[20] ; 
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       n++;
   }
   printf("n : %d\n",n);
//   n = strlen(a);
   for(i=0,j=n-1;i<n,j>=0;i++,j--)
   {
       if(a[i]==a[j])
       {
           flag=1;
       }
       else
       {
           flag=0;
       }
   }
  if(flag == 1)
  {
       printf("pallindrome");
  }
  else
  {
       printf("not pallindrome");
  }
    return 0;
}
