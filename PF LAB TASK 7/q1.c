#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int i, j = 0;

    for (i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }


    arr[j++] = arr[n - 1];

    return j; 
}

int main() {
    int roll_numbers[10] = {11, 12, 12, 13, 14, 14, 15, 16, 17, 17};
    int n = sizeof(roll_numbers) / sizeof(roll_numbers[0]);

    printf("Entered Roll Numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", roll_numbers[i]);
    }
    printf("\n");

    int new_size = removeDuplicates(roll_numbers, n);

    printf("New Roll Numbers:\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", roll_numbers[i]);
    }
    printf("\n");

    return 0;
}