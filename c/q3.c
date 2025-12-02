#include<stdio.h>
int main(){
   int arr[7] = {20,32,6,7,22,47,21};
   for(int i = 0; i<=7; i++){
    if(arr[0]<arr[i]){
        arr[0]=arr[i];
        printf("The largest number is %d\n",arr[0]);
    }
    else{
        printf("The largest number is %d\n",arr[0]);
    }
   }
   for(int j = 0; j<=7; j++){
    if(arr[0]>arr[j]){
        arr[0]=arr[j];
        printf("The smallest number is %d\n",arr[0]);
    }
    else{
        printf("The smallest number is %d\n",arr[0]);
    }
   }
   return 0;
}