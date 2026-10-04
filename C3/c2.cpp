#include <stdio.h>

int main() {
    char c;
    printf("Nhap vao mot chu cai: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        c = c - 32;
        printf("Ket qua: %c\n", c);
    } else if (c >= 'A' && c <= 'Z') {
        c = c + 32;
        printf("Ket qua: %c\n", c);
    } else {
        printf("Day khong phai la chu cai hop le.\n");
    }
    return 0;
}

