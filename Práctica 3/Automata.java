/*
Autor: Mendoza Parra Sergio.
Versión 1.0 (30 de Marzo del 2017).
Descripción: Programa que valida una cadena dependiendo el automata determinista

Con la validacion de la cadena en el automata el programa tiene que mostrar lo siguiente:

 1)Solicitar Estados para el Automata.	
 2)Lenguaje que va a aceptar el automata.
 3)Transiciones.
 4)Estados Finales.
 5)Estado Inicial.
 
Compilación: Windows:	javac Automata.java  
	     Ubuntu:    javac Automata.java 
Ejecución: Windows java Automata  &  Linux java Automata
*/

//LIBRERIAS
import java.util.regex.*;
import java.util.Scanner;

public class Automata{
	public static void main(String[] arg){
		Scanner a = new Scanner(System.in);
		String cadena;
		int estados = 0;
		int estados2 = 1;
		int opcion = 0;
		do{
			System.out.println("Ingresar una cadena\n");
			cadena = a.next();
			Pattern b = Pattern.compile("a(a|b)*");
			Matcher m = b.matcher(cadena);
			if(m.matches()){
				System.out.println("Cadena valida\n");
				System.out.println("S"+estados+"->S"+estados2+"->a\n");
				for(int i = 1; i < cadena.length(); ++i){
					if(cadena.charAt(i) == 'a'){
						System.out.println("S"+estados2+"->S"+estados2+"->a\n");
					}
					if(cadena.charAt(i) == 'b'){
						System.out.println("S"+estados2+"->S"+estados2+"->b\n");
					}
				}
			}
			else{
				System.out.println("Cadena no Valida");
			}
			System.out.println("\nIntroducir otra cadena (1 : SI / 2 : NO)\n");
			opcion = Integer.parseInt(a.next());
		}while(opcion != 2);
	}
} 

