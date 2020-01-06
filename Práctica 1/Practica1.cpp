/*
Autor: Mendoza Parra Sergio.
Versión 1.0 (28 de Febrero del 2017).
Descripción: Programa que hace operaciones con Lenguajes: Concatenacion, Potencia
             Prefijo, Sufijo, Subcadenas.

Con la validacion de que si una palabra es palindromo o no el programa tiene que hacer
las siguientes operaciones con la cadena:

 1)Validar si es Palindromo o no.	
 2)Potencia(Negativa, Positiva o E).
 3)Concatenacion (Cadena1 + Cadena2 o Cadena2 + Cadena1).
 4)Prefijo
 5)Sufijo
 6)Inversa de la Cadena
 7)Longitud de la Cadena

Compilación: Windows:	g++ -o practica1 practica1.cpp  
			 Ubuntu:	g++ -o practica1 practica1.cpp 
Ejecución: Windows practica1.exe  &  Linux ./practica1.out
*/

//LIBRERIAS
#include <string>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

#define clean system("cls")
#define pause system("pause")

//Declaracion de funciones.
char Subcadenas(char *cadena);  //Función que se llama desde el menú principal para leer la cadena y evaluarla con la funcion EvaluaParentesis()
char Sufijo(char *cadena);  //Recibe la cadena y se van imprimiendo sus Sufijos.
char Prefijo(char *cadena); //Recibe la cadena y se van imprimiendo sus Prefijos.
char Potencia_Negativa(char *cadena, int potencia);  //Recibe la cadena y un tamaño de la potencia y se imprime de forma inversa la cadena dependiendo la potencia.  
char Palindromo(char *cadena); //Recibe la cadena y se procede a evaluar si es Palindromo o no.
char Longitud(char *cadena, int *tamano); //Recibe la cadena y hasta que el arreglo termina en '\0' devuelve el tamaño.
char Inverso(char *cadena); //Recibe la cadena y se van imprimiendo sus Prefijos.
char Concatenacion2(char *cadena, char *cadena2); //Recibe las dos cadenas y las concatena (cadena 2 + cadena 1).
char Concatenacion1(char *cadena, char *cadena2); //Recibe las dos cadena y las concatena. (cadena 1 + cadena 2)
char Potencia(char *cadena, int potencia); //Recibe la cadena y se procede a imprimir la cadena en cuanto a n potencia.

/*
char Concatenacion2(char *cadena, char *cadena2);
Descripción: Imprime la concatenacion de la segunda cadena con la primera
Recibe: char *cadena y char *cadena2 (Referencia a las cadenas a concatenar)
*/
char Concatenacion2(char *cadena, char *cadena2){
	printf("\n\tConcatenacion:       %s", strcat(cadena2, cadena));}

/*
char Concatenacion1(char *cadena, char *cadena2);
Descripción: Imprime la concatenacion de la primer cadena con la segunda
Recibe: char *cadena y char *cadena2 (Referencia a las cadenas a concatenar)
*/
char Concatenacion1(char *cadena, char *cadena2){
	printf("\n\tConcatenacion:       %s", strcat(cadena, cadena2));}

/*
char Subcadenas(char *cadena);
Descripción: Imprime todas las subcadenas de la cadena
Recibe: char *cadena (Referencia a a cualquiera de las dos cadena)
Devuelve: 
Observaciones: Imprime algunas subcadenas repetidas.
*/
char Subcadenas(char *cadena){
	int y = strlen(cadena);
	printf("\n\tSubcadenas:");
	printf("\n");
	for(int i = 0; i <= y; ++i){
		for(int j = i; j <= y ; ++j){
			printf("\n\t\t");
			for(int k = j; k <= y; ++k)
				printf("%c",cadena[k]);
		}						
	}
}

/*
char Sufijo(char *cadena);
Descripción: Imprime todas las cadenas sufijas de una "cadena".
Recibe: char *cadena (Referencia a cualquiera de las dos cadenas)
*/
char Sufijo(char *cadena){
	int y = strlen(cadena);
	printf("\n\tSufijo:              ");
	printf("E");
	for(int i = y - 1; i >= 0; --i){
		printf(",");
		for(int j = i; j <= y ; ++j)
			printf("%c",cadena[j]);
	}
}

/*
char Prefijo(char *cadena);
Descripción: Imprime todas las cadenas prefijas de una "cadena".
Recibe: char *cadena (Referencia a las dos cadenas)
*/
char Prefijo(char *cadena){
	int y = strlen(cadena);
	printf("\n\tPrefijo:             ");
	printf("E");
	for(int i = y - 1; i >= 0 ; --i){
		printf(", ");
		for(int j = 0 ; j <= y - i - 1 ; ++j)
			printf("%c",cadena[j]);
	}
}


/*
char Potencia_Negativa(char *cadena, int potencia);
Descripción: Imprime en n numero de veces una cadena de forma inversa.
Recibe: char *cadena e int potencia(Referencia a las 2 cadenas y una potencia dada)
Devuelve: 
Observaciones: 
*/
char Potencia_Negativa(char *cadena, int potencia){
	int i, j;
	char auxiliar[1000];
	int y = strlen(cadena);
	printf("\n\tPotencia Negativa:   ");
	for(i = 0; i <= y; ++i){
		//Se imprime de forma invertida una cadena dependiendo la potencia
		auxiliar[y-i-1] = cadena[i];
	}

	for(j = potencia; j < 0; ++j)
		printf(auxiliar);	
}

/*
char Potencia(char *cadena, int potencia);
Descripción: Imprime n veces una cadena
Recibe: char *cadena e int potencia (Referencia a las dos cadena y una potencia dada)
*/
char Potencia(char *cadena, int potencia){
	int i;
	printf("\n\tPotencia:\t     ");
    //Si la potencia es 0 se imprime la cadena vacía E
	for(i = 1; i <= potencia; ++i)
		printf(cadena);
}

/*
char Concatenacion2(char *cadena, char *cadena2);
Descripción: Imprime la concatenacion de la segunda cadena con la primera
Recibe: char *cadena y char *cadena2 (Referencia a las cadenas a concatenar)
*/
char Inverso(char *cadena){
	char reverso[50];
	int i, tamano, y;
	tamano = strlen(cadena);
	for(i = 0; i <= tamano; ++i)
		//Se hace una copia de la cadena pero de forma invertida, tomando la ultima posicion.
		reverso[tamano-i-1] = cadena[i];
	
	printf("\n\tEl Inverso es:       ");	
	for(y = 0; y < tamano; ++y)
		printf("%c", reverso[y]);
		
}

/*
char Longitud(char *cadena, char *tamano);
Descripción: Devuelve la longitud de una cadena.
Recibe: char *cadena e int *tamano(Referencia a las dos cadena cadenas y el tamaño de la cadena)
*/
char Longitud(char *cadena, int *tamano){
	int i;
	*tamano = 0;
	//Se cuenta cuantos caracteres tiene la cadena evitando '0\' 
	for(i = 0; cadena[i] ; ++i){
		if(cadena[i] != 32)
			*tamano = *tamano + 1;
	}
	//Se retorna el tamaño de la cadena
	return *tamano;	
}
	
/*
char Palindromo(char *cadena);
Descripción: Imprime o valida si una cadena es palindroma o no.
Recibe: char *cadena(Referencia a las dos cadenas a evaluar)
*/	
char Palindromo(char *cadena){
	char cadena2[50];
	int tamano, tamano2, i, b = 0, c, palabra = 0;
	tamano = strlen(cadena);
	//se hace una copia de la cadena.
	for (i = 0; i <= tamano; i = i + 0){
		cadena2[b] = cadena[i];
		i++;
		b++;
	}
	tamano2 = strlen(cadena2);
	for (c = 0; c <= tamano2; c++){
		//Si la cadena es igual al inverso de esa misma cadena, entonces se valida si es palindromo o no.
		if (cadena2[tamano2-c-1] == cadena2[c])
			palabra++;	
	}
	if (palabra == tamano2)
		printf("\n\tLa Palabra es:       Palindromo");
	
	else
		printf("\n\tLa Palabra es:       No Palindromo");
	
	return 0;
}

int main(void){
	char cadena[50], cadena2[50], auxiliar[50], auxiliar2[50];
	char comp;
	int tamano_cadena, tamano_cadena2, potencia_cadena1, potencia_cadena2;
	clean;
	printf("\n\tIntroduce cadena 1: ");
	scanf("%s", cadena);
	printf("\n\t\tPotencia: ");
	scanf("%d", &potencia_cadena1);
	printf("\n\tIntroduce cadena 2: ");
	scanf("%s", cadena2);
	printf("\n\t\tPotencia: ");
	scanf("%d", &potencia_cadena2);
	fflush(stdin);
	strcpy(auxiliar, cadena);
	strcpy(auxiliar2, cadena2);
	Longitud(cadena, &tamano_cadena);
	Longitud(cadena2, &tamano_cadena2);
	printf("\n\n\tCadena 1");
	Palindromo(cadena);
	printf("\n\tTamano de la cadena: %d", tamano_cadena);
	Inverso(cadena);
	Concatenacion1(cadena, cadena2);
	if(potencia_cadena1 == 0){
		printf("\n\tPotencia:\t     ");
    	printf("E");		
	}
	if(potencia_cadena1 < 0){ 
		Potencia_Negativa(auxiliar, potencia_cadena1);
	}
	if(potencia_cadena1 > 0){
		Potencia(auxiliar, potencia_cadena1);
	}
	Prefijo(auxiliar);
	Sufijo(auxiliar);
	Subcadenas(auxiliar);
	printf("\n\n\n");
	pause;
	clean;
	printf("\n\tCadena 2");
	Palindromo(cadena2);
	printf("\n\tTamano de la cadena: %d", tamano_cadena2);
	Inverso(cadena2);
	Concatenacion2(auxiliar, cadena2);
	if(potencia_cadena2 == 0){
		printf("\n\tPotencia:\t     ");
    	printf("E");		
	}
	if(potencia_cadena2 < 0){ 
		Potencia_Negativa(auxiliar, potencia_cadena2);
	}
	if(potencia_cadena2 > 0){
		Potencia(auxiliar, potencia_cadena2);
	}
	Prefijo(auxiliar2);
	Sufijo(auxiliar2);
	Subcadenas(auxiliar2);
	printf("\n\n");
	system("pause");
	return 0;	
}