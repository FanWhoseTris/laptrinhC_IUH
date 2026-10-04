#include <stdio.h>

int main() {
    char ch;
    
    printf("Nh?p vào m?t ký t? thu?ng: ");
    scanf("%c", &ch);
    
    // Ki?m tra xem ký t? có n?m trong kho?ng t? 'a' d?n 'z' không
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32; // Chuy?n sang in hoa theo ASCII
        printf("Ký t? in hoa là: %c\n", ch);
    } else {
        printf("Ðây không ph?i là ký t? ch? thu?ng!\n");
    }
    
    return 0;
}

