#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<math.h>

#define Limpiar system("cls")
#define Pausa system("pause")
	
int Random(){
    srand(time(NULL));
	return rand()%10;
}

int Binario(int fila){
    int i, j, marc=0, s=0, vuel=0, columna;
	int matriz[100][100];
    FILE *archivo;
    archivo = fopen("Codificacion_Binaria.txt","a");
	columna=pow(2,fila);
	vuel=columna/2;
	marc = malloc(1000);
		for(j=0;j<fila;j++){
			for(i=0;i<columna;i++){
				matriz[i][j]=marc;		
				if(marc==0){
					s++;
				}
				else if(marc==1){
					s--;
				}
				if(s==vuel)
					marc = 1;
				if(s==0)
					marc = 0;
			}
			vuel=vuel/2;
		}
		for(j=0;j<columna;j++){
			fprintf(archivo,",");
			for(i=0;i<fila;i++){
				fprintf(archivo,"%d", matriz[j][i]);
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
		Binario(i);
	}
}

int Forma_Manual(){
    int numero;
    int	y, i;
    printf("Ingresa numero: ");
	scanf("%d", &numero);
	printf("\t\n");
	for(i=0;i<=numero;i++){
		Binario(i);
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
