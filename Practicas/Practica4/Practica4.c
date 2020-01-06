#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Pausa system("pause")
#define Limpiar system("cls");

struct automata_deterministico{ 
    char cadena[1000];
};

int Inicio(){
    int contador=0;
    struct automata_deterministico A;
	printf("\n\tIngresa Cadena: ");
	scanf("%s",A.cadena);
	q0(A.cadena, contador);
}

int q0(char *binario, int contador){
    int tam_cadena;
	tam_cadena = strlen(binario);
	if(contador<tam_cadena){
		if(binario[contador]=='0'){
			contador++;
			printf("\n\tEn q0->q1, 0");
			q1(binario, contador);
		}
		else if(binario[contador]=='1'){
			contador++;
			printf("\n\tEn q0->q2, 1");
			q2(binario, contador);
		}
	}
	Pausa;
	return 0;
}

int q1(char *binario, int contador){
	int tam_cadena;
	tam_cadena = strlen(binario);
	if(contador<tam_cadena){
		if(binario[contador]=='0'){
			contador++;
			printf("\n\tEn q1->q0, 0");
			q0(binario, contador);
		}
		if(binario[contador]=='1'){
			contador++;
			printf("\n\tEn q1->q3, 1");
			q3(binario, contador);
		}
	}
	return contador;
}

int q2(char *binario, int contador){
	int tam_cadena;
	tam_cadena = strlen(binario);
	if(contador<tam_cadena){
		if(binario[contador]=='0'){
			contador++;
			printf("\n\tEn q2->q3, 0");
			q3(binario, contador);
		}
		if(binario[contador]=='1'){
			contador++;
			printf("\n\tEn q2->q0, 1");
			q0(binario, contador);
		}
	}
	return contador;
}

int q3(char *binario, int contador){
	int tam_cadena;
	tam_cadena = strlen(binario);
	if(contador<tam_cadena){
		if(binario[contador]=='0'){
			contador++;
			printf("\n\tEn q3->q2, 0");
			q2(binario, contador);
		}
		else if(binario[contador]=='1'){
			contador++;
			printf("\n\tEn q3->q1, 1");
			q1(binario, contador);
		}
	}
	Pausa;
	return contador;
}

int menu(){
    int x;
	Limpiar;
	printf("\n\t\t1.-Ingresar cadena: ");
	printf("\n\t\t2.-Leer archivo: ");
	printf("\n\t\t3.-Salir: ");
	printf("\n\t\t\tIngresa Opcion: ");
	scanf("%d",&x);
	switch(x){
		case 1: Inicio();
				Limpiar;
				break;
		case 2: //Archivo();
				break;
		case 3: exit(0);
				break;			
	}
}

int main(void){
    menu();
	return 0;
}
