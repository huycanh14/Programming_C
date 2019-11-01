#include<stdio.h>
#include<conio.h>

void main(){
	// in ra man hinh so le nho hon 100
	int n = 0;
	do{
		if(n % 2 != 0)
			printf("%d \t", n);
		n++;
	}while( n < 100);
}
