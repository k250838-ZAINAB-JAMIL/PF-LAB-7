#include <stdio.h> 
 
int main() { 
   int sectionA[6] = {1, 2, 3, 4, 5, 6}; 
   int sectionB[6] = {7, 8, 9, 10, 11, 12}; 
 
   int bothsections[12]; 
   int combine = 0; 
   for (int i = 0; i < 6; i++) { 
       bothsections[combine] = sectionA[i]; 
       combine++; 
   } 
   for (int i = 0; i < 6; i++) { 
       bothsections[combine] = sectionB[i]; 
       combine++; 
   } 
   printf("Combined roll numbers: "); 
   for (int i = 0; i < combine; i++) { 
       printf("%d ", bothsections[i]); 
   } 
   return 0; 
} 