#include <stdio.h>

int main() {
    float diemToan, diemLy, diemHoa;
    int heSoToan, heSoLy, heSoHoa;
    float diemTrungBinh;

    printf("Nhap diem va he so mon Toan: ");
    scanf("%f %d", &diemToan, &heSoToan);
    
    printf("Nhap diem va he so mon Ly: ");
    scanf("%f %d", &diemLy, &heSoLy);
    
    printf("Nhap diem va he so mon Hoa: ");
    scanf("%f %d", &diemHoa, &heSoHoa);

    diemTrungBinh = (diemToan * heSoToan + diemLy * heSoLy + diemHoa * heSoHoa) / (heSoToan + heSoLy + heSoHoa);

    printf("Diem trung binh cua sinh vien la: %.2f\n", diemTrungBinh);

    return 0;
}

