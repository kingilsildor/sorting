#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 100000

void bubbleSort(int *array) {
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

int main() {
    int random_array[ARRAY_SIZE];

    for (size_t i = 0; i < ARRAY_SIZE; i++) {
        random_array[i] = rand() % 100 + 1;
    }

    bubbleSort(random_array);
    for (size_t i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", random_array[i]);
    }

    return 0;
    
}