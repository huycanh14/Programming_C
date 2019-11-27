#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(){
	clrscr();
	int m, n, **p, i, j, tg, a, dem = 0;
	do
	{
		printf("Nhap so hang cua ma tran: m = ");
		scanf("%d", &m);
	}while (m<=0);
	do
	{
		printf("Nhap so cot cua ma tran: n = ");
		scanf("%d", &n);
	}while (n<=0);
	p  = (int **)calloc(m, sizeof(int*));
	for(i=0;i<m;i++)
       	p[i] = (int *) calloc(n, sizeof(int));
       	
    for(i = 0;  i<m;  i++)
       for(j = 0;  j<n; j++)
       	{	printf("a[%d][%d] = ", i+1, j+1);
			scanf("%d",&tg);
			p[i][j] = tg;
       	}
    printf("Cac phan tu nam o dong thu 2 cua ma tran la: ");
	for(j = 0;  j<n; j++) 
		printf("%d \t",p[1][j]);
	printf("\n");
	printf("Nhap so can tim = ");
	scanf("%d", &a);
	for(i = 0;  i<m; i++) 
		for(j = 0;  j<n; j++) 
			if(p[i][j] == a)
				dem++;
	printf("So lan xuat hien phan tu %d la %d", a, dem);
	for(i = 0; i<m; i++) free(p[i]);      
	free(p);
	getch();
}
