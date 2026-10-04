 #include <stdio.h>
#include <time.h>

int main() {
    int namSinh, tuoi;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int namHienTai = tm.tm_year + 1900;
    
    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);
    
    tuoi = namHienTai - namSinh;
    printf("Tuoi cua nguoi do la: %d\n", tuoi);
    
    return 0;
}

