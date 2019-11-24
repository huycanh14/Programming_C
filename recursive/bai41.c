#include<stdio.h>
#include<conio.h>
#include<math.h>

float Fraction(int n){
	if (n == 1) return (float) 1 + 1/1;
	return (float) 1 + 1/(Fraction(n - 1));
}

void main(){
	int n;
	float sum;
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n < 0);
	sum = 1/Fraction(n - 1);
	printf("Ket qua cua phep tinh = %f", sum);
}
