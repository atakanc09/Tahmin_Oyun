#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	
	int sayi=rand()%100;
	int istek,sayac=0;
	
	printf("1 ile 100 arasýnda sayý tahmin et\n");
	A:
	printf("%d.Tahmin:",sayac+1);
	scanf("%d",&istek);
	sayac=sayac+1;
	if(sayi<istek){
		printf("Aþaðý in\n");
		goto A;
	}	
	if(sayi>istek){
		printf("Yukarý çýk\n");
		goto A;
		}
	if(sayi==istek){
		printf("Bravo Bildiniz");
	}
	
	
	
	
	
	
	
	return 0;
}
