#include <stdio.h>
#define password 12345
int main(){
	int in;
	do {
		printf("Nhap password:");
		scanf("%d", &in);
	} while (password != in);
	return 0;
}
