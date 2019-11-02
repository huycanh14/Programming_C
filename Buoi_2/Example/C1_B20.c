#include<stdio.h>
#include<conio.h>

void main(){
	/*
	Bai 18 chuong 1
	A duoc goi la uoc so cua B khi B chia het cho A (voi A > 0)
	*/
	int n, i;
	printf("Nhap so nguyen duong n = ");
	scanf("%d", &n);
	printf("Cac uoc cua %d la: ", n);
	for (i = 1; i <= n; i++)
		if(n % i == 0)
			printf("%d, ", i);
}
