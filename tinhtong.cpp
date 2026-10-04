#include<stdio.h>
int add(int num1, int num2);
int main()
{
	int n1, n2, sum;
	printf("Enter two numbers: ");
	scanf("%d%d", &n1, &n2);
	
	sum = add(n1, n2);
	
	/* Print value of sum */
	printf("Sum =%d", sum);
	
	return 0;
}

int add(int num1, int num2)
{
	int s = num1 + num2;
	/* Return value of sum to the main function */
	return s;
}
