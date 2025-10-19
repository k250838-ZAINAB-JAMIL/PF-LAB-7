#include <stdio.h> 
 
int main() { 
   int seats[10] = {1, 0, 1, 1, 0, 0, 1, 0, 0, 0};  
   int seat, booked = 0; 
 
   while (booked < 5) { 
       printf("Enter seat number (0-9): "); 
       scanf("%d", &seat); 
 
       if (seat < 0 || seat > 9) { 
           printf("Invalid seat number!\n"); 
           continue; 
       } 
 
       if (seats[seat] == 0) 
       { 
           seats[seat] = 1; 
           booked++; 
           printf("Seat %d booked successfully!\n", seat); 
       } else { 
           printf("Seat %d is already booked!\n", seat); 
       } 
   } 
 
   printf("\nFinal seat status:\n"); 
   for (int i = 0; i < 10; i++) { 
       printf("%d ", seats[i]); 
   } 
 
   return 0; 
} 