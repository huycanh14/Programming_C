#include<stdio.h>
#include<conio.h>

void main(){
	// in ra man hinh so le nho hon 100
	int n = 0;
	while( n < 100){
		if(n % 2 != 0)
			printf("%d \t", n);
		n++;
	}
}
