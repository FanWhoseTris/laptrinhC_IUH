#include <stdio.h>


long long tongBacMot(int n) {
    long long S = 0;
    for (int i = 1; i <= n; i++) S += i;
    return S; 
}
long long dequytongBacMot(int n) {
	if (n==0){
		return 0;
	}
	return n+dequytongBacMot(n-1);
	
}

long long tongBacHai(int n) {
    long long S = 0;
    for (int i = 1; i <= n; i++) {
        S += (long long)i * i; 
    }
    return S;
}
long long dequytongBacHai(int n) {
	if (n==0){
		return n*n;
	}
	return n+dequytongBacMot(n-1);
	
}
double tongPhanSo(int n) {
    double S = 0;
    for (int i = 1; i <= n; i++) {
        S += 1.0 / i;
    }
    return S;
}
double dequytongPhanSo(double n) {
	
	if (n==1.0){
		printf("%f", n);
    	return 1.0;
	}
	return (1.0/n)+dequytongPhanSo(n-1.0);
}
long long giaiThua(int n) {
    long long S = 1;
    for (int i = 1; i <= n; i++) {
        S *= i;
    }
    return S;
}

long long tongGiaiThua(int n) {
    long long S = 0;
    long long cf = 1;
    for (int i = 1; i <= n; i++) {
        cf*= i; 
        S += cf;
    }
    return S;
}


int main() {
    int n = 5;
    //3A
    printf("S = %lld\n", n, dequytongBacMot(n));
    //3B
    printf("S = %lld\n", n, dequytongBacHai(n));
    //3c
    printf("S = %.4f\n", n, dequytongPhanSo(5.0));
    //3d
    printf("%d! = %lld\n", n, giaiThua(n));
    //3e
    printf("S = %lld\n", n, tongGiaiThua(n));

    return 0;
}
