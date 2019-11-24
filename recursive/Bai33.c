#include<stdio.h>
#include<conio.h>
#include<math.h>

float SquareRoot(int n){
	if(n == 0) return 0;
	return (float) sqrt(2 + SquareRoot(n - 1));
}

void main(){
	int n;
	float sum;
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n < 0);
	sum = SquareRoot(n);
	printf("Ket qua cua phep tinh = %f", sum);
}
