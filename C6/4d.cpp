#include <iostream>
using namespace std;

void nhap_mang(int a[], int &n) {
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }
}

int tim_so_duong_nho_nhat(int a[], int n) {
    int duong_nho_nhat = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] > 0) {
            if(duong_nho_nhat == -1 || a[i] < duong_nho_nhat) {
                duong_nho_nhat = a[i];
            }
        }
    }
    return duong_nho_nhat;
}

int main() {
    int a[100];
    int n;

    nhap_mang(a, n);
    
    int ket_qua = tim_so_duong_nho_nhat(a, n);
    
    if(ket_qua != -1) {
        cout << "So duong nho nhat trong mang la: " << ket_qua << endl;
    } else {
        cout << "Mang khong co so duong nao." << endl;
    }

    return 0;
}
