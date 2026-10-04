#include <stdio.h>
#include <math.h>

int prime(int x){
	if (x <2){
		return 0;
	}
	for (int i=2;i<=sqrt(x);i++){
		if (x%i==0){
			return 0;
		}
	}
	return 1;
}

void copyarray(int mangcopy[], int mang[], int length){
	for (int i=0;i<length;i++){
		mangcopy[i] = mang[i];
	}
}

void in(int length, int array[]){
	for (int i=0;i<length;i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main(){
	int a[] = {9,2,5,7,8,2,1,10,13,22};
	int n = 10;
	in(n,a);
	
	//cau A
	int acopy[100];
	int nacopy = n;
	
	copyarray(acopy,a, n);	

	for (int i=0;i<nacopy;i++){
		if (prime(acopy[i])){
			acopy[i] = 0;
		}
	}
	in(nacopy, acopy);
	
	
	//cau B
	int nb = n;
	int b[100];
	copyarray(b, a, nb);
	for (int i=0;i<nb;i++){
		if (prime(b[i])){
			for (int j=nb;j>i+1;j--){
				b[j] = b[j-1];
			}
			b[i+1]=0;
			nb++;
			i++;
		}
	}
	in(nb, b);
	
	
	//cau C
	int nc = n;
	int c[100];
	copyarray(c,a,nc);
	for (int i=0;i<nc;i++){
		if (prime(c[i])){
			for (int j=i;j<nc;j++){
				c[j]=c[j+1];
			}
			nc--;
			i--;
		}
	}
	in(nc, c);
	return 0;
}
