#include<stdio.h>
#include<conio.h>
#include<math.h>

float SquareNumber(int n){
	if (n == 1) return sqrt(1);
	return (float) sqrt(n + SquareNumber(n - 1));
}

void main(){
	int n;
	float sum;
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n < 0);
	sum = SquareNumber(n);
	printf("Ket qua cua phep tinh = %f", sum);
}
