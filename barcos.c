#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

int casos = 1;


typedef struct{
	char letra;
	int  num;
} Pos;

typedef struct {
	int longitud;
	int orientacion; //1 vertical 0 horizontal
	Pos posicion;
} Barco;

int flota(FILE * fp, int n);
int puedoLeer();
int sacarInfo();
void laburar();


int main(){
	FILE * fp;
	fp = fopen("configuraciones.txt", "r");
	while(puedoLeer(fp)){
		sacarInfo();
		laburar();
	}

	return 0;
}

int puedoLeer(){
	--casos;
	return casos >= 0;
}

int sacarInfo(FILE * fp){
	char c;
	int l;
	int n;
	int b;
	fscanf(fp,"(%d)\n", &n);
	fscanf(fp,"Barcos : %d\n", &b);
	fscanf(fp,"Longitudes");
	for(int i = 1; i <= b; i++ ){
		fscanf(fp," %c %d",&c,&l);
		printf("%d\n", l);
	}
	printf("%d\n", b);
	return b;
}

void laburar(){
	printf("laburar\n");

}