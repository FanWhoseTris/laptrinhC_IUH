#include <stdio.h>
int main() 
{
    char a;
    printf("Nhap ki tu: ");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z'){
        a -= 32;
        printf("ki tu hoa: %c \n", a);
    }
    else if (a >= 'A' && a <= 'Z'){
        a += 32;
        printf("ki tu thuong: %c \n", a);
    }
    return 0;
}
