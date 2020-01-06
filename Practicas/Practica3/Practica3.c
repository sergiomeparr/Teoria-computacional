#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int y = 0;
char palabra[1000];

int q0(char *cadena){
    int i, tam_cadena;
	FILE *archivo;
	archivo = fopen("Automata palabras.txt","w+");
	tam_cadena = strlen(cadena);
	for(i=0;i<=tam_cadena;i++){
		if(cadena[i]==32){
		    i++;
			memset(palabra,'\0', 100);
			y = 0;
		}
		if(cadena[i]!=32){
		    palabra[y]=cadena[i];
			y++;
			if(cadena[i]=='e'){
				i++;
				fprintf(archivo, "q0", palabra);
				if(cadena[i]=='r'){
					palabra[y]=cadena[i];
					y++;
					fprintf(archivo, "q2", palabra);
					i++;
					if(cadena[i]=='e'){
						palabra[y]=cadena[i];
						y++;
						fprintf(archivo, "q1", palabra);
						i++;
						fprintf(archivo, "%s \n", palabra);
					}
				}
			}
		}
	}
}

int Automata_Cadena_Inicio(){
    char cadena[1000], aceptada[100];
	int tam_cadena;
    printf("\t\t\n\nIngresa cadena: ");
	fflush(stdin);
	gets(cadena);
	q0(cadena);
}

int Automata_Archivo(){
	/*char cadena[1000],ruta_archivo[100],c;
	FILE *doc;
	FILE *fi;
	int tam_cadena, i, no_palabra=0;
	printf("Ingresa la ruta en .txt: ");
    scanf("%s",ruta_archivo);
	doc=fopen("palabra.txt","w+");
	fi=fopen("p.txt","r+");
	while(!feof(fi)){
	    fscanf(fi,"%c",&c);
		if(c==32){
			no_palabra++;
		}
		if(c!=32){
			inicio1:
			if(c=='e'){
				fscanf(fi,"%c",&c);
				if(c=='r'){
					palabra[y]=cadena[i];
					y++;
					fscanf(fi,"%c",&c);
					if(c=='e'){
						palabra[y]=cadena[i];
						y++;
						fscanf(fi,"%c",&c);
						fprintf(doc,"%s",palabra);
						fprintf(doc,"Palabra aceptada terminada en ing\n");
					}		
				}
			}
		}
	}*/

	int i = 0, j;
	FILE *archivo;
	int tam_cadena;
	char ruta_archivo[100], lineaArchivo[300];
	printf("Ingresa la ruta en .txt: ");
    scanf("%s",ruta_archivo);
	archivo = fopen(ruta_archivo,"r");
	if(fopen==NULL)   return 0;
	else if(fopen!=NULL){
        while(!feof(archivo)){
		    fflush(stdin);
			fgets(lineaArchivo, 300, archivo);
		}
    }
	fclose(archivo);
	q0(lineaArchivo);
	return 0;
}

int main(void){
    int x;
	system("cls");
	fflush(stdin);
	printf("\t\n1.-Ingresar cadena: ");
	printf("\t\n2.-Leer un archivo: ");
	printf("\t\n4.-Salir: ");
	printf("\t\n\n Ingresa opcion: ");
	scanf("%d",&x);
	switch(x){
		case 1:
			Automata_Cadena_Inicio();
			break;
		case 2:
			Automata_Archivo();
			break;
		case 4:
            exit(0);
            break;
	}
    return 0;
}
