#include <stdio.h>
int n, m;
int a[100][100];


void nhap(){
	printf("Nhap n: ");
	scanf("%d", &n); 
	printf("Nhap m: ");
	scanf("%d", &m); 
    
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			printf("Nhap toa do a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]); 
		}
	}
}

void in(){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	nhap(); 
	in();   
	return 0;
}



