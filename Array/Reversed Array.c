#include <stdio.h>

int main() {
    int array[10] = {18, 9, 3, 2, 5, 3, 2, 9, 8, 2};
    int reversed_array[10];
    
    int i=0, j=9;
    do{
        reversed_array[i] = array[j];
        i++;
        j--;
    }while(i<10 && j>=0);
    
    printf("Original array:");
    for(i=0; i<10; i++){
        printf(" %d", array[i]);
    }

    printf("\nReversed array:");
    for(i=0; i<10; i++){
        printf(" %d", reversed_array[i]);
    }

    return 0;
}
