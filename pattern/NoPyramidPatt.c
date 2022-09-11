//         1 
//       2 3 2 
//     3 4 5 4 3 
//   4 5 6 7 6 5 4 
// 5 6 7 8 9 8 7 6 5 



#include <stdio.h>

int main()
{
   int n,i,j,k,m;
    // n=4;
  printf("enter the row: ");
  scanf("%d",&n);
  
   for(i=1;i<=n;i++)
   {
       for(j=i+1;j<=n;j++)
       {
           printf("  ");
       }
       k=i;
      for(j=1;j<=i;j++)
      {
          printf("%d ",k);
          k++;
      }
      k--;
     for(j=2;j<=i;j++)
      {
          
          printf("%d ",--k);
         
      }
       printf("\n");
   }

    return 0;
}
