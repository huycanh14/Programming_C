#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	clrscr(); //Lam sach man hinh
	char name[30]; //trong C khong co khai bao khieu string nen khai bao kieu char ten la name co 30 phan tu(ky tu)
	printf("Nhap ten cua ban = ");
	//scanf("%s", &name); chi lay ki tu den khoang trang
	gets(name); //lay ca gia tri, co khoang trang
	printf("Ten ban vua nhap la: %s", name);
	getch();
}
