#include <stdio.h>

float fartocels(float fahr);

int main(void) {

    float fahr;
    float lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {        
        printf("%3.0f %6.1f\n", fahr, fartocels(fahr));
        fahr = fahr + step;
    }

    return 0;
}

//*** Convert faranheit to celsius function ***//
float fartocels(float fahr) {
    float celsius;

    celsius = (5.0/9.0) * (fahr-32.0);

    return celsius;
}