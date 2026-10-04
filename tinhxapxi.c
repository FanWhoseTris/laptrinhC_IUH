#include <stdio.h>
#include <math.h>

#define E 0.0001 // Độ chính xác yêu cầu

int main() {
    double x;
    
    // Yêu cầu người dùng nhập góc (Radian)
    printf("Nhap vao x (theo radian): ");
    
    // Kiểm tra tính hợp lệ của luồng đầu vào
    if (scanf("%lf", &x) != 1) {
        printf("Loi: Du lieu dau vao khong phai la so.\n");
        return 1;
    }

    int k = 1;
    double y = x;               // Số hạng đầu tiên
    double sin_approx = x;      // Tổng tích lũy ban đầu (Thay vì dùng tên 'sin' sai lầm)

    // Vòng lặp tính toán chuỗi Taylor
    while (fabs(y) >= E) {
        k += 2; // Tăng bậc (mũ và giai thừa) lên 3, 5, 7...
        
        // Hệ thức truy hồi: Tính số hạng tiếp theo từ số hạng trước đó
        y = -y * x * x / ((k - 1) * k);
        
        // Cộng dồn vào tổng
        sin_approx += y;
    }

    // In kết quả
    printf("\n--- KET QUA ---\n");
    printf("Gia tri sin(%.4f) tinh theo chuoi Taylor: %.6f\n", x, sin_approx);
    
    // Đối chiếu với hàm chuẩn để kiểm tra độ tin cậy của thuật toán
    printf("Gia tri sin(%.4f) tu thu vien math.h:     %.6f\n", x, sin(x));

    return 0;
}