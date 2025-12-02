#include<stdio.h>
int factorial(int n){
    if(n==0 || n==1) return 1;
    else{
        return n*factorial(n-1);
    }
    
}
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    int p = factorial(n);
    printf("the factorial of the number is %d",p);

   return 0;
}