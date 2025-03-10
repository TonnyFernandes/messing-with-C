#include <stdio.h>

int fibonacci(int F){
    if(F==0){
        return 0;
    }
    if(F==1){
        return 1;
    }
    return fibonacci(F-1)+fibonacci(F-2);
}

int main() {
    int F;
    
    printf("Type a positive number\n");
    do{
        scanf("%d", &F);
        if(F<0){
            printf("POSITIVE number\n");
        }
    }while(F<0);
    
    printf("This is the number at the %d position, in the Fibonacci sequence: %d", F, fibonacci(F));
}
