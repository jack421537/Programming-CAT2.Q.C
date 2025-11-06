#include <stdio.h>

int main() {
    // Declare and initialize the first 2D array
    int scores1[2][2] = {
        {65, 92},
        {84, 72}
    };

    // Declare and initialize the second 2D array
    int scores2[2][2] = {
        {35, 70},
        {59, 67}
    };

    // Print the first array
    printf("Elements of scores1 array:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", scores1[i][j]);
        }
        printf("\n");
    }

    printf("\n"); // Add space between arrays

    // Print the second array
    printf("Elements of scores2 array:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", scores2[i][j]);
        }
        printf("\n");
    }

    return 0;
}