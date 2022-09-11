
// * * * *
// * * * 
// * * 
// * 


#include <stdio.h>

int main()
{
   int n,i,j,k;
   printf("enter the row: ");
   scanf("%d",&n);
   k=n;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=k;j++)
       {
           printf("* ");
       }
       k--;
       printf("\n");
   }

    return 0;
}


 
                                            // ------------------- or--------------------------




#include <stdio.h>

int main()
{
   int n,i,j;
   printf("enter the row: ");
   scanf("%d",&n);
  
   for(i=1;i<=n;i++)
   {
       for(j=i;j<=n;j++)
       {
           printf("* ");
       }
     
       printf("\n");
   }

    return 0;
}
