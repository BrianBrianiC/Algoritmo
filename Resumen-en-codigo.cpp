#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3,1415 // CONSTANTE DEFINIDA

/*
Es visible para todo el programa y su valor no se puede alterar UNA VEZ DEFINIDA

	El identificador de una constante definida NO debe:

	* Contener espacios
	* Ni caracteres especiales
	* No puede usar palabras reservadas del lenguaje
*/

int main(int argc, char *argv[]) {
	
	//TIPOS DE DATOS
	
	
	
	int A; //declararcion
	int B=2; //inicializaion
	
	cout<<endl;
	
	cout<<&A<<" "<<&B<<endl; //PARA VER LA DIRECCION DE MEMORIA 
	
	cout<<A<<" "<<B<<endl;	//PARA VER EL VALOR ALMACENADO EN LAS VARIABLES
	
	cout<<endl;
	
	//CONSTANTES LITERALES
	
	cout<<12<<endl;
	cout<<"12"<<endl;
	cout<<0<<endl;
	
	cout<<endl;
	
	/*
	Una constante literal son los valores que escribimos nosotros:
	Por ejemplo:
	
	cout<<12; es una constante literal entera.
	*/
	
	//CONSTANTES DECLARDAS
	
	const int CD1 = 3;
	const double CD2 = 4.3;

	
	/*
	Son constantes que una vez definidas no se puede cambiar su valor y visibles solo para el bloque general en el que son declaradas, es decir,
	que la constante tambien sera visible para los bloques internos que existan, pero no para los bloques externos, a diferencia de 
	las constantes globales tienen esta limitacion en su visibilidad.
	*/
	
	if(1){
		const int A1 = 2;
		int B = 5;		/* Esta es una variable que tiene el mismo identificador que la variable del bloque anterior pero en 
							esta sentencia no se esta sobreescribiendo el valor de la misma, sino que es una nueva variable que existe dentro de este bloque*/
		
		cout<<"Valor de la constante A: "<<A<<endl;
		cout<<"Valor de la constante A1: "<<A1<<endl;
		
		cout<<"Valor de B dentro del bloque del if: "<<B<<endl;
		
		
		//En este caso la constante A1 como asi tambien las variables que declaremos, no seran visibles fuera de este bloque
	}
	
	cout<<"Valor de B fuera del bloque del if: "<<B<<endl;
	
	cout<<endl;
	
	
	//EXPRESIONES EN C++
	
	/*
	Un programa de por si se basa en la realizacion de calculos con los que se producen los resultados deseados. Los calculos se producen mediante
	la evaluacion de expresiones en las que se mezclan operadores con operandos. Cuando en una expresion se usa mas de un operador, se necesita conocer 
	la precedencia de cada operador y su asociatividad
	*/
	
	// MANIPULACION DE LA SALIDA DE DATOS MEDIANTE EL COMANDO "cout"
	
	/*
	El comando cout es utilizado para mostrar valores y se puede modificar la salida de los mismos...
	
	cout<<setprecision(int decimalesDespuesDeLaComa)<<valor;	Este comando redondea el numero, si nos paramos, en este caso nos devuelve un 4.6 como salida.
	
	cout<<setw(int)<<valor;				Este comando fija el ancho de la salida del valor, si el valor es mas chico que el valor del comando
										se rellenara con espacios.
	
	cout<<setfill(caracter)<<valor 		Es lo mismo que el anterior, nada mas que en ves de rellenar con espacios, rellenta con el caracter elegido.
	
	cout<<fixed<<setprecision(int decimalesDespuesDeLaComa)<<valor; 	fija el tamaño, poniendo ceros a la derecha tantas veces como digitos falten.
	*/
	
	cout<<"setprecision(2) de  4.567: "<<setprecision(2)<<4.567<<endl;
	cout<<"setprecision(5) de  4.567: "<<setprecision(5)<<4.567<<endl;
	cout<<"fixed y setprecision(5) de  4.567: "<<fixed<<setprecision(5)<<4.567<<endl;
	cout<<" setw(5) de 4.567: "<<setw(5)<<4<<endl;
	cout<<"setfill y setw(5) de 4.567: "<<setfill('#')<<setw(5)<<4.567<<endl;
	
	return 0;
}

