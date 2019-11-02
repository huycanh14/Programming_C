#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	/*
	bai 36 chuong 1
	Moi phep toan deu la can bac 2 cua n! + ket qua cua (n-1)!
	Phep tinh giai thua la n*(n-1)*...1
	=> Nhap n va tinh ket qua
	*/
	int n, i;
	float result = 0, temp = 1;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		temp = temp * i;
		result= sqrt(result + temp);
	}
	printf("Ket qua = %f", result);
}
