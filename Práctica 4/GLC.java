/*
Autor: Mendoza Parra Sergio.
Versión 1.0 (28 de Abril del 2017).
Descripción: Programa que dado una GLC imprima el arbol de derivacion de la cadena obtenida.

Compilación: Windows:	javac GLC.java  
			 Ubuntu:	javac GLC.java 
Ejecución: Windows: java GLC  &  Linux: java GLC
*/

//LIBRERIAS

import java.util.regex.*;
import java.util.*;

public class GLC{
	/*
	void recursion(String cadena, String cadena3);
	Descripción: Imprime las derivaciones de la GLC.
	Recibe: String cadena y String cadena3 (Referencia a las cadenas mandadas por el main())
	*/
	public static void recursion(String cadena, String cadena3){
		Scanner a = new Scanner(System.in);
		String aux1 = "=>1";
		String aux2 = "=>2";
		String aux3 = "=>3";
		String aux4 = "=>4";
		String aux5 = "=>5";
		String cadena2 = null;
		int opcion;
		opcion = a.nextInt();
		if(opcion <= 0 || opcion >=6)
			System.exit(0);
		if(opcion == 1){
			cadena2 = cadena.replace('S', 'e');
			System.out.print(cadena3+""+aux1+"  "+cadena2);}
		if(opcion == 2){
			cadena2 = cadena.replace('S', 'O');
			System.out.print(cadena3+""+aux2+"  "+cadena2);}
		if(opcion == 3){
			cadena2 = cadena.replace('S', '1');
			System.out.print(cadena3+""+aux3+"  "+cadena2);}
		if(opcion == 4){
			cadena2 = cadena.replace("S", "1S1");
			recursion(cadena2, cadena3+""+aux4+"  "+cadena2);}
		if(opcion == 5){
			cadena2 = cadena.replace("S", "OSO");
			recursion(cadena2, cadena3+""+aux5+"  "+cadena2);}
	}			
	public static void main(String[] arg){
		Scanner a = new Scanner(System.in);
		String cadena = "S";
		String cadena2 = "S";
		int opcion;
		System.out.println("\n\n");
		System.out.println("\t\tS = e/O/1/1S1/OSO\n");
		System.out.print("Elegir las opciones:\n");
		recursion(cadena, cadena2);
		System.out.print("\n");
	}	
}	

