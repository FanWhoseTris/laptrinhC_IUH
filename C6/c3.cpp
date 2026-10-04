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

int dem_chia_het_4_khong_chia_het_5(int a[], int n) {
    int dem = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 4 == 0 && a[i] % 5 != 0) {
            dem++;
        }
    }
    return dem;
}

int main() {
    int a[100];
    int n;

    nhap_mang(a, n);
    
    int ket_qua = dem_chia_het_4_khong_chia_het_5(a, n);
    cout << "So luong phan tu chia het cho 4 nhung khong chia het cho 5 la: " << ket_qua << endl;

    return 0;
}
