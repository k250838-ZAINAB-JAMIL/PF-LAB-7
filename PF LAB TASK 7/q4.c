#include <stdio.h> 
int main() 
{ 
int n, count=0, maxsale=0, freq; 
printf("Enter the total number of sales: \n"); 
scanf("%d", &n ); 
int prod[n]; 
printf("Enter the product id: \n"); 
for (int i = 0; i < n; i++) 
{ 
   scanf("%d", &prod[i]); 
} 
freq = prod[0]; 
for (int i = 0; i < n; i++) 
{ 
   count = 0; 
   for (int j = 0; j < n; j++) 
   { 
       if (prod[i]==prod[j]) 
       { 
           count++; 
       } 
       maxsale = count; 
   } 
   if (freq<maxsale) 
   { 
       freq=maxsale; 
   } 
} 
printf("The most frequent product ID is %d\n", freq); 
printf("It was sold %d times.\n", maxsale); 
 
} 