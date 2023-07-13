#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 1000

void bubbleSort(int *array) {
    /* Bubble Sort repeatedly steps through the list, compares adjacent elements,
    and swaps them if they are in the wrong order. */
    for (size_t i = 0; i < ARRAY_SIZE; i++) {
        for (size_t j = 0; j < ARRAY_SIZE - i; j++) {
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }    
    }
}

void optimisedBubbleSort(int *array) {
    /* Bubble Sort repeatedly steps through the list, compares adjacent elements,
    and swaps them if they are in the wrong order. 
    If no swaps occure break the loop */
    for (size_t i = 0; i < ARRAY_SIZE; i++) {
        int swapped = 0;
        for (size_t j = 0; j < ARRAY_SIZE - i; j++) {
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swapped = 1;
            }
        }
        if (swapped == 0){
            break;
        }       
    }
}

void selectionSort(int *array) {
    /* Selection Sort divides the input list into a sorted and an unsorted region.
    It repeatedly selects the smallest (or largest) element from the unsorted region
    and swaps it with the leftmost unsorted element.*/
    for (size_t i = 0; i < ARRAY_SIZE; i++){
        int minimum = array[i];
        for (size_t j = 0; j < ARRAY_SIZE; j++){
            if(minimum < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp; 
            }
        }
    }
}

void upDatedSelectionSort(int *array) {
    /* Selection Sort divides the input list into a sorted and an unsorted region.
    It repeatedly selects the smallest (or largest) element from the unsorted region
    and swaps it with the leftmost unsorted element.*/
    for (size_t i = 0; i < ARRAY_SIZE; i++){
        int minimum_index = i;
        for (size_t j = i + 1; j < ARRAY_SIZE; j++){
            if(array[j] < array[minimum_index]){
                minimum_index = j;
            }
        }
        int temp = array[minimum_index];
        array[minimum_index] = array[i];
        array[i] = temp; 
    }
}

int main() {
    int random_array[ARRAY_SIZE];

    for (size_t i = 0; i < ARRAY_SIZE; i++) {
        random_array[i] = rand() % 100 + 1;
    }

    // for (size_t i = 0; i < ARRAY_SIZE; i++) {
    //     printf("%d ", random_array[i]);
    // }
    printf("\n");
    upDatedSelectionSort(random_array);
    for (size_t i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", random_array[i]);
    }

    return 0;
    
}