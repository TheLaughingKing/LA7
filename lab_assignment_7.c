// COP3502C Spring 2024 Lab Assignment 7

#include <stdio.h>

void bubbleSort(int array[], int length) {
    int swaps_count[length];
    int total_swaps = 0;
    for (int i = 0; i < length; i++) {
        swaps_count[i] = 0;
    }

    for (int i = 0; i < length; i++) {
        int swapped = 0;
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swaps_count[j]++;
                swaps_count[j + 1]++;
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }

    for (int i = 0; i < length; i++) {
        printf("%d: %d swaps\n", array[i], swaps_count[i]);
        total_swaps += swaps_count[i];
    }

    printf("Total number of swaps: %d\n", total_swaps);
}

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int length1 = sizeof(array1) / sizeof(array1[0]);
    int length2 = sizeof(array2) / sizeof(array2[0]);

    printf("Array 1:\n");
    bubbleSort(array1, length1);

    printf("\nArray 2:\n");
    bubbleSort(array2, length2);

    return 0;
}