#include<stdio.h>
#include<conio.h>

void main(){
	//Bai so 6
	/*
	Moi phep toan deu co dang 1/(n * (n + 1)) va thuc hien trong n lan 
	=> Nhap n
	=> dung vong lap for de tinh tong
	*/
	int n, i;
	float sum;
	printf("Nhap so lan lap n = ");
	scanf("%d", &n);
	sum = 0;
	for (i = 1; i <= n ; i++){
		sum += (float)1 / (i * (i + 1));
	}
	printf("Ket qua chuong trinh = %f", sum);
}
