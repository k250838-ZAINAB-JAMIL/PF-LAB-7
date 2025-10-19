#include <stdio.h>
int main () {
    int marks[10];
    int n, i , max;
    for(i = 0; i <= 10 ; i++) {
    printf("Enter the marks of the students:");
    scanf("%d",&marks[10]);
}

      max = marks[0];


    for (i = 0; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
    }

    
    printf("The highest mark is: %d\n", max);

    return 0;
}
    

    
