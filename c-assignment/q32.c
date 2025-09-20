#include <stdio.h>

int main()
{   int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        if(i==0){
            printf("*");
             printf("\n");
        }
       
    
        else{
        printf("*");
        for(int j=0;j<i-1;j++){
            printf(" ");
        }
        printf("*");
        
         printf("\n");
        }
   
}
    for(int k=0;k<n;k++){
        printf("*");
    }
 
    return 0;
}