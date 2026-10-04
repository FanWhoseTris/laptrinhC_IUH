#include <stdio.h>



int timUSCLN(int a, int b) {
    a = (a > 0) ? a : -a; 
    b = (b > 0) ? b : -b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int main() {   
    int a = 48, b = 18;
    printf("USCLN: %d\n", a, b, timUSCLN(a, b));


    return 0;
}
