#include<stdio.h>
#include<conio.h>
#include<math.h>

float PowerNumber(int n){
	if (n == 1) return pow(2, (float)1/2);
	return (float) pow(n + PowerNumber(n - 1), (float)1/n);
}

void main(){
	int n;
	float sum;
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n < 0);
	sum = PowerNumber(n);
	printf("Ket qua cua phep tinh = %f", sum);
}
