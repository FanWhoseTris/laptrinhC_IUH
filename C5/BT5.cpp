#include <stdio.h>

void inFibonacci(int n) {
    if (n <= 0) return;
    long long f0 = 0, f1 = 1;
    for (int i = 0; i < n; i++) {
        if (i == 0) printf("%lld ", f0);
        else if (i == 1) printf("%lld ", f1);
        else {
            long long fn = f0 + f1;
            printf("%lld ", fn);
            f0 = f1;
            f1 = fn;
        }
    }
    printf("\n");
}

int dequyFibo(int n){
	if (n==0){
		return 0;
	}
	if (n==1){
		return 1;
	}
	return dequyFibo(n-1)+dequyFibo(n-2);
}

int main() {   

    //inFibonacci(10);
	int fibo = dequyFibo(10);
	printf("%d", fibo);
    return 0;
}
