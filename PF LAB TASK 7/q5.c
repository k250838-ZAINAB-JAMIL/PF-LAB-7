#include <stdio.h> 
int main() 
{ 
int pric[8] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000}; 
int total=0, budget, i,j; 
printf("Enter your budget: "); 
scanf("%d", &budget); 
for (int i = 0; i < 8; i++) 
{ 
   total=0; 
 
 
   for (int j = i+1; j < 8; j++) 
   { 
       total=pric[i]+pric[j]; 
       if (total==budget) 
   { 
       printf("Items found: %d + %d = %d\n", pric[i], pric[j], budget); 
   } 
   } 
} 
 
}