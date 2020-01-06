/*
Autor: Mendoza Parra Sergio.
Versión 1.0 (4 de Marzo del 2017).
Descripción: Programa que dependiendo el numero de telefono te dice si es fijo, celular o numeros gratis.

Con la validacion de la expresion regular el programa tiene que hacer lo siguiente:
 
 1)Ver si es un telefono valido	
 2)Si es un numero de telefono fijo, celular o gratis
 3)Pedir n numeros de telefonos para verificar procedencia.
 
Compilación: Windows:	javac ExpresionRegular.java  

Ejecución: Windows:     java ExpresionRegular 
*/

//LIBRERIAS
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class ExpresionRegular {
	public static void main(String arg[]){
		int i = 0;
		//Se piden n numeros hasta que el usuario ya no quiera ingresar mas telefonos
		do{
			Scanner sc = new Scanner(System.in);
			String cadena;
			System.out.print("\n\tIntroduce el numero de telefono: ");
			cadena = sc.nextLine();
			//Expresion Regular de los Numeros Gratis
			Pattern a = Pattern.compile("^(01800)([0-9]){7}$");
			//Expresion Regular de los Numeros Fijos
			Pattern b = Pattern.compile("^(52)([0-9]){10}$");
			//Expresion Regular de los Numeros de Celular
			Pattern c = Pattern.compile("^(04455)([0-9]){8}$");
			//Todas las expresiones juntas
			Pattern d = Pattern.compile("^((04455)([0-9]){8}|(52)([0-9]){10}|(01800)([0-9]){7})$");
			Matcher a_ = a.matcher(cadena);
			Matcher b_ = b.matcher(cadena);
			Matcher c_ = c.matcher(cadena);
			Matcher d_ = d.matcher(cadena);
			if(a_.find()){
				System.out.println("\n\t\tNumeros Gratis");
				System.out.println("\n\t\tTelefono Valido");	
			}
			if(b_.find()){
				System.out.println("\n\t\tTelefono de Mexico");
				System.out.println("\n\t\tTelefono Valido");
			}
			if(c_.find()){
				System.out.println("\n\t\tTelefono Celular");
				System.out.println("\n\t\tTelefono Valido");
			}
			//Si es diferente de los numeros de telefono 
			if(!d_.find()){ 
				System.out.println("\n\t\tTelefono no Valido");
			}

			System.out.println("\n\n\n\tVolver a ingresar telefono?  1 : Si , 0 : No");
			i = sc.nextInt();
		}while(i == 1);
	} 
}