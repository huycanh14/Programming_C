#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	/*
	Bai 14 chuong 1
	Cac phep toan deu co dang x mu (2n + 1), thuc hien n lan
	=> Nhap x, n
	=> Dung vong lap for de tinh ket qua
	*/
	int i, x, n, sum = 0;
	printf("Nhap so lan lap n = ");
	scanf("%d", &n);
	printf("Nhap x = ");
	scanf("%d", &x);
	for (i = 1; i<= n; i++){
		sum += pow(x, (2 * i + 1));
	}
	printf("Ket qua S = %d", sum);
}

