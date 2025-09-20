#include <stdio.h>

int main()
{   int n;
    scanf("%d",&n);
   for(int i=0;i<n;i++){
       for(int k=0;k<i;k++){
           printf(" ");
           
       }
       for(int j=0;j<((n-i)*2)-1;j++){
           printf("%d",j+1);
           
       }
       printf("\n");
       
   }

    return 0;
}