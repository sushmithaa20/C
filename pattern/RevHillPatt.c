
//-------------------------------Reverse hill -------------------------------------------------------


#include <stdio.h>

int main()
{
   int n,i,j;
   n=4;
//   printf("enter the row: ");
//   scanf("%d",&n);
  
   for(i=1;i<=n;i++)
   {
       for(j=2;j<=i;j++)
       {
           printf("  ");
       }
      for(j=i;j<=n;j++)
      {
          printf("* ");
      }
     for(j=i+1;j<=n;j++)
      {
          printf("* ");
      }
       printf("\n");
   }

    return 0;
}
