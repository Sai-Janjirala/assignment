#include <stdio.h>

int main()
{
   int n,num=15;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       for(int j=n;j>n-i;j--){
           printf("%i\t",num);
           num=num-1;
       }
       printf("\n");
   }

    return 0;
}