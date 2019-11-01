#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	//Tinh chu vi va dien tich hinh tam giac
	float a, b, c, p, s, half;
	//Nhap gia tri 3 canh tam giac voi thong tin a, b, c
	printf("Nhap thu tu cac canh cua tam giac = ");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	//Tinh chu vi
	p = a + b + c;
	half = p/2; //Tinh nua chu vi
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("Chu vi hinh tam giac = %f", p);
	printf("\nDien tich hinh tam giac = %f", s);
}
