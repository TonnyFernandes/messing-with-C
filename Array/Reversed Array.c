#include <stdio.h>

int main() {
    int array[10] = {18, 9, 3, 2, 5, 3, 2, 9, 8, 2};
    int array_size = sizeof(array) / sizeof(array[0]);
    
    printf("%d\n", array_size);
    
    printf("Original array:");
    for(int i=0; i<10; i++){
        printf(" %d", array[i]);
    }
    
    for(int i=0, j=array_size-1; i<j; i++, j--){
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    
    printf("\nReversed array:");
    for(int i=0; i<10; i++){
        printf(" %d", array[i]);
    }

    return 0;
}
