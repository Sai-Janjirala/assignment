#include <stdio.h>

int main()
{
   int n,num=2;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           printf("%d\t",num);
           num=num+2;
       }
       printf("\n");
   }

    return 0;
}