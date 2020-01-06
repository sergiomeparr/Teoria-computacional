#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Limpiar system("cls")
#define Pausa system("pause")

int Random(){
    srand(time(NULL));
	return rand()%10;
}

int Primo(int n){
    FILE *archivo;
    int i, j=0;
	archivo = fopen("Numeros Primos Binarios.txt", "a");
	int primo=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			primo++;
		}
	}
	if(primo==2){
	    fprintf(archivo,"\t\t%d \n",n);
		Binario(n);
	}
	fclose(archivo);
	return n;
}

int Binario(int n){
    int i=0, j;
	FILE *archivo;
	int cadena[1000];
	archivo = fopen("Numeros Primos Binarios.txt", "a");
	if(n>0){
	    cadena[i] = n % 2;
		Binario(n/2);
		i++;
		for(j=0;j<=i;j=j+2){
		    fprintf(archivo,"%d", cadena[j]);
		}
	}
	fclose(archivo);
}

int Forma_Aleatoria(){
    int y, numero;
	int i;
	numero = Random();
	printf("Numero: %d",numero);
	for(i=0;i<=numero;i++){
	    Primo(i);
	}
}

int Forma_Manual(){
    int numero;
    int	y, i;
    printf("Ingresa numero: ");
	scanf("%d", &numero);
	printf("\t\n");
	for(i=0;i<=numero;i++){
	    Primo(i);
	}
	printf("\t\n");
}

int Menu(){
    int x;
	Limpiar;
	do{
		printf("\t\t\tMenu");
        printf("\n\n\t1. Forma Manual.");
        printf("\n\n\t2. Forma Aleatoria.");
        printf("\n\n\t3. Salir.\n");
		printf("\n\n\t Ingresa Opcion: ");
		scanf("%d",&x);
		Limpiar;
	    switch(x){
		case 1: 
	        Forma_Manual();
            break;
        case 2:
		    Forma_Aleatoria();
			break;
		case 3:
			exit(0);
			break;
		}
	}while(x!=3);	 	
}

int main(void){
    Menu();
	return 0;
}
