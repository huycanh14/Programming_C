#include<stdio.h>
#include<conio.h>
#include<math.h>

float TinhHamSo(float x){
	if(x >= 5){
		return (float) 2 * pow(x, 2) + 5 * x + 9;
	} else {
		return (float) -2 * pow(x, 2) + 4 * x - 9;
	}
}

void main(){
	float x;
	float res;
	printf("Nhap gia tri x = ");
	scanf("%f", &x);
	res = TinhHamSo(x);
	printf("Ket qua cua ham so = %f", res);
}
