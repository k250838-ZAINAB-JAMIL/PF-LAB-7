#include <stdio.h> 
 
int main() { 
    int original[10] = {1,2,3,4,5,6,7,8,9,10}; 
    int shifted[10]; 
    int shiftBy = 0; 
 
    printf("\nEnter how many positions to shift: "); 
    scanf("%d", &shiftBy); 
 
    int index = 0; 
    while (index < 10) { 
        shifted[(index + shiftBy) % 10] = original[index]; 
        index++; 
    } 
 
    printf("\nShifted array: "); 
    for (int i = 0; i < 10; i++) { 
        printf("%d ", shifted[i]); 
    } 
 
    printf("\n"); 
    return 0; 
} 