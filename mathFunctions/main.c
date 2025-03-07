//
//  main.c
//  mathFunctions
//
//  Created by Erdoğan Aldemir on 7.03.2025.
//

// call header funcstions for predefined standards.
// new definitions added
#include <stdio.h> // function
#include "math.h"
#include "time.h"
#include "stdlib.h"

int main(int argc, const char * argv[]) {
    // define variables
    float logaritmic_value;
    float logaritmic_e;
    
    srand((int)time(0));    // call seed value for real-time radomization
    int deger = rand()%100;      // Returns a pseudo-random integer between 0 and RAND_MAX.

    logaritmic_value = log10(deger);
    logaritmic_e = log(deger);
    // logarithm of x base b = log(x)/log(b)
    
    printf("Logarithm (base-10) of %d is %f \n", deger, logaritmic_value );
    printf("Logarithm (base-E) of %d is %f \n", deger, logaritmic_e );

    
    return 0;
}
