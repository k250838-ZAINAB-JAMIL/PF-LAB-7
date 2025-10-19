#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main() { 
    int arr[10]; 
    int num; 
    int found = 0;  
    srand(time(0)); 
    printf("Generated array: "); 
    for (int i = 0; i < 10; i++) { 
        arr[i] = (rand() % 10) + 1; 
        printf("%d ", arr[i]); 
    } 
    printf("\n\nEnter a number to search (1-10): "); 
    scanf("%d", &num); 
    printf("\n"); 
    for (int i = 0; i < 10; i++) { 
        if (num == arr[i]) { 
            printf("Number %d found at index %d\n", arr[i], i); 
            found = 1; 
        } 
    } 
    if (!found) { 
        printf("Number not found in the array.\n"); 
    } 
 
    return 0; 
} 