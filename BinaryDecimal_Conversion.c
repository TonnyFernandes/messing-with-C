//This is not yet ready

#include <stdio.h>
#include <math.h>

void Decimal_to_Binary(int decimal){
    int binary[32], i=0;;
    
    if(decimal==0){
        printf("%d converted to binary: 0", decimal);
        return;
    } // Deals specificaly with 0
    
    printf("\n%d converted to binary: ", decimal);
    while(decimal>0){
        binary[i]= decimal%2;
        decimal /= 2;
        i++;
    } // This is the conversion to binary, but it's not yet inverted
    
    for(int j=i-1; j>=0; j--){
        printf("%d", binary[j]);
    }
}

void Binary_to_Decimal(int binary){
    int bitCounter=0;
    
    while(binary!=0){
        binary/=10;
        bitCounter+=1;
    }
    
    int decimal=0;
    
    for(int i=0; i<bitCounter; i++){
        decimal+=
    }
}


int main(){
    int number, option;
    
    printf("Type 1 to convert a decimal to a binary\n");
    printf("Type 2 to convert a binary to a decimal\n");
    scanf("%d", &option);
    
    switch(option){
        
        // Decimal to Binary
        case 1:
            printf("Now type a POSITIVE decimal number\n");
            do{
                scanf("%d", &number);
            }while(number<0);
            Decimal_to_Binary(number);
            break;
        
        // Binary to Decimal
        case 2:
            printf("Now type the binary number\n");
            do{
                scanf("%d", &number);
            }while(number<0);
            Binary_to_Decimal(number);
            break;
            
        default:
            printf("no lmao");
    }
    
    return 0;
}
