#include <stdio.h>
int main() {
    int i = 0;
   int arr[4];
   for (i = 0; i<4 ; i++){
   printf("Enter the numbers:\n");
   scanf("%d", &arr[i]);
}


   printf("This is the even numbers\n"); 
   for(i = 0; i < 4; i++) {
    if(arr[i] % 2 == 0) {
        printf("%d, ", arr[i]);
    }
   }
  i = 0;
  printf("This is the odd numbers\n"); 
     for(i; i < 4; i++) {
    if(arr[i] % 2 != 0) {
        printf("%d, ", arr[i]);
    }
   } return 0;
}