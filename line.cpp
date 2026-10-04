#include <stdio.h>


void line(void);

int main() {
    line();
    line();
    line();
    return 0;
}
void line(void) {
    for (int i = 0; i < 19; i++) {
        printf("*");
    }
    printf("\n");
}
