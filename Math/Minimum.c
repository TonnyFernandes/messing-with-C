#include <stdio.h>

int main() {
    int array[10] = {18, 9, 3, 2, 55, 3, 2, 9, 8, 2};
    int minimum = array[0];

    for(int i=1; i<10; i++){
        if(minimum > array[i]) minimum = array[i];
    }
    
    printf("Array:");
    for(int i=0; i<10; i++){
        printf(" %d", array[i]);
    }
    printf("\nMinumum number in the array: %d", minimum);

    return 0;
}
