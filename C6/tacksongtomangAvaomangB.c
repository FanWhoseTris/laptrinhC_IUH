#include <stdio.h>


void in(int length, int a[]){
	for (int i=0;i<length;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int prime(int x){
	if (x < 2){
		return 0;
	}
	for (int i=2;i<=sqrt(x);i++){
		if (x%i==0){
		 	return 0;
		}
	}
	return 1;
}

void copyarray(int length, int a[], int b[]){
	for (int i=0;i<length;i++){
		b[i] = a[i];
	}
}

int main (){
    
    int n=19;
	int x[] = {9,6,9,1,3,5,7,2,10,6,0,0,6, -1,-2,-15,-9,-6,0};
    //ket qua la a = 1,2,3,3,5,6,7,8
    in(n, x);
   
    
    //Cau 6A
    printf("cau a\n");
    int a[100];
    copyarray(n, x,a);
    
    for (int i=0;i<n;i++){
    	if (prime(a[i])==1 && a[i] >= 2){
    		a[i] = 0;
		}
	}
	in(n, a);
	
	
	//cau 6B
	printf("cau b\n");
	int nb = n;
	int b[100];
	copyarray(n,x,b);
	for (int i=0;i<nb;i++){
		if (prime(b[i]) && b[i] >=2){
			for (int j=nb;j>i+1;j--){
				b[j] = b[j-1];
			}
			nb++;
			
			b[i+1] = 0;
			i++;
		}
	}
	in(nb, b);
	
	
	//Cau C
	printf("cau c\n");
	int nc = n;
	int c[100];
	copyarray(n, x,c);
	for (int i=0;i<nc;i++){
		if (prime(c[i])){
			for (int j=i;j<nc;j++){
				c[j] = c[j+1];
			}
			i--;
			nc--;
		}
		
	}
	in(nc, c);
    return 0;
}
