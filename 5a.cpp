#include <stdio.h>
#include <math.h>
int prime(int x){
	if (x <2){
		return 0;
	}
	for (int i=2;i<=sqrt(x);i++){
		if (x%i == 0){
			return 0;
		}
	}
	return 1;
}

void in(int length, int array[]){
	for (int i=0;i<length;i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main(){
	int a[] = {1,3,4,0,0,5,7,4,0,0,2,8, -1, -4, -9};
	int n = 15;
	//cau A
	int nb = 0;
	int b[100];
	for (int i=0;i<n;i++){
		
		if (prime(a[i])){
			//printf("%d", &n);
			b[nb++] = a[i];
		}
	}
	in(nb, b);
	printf("\n");
	
	//cauB
	int duong[100], conlai[100];
	int nduong = 0, nconlai = 0;
	for (int i=0;i<n;i++){
		if (a[i] > 0){ 
			duong[nduong++] = a[i];
		}
		else {
			conlai[nconlai++] = a[i];
		}
	}
	in(nduong, duong);
	in(nconlai, conlai);
	printf("\n");
	
	
	//cauC
	int am[100], duong2[100], zero[100], temp=0;
	int nam = 0, nduong2 = 0, nzero=0;
	for (int i=0;i<n;i++){
		if (a[i] < 0){
			am[nam++] = a[i];
		}
		else if (a[i] > 0){
			duong2[nduong2++] = a[i];
		}
		else{
			zero[nzero++] = a[i];
		} 
	}
	for (int i=0;i<nam-1;i++){
		for (int  j = i+1;j<nam;j++){
			if (am[i] <= am[j]){
				temp = am[i];
				am[i] = am[j];
				am[j] = temp;				
			}
		}
	}
	for (int i=0;i<nduong2-1;i++){
		for (int  j = i+1;j<nduong2;j++){
			if (duong2[i] >= duong2[j]){
				temp = duong2[i];
				duong2[i] = duong2[j];
				duong2[j] = temp;				
			}
		}
	}
	int nall = 0;
	int ans[100];
	for (int i=0 ;i<nduong2;i++){
		ans[nall++] = duong2[i];
	}
	
	for (int i=0 ;i<nam;i++){
		ans[nall++] = am[i];
	}
	
	for (int i=0 ;i<nzero;i++){
		ans[nall++] = zero[i];
	}
	in(nall, ans);
	return 0;
}
