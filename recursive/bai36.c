#include<stdio.h>
#include<conio.h>
#include<math.h>

float SquareNumber(int n, int factorial){
	if (n == 1) return sqrt(1);
	int fac_new = factorial / n;
	n = n - 1;
	return (float) sqrt(factorial + SquareNumber(n, fac_new));
}

int Factorial(int n){
	if (n == 1) return 1;
	return n * Factorial(n - 1);
}

void main(){
	int n, factorial;
	float sum;
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n < 0);
	factorial = Factorial(n);
	sum = SquareNumber(n, factorial);
	printf("Ket qua cua phep tinh = %f", sum);
}
