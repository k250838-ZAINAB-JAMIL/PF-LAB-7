#include <stdio.h> 
 
int main() { 
   int rec[15] = {1, 3, 5, 3, 7, 3, 9, 2, 3, 4, 6, 7, 9, 1, 3}; 
   int defective; 
   printf("Enter the defective item: "); 
   scanf("%d", &defective); 
   int new[15]; 
   int arr = 0; 
   for (int i = 0; i < 15; i++) { 
       if (rec[i] != defective) { 
           new[arr] = rec[i]; 
           arr++; 
       } 
   } 
   printf("\nNew list (after removing %d): ", defective); 
   for (int i = 0; i < arr; i++) { 
       printf("%d ", new[i]); 
   } 
   return 0; 
} 