#include <stdio.h>

void in(int n, int a[]){
	for (int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
void tinhfibo(int n, int x[]){
	for (int i=2;i<n;i++){
		x[i] = x[i-1]+x[i-2];
	}
}
int dequyfibo(int n){
	if (n == 0 || n==1){
		return 1;
	}
	return dequyfibo(n-1) + dequyfibo(n-2);
}
int dequytong(int n){
	if (n ==1) return n;
	return n+dequytong(n-1);
}
int main() {
    int n=4;
	int x[100];
	x[0] = x[1] = 1;
	printf("%d",dequyfibo(n));	
	printf("\n");
	printf("%d",dequytong(n));
	printf("\n");
	printf("%d",dequytong(n));
	printf("\n");
	//in(n,x);
    return 0;
}
