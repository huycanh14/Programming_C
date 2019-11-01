#include<stdio.h>
#include<conio.h>
void main(){
	//Nhap gioi tinh: 0 - nu, 1 - nam, so khac - gioi tinh thu 3
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	if(n == 0){
		printf("Ban la nu");
	} else if(n == 1){
		printf("Ban la nam");
	} else {
		printf("Ban la gioi tinh thu 3");
	}
}
