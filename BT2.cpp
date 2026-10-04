#include <stdio.h>
#include <math.h>
int chinhphuong(int n){
	int cp = 0;
	for (int i = 1;i<=n;i++){
		if (i*i == n){
			cp = 1;
			break;
		}
	}
	return cp;
}
int main(){
	int n = 98765;
	//2A
	int nghichdaocuan=0;
	int temp = 0;
	while (n>0){
		temp = n%10;
		n = n/10;
		nghichdaocuan = nghichdaocuan *10 + temp;
	}
	printf("nghic dao cua n: %d\n", nghichdaocuan);
	//2B
	if (n == nghichdaocuan){
		printf("N la so doi xung\n");
	}
	else{
		printf("N khong la so doi xung\n");
	}
	
	//2C
	n = 1;
	int cp = chinhphuong(n);
	if (cp){
		printf("N la so chinh phuong\n");
	}
	else{
		printf("N khong la so chinh phuong\n");
	}
	
	//2D
	int snt = 1;
	for (int i = 2;i<= sqrt(n);i++){
		if (n%i == 0){
			snt = 0;
			break;
		}
	}
	if (snt){
		printf("N la so nguyen to\n");
	}
	else{
		printf("N khong la so nguyento\n");
	}
	
	
	//2E
	n = 1234;
	int tongsole=0;
	temp = 0;
	while (n>0){
		temp = n%10;
		n = n/10;
		if (temp %2!= 0){
			tongsole+=temp;
		}
	}
	printf("tong so le cua n: %d\n", tongsole);
	
	//2F
	
	n = 12345;
	int tongsonguyento=0;
	temp = 0;
	int songuyento[50];
	for (int i = 2;i<=13;i++){
		songuyento[i] = 1;
	}
	for (int i = 2;i<= 13;i++){
		if (songuyento[i]){
			for (int j = i*2;j<=13;j+=i){
				songuyento[j] = 0;
			}
		}
	}
	
	while (n>0){
		temp = n%10;
		n = n/10;
		
		if (temp > 1 && songuyento[temp]){
			tongsonguyento+=temp;
		}
	}
	printf("Tong so nguyen to: %d\n",tongsonguyento);
	
	
	//2g
	int tongsochinhphuong = 0;
	n = 12345;
	while (n>0){
		temp = n%10;
		n = n/10;
		int cp = chinhphuong(temp);
		if (cp){
			printf("%d la so chinh phuong\n", temp);
			tongsochinhphuong+=temp;
		}
	}
	printf("Tong so chinh phuong: %d",tongsochinhphuong);
	return 0;
}
