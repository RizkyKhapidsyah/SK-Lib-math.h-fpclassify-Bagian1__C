#include <stdio.h>      /* printf */
#include <math.h>       /* fpclassify, signbit, FP_* */
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    double d = 1.0 / 2.0;
    switch (fpclassify(d)) {
    case FP_INFINITE:  
        printf("infinite");  
        break;
    case FP_NAN:       
        printf("NaN");       
        break;
    case FP_ZERO:      
        printf("zero");      
        break;
    case FP_SUBNORMAL: 
        printf("subnormal"); 
        break;
    case FP_NORMAL:    
        printf("normal");    
        break;
    }

    if (signbit(d)) {
        printf(" negative\n");
    } else {
        printf(" positive or unsigned\n");
    }

    _getch();
    return 0;
}