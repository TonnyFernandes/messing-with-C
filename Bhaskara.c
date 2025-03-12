#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, delta, x1, x2;
    
    printf("Type the values of a, b and c, respectively\n");
    scanf("%f %f %f", &a, &b, &c); // get variables
    
    delta = b*b - 4 * a * c; // calculate delta for quadratic equation
    
    x1=(-b + sqrt(delta))/(2*a); // first cross on x axis
    x2=(-b - sqrt(delta))/(2*a); // second cross
    
    printf("x1: %f\n", x1);
    printf("x2: %f", x2);

    return 0;
}
