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
	
	
	
	int A; //declararcion		se reserva espacio en la memoria
	int B=2; //inicializaion	se pisa el valor basura por el que deseamos asignarle
	
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
										se rellenara con espacios en caso de que seea un entero y rellena con ceros a la izquierda si es flotante.
	
	cout<<setfill(caracter)<<valor 		Es lo mismo que el anterior, nada mas que en ves de rellenar con espacios, rellenta con el caracter elegido.
	
	cout<<fixed<<setprecision(int decimalesDespuesDeLaComa)<<valor; 	fija el tamaño, poniendo ceros a la derecha tantas veces como digitos falten.
	*/
	
	cout<<"setprecision(2) de  4.567: "<<setprecision(2)<<4.567<<endl;
	cout<<"setprecision(5) de  4.567: "<<setprecision(5)<<4.567<<endl;
	cout<<"fixed y setprecision(5) de  4.567: "<<fixed<<setprecision(5)<<4.567<<endl;
	cout<<"setw(5) de 4.567: "<<setw(5)<<4<<endl;
	cout<<"setfill y setw(5) de 4.567: "<<setfill('#')<<setw(5)<<4.567<<endl;
	
	//PASAJE A SISTEMA NUMERICO
	
	/*
	cout<<dec<<valor;		muestra el valor en decimal
	
	cout<<oct<<valor;		muestra el valor en octal 
	
	cout<<hex<<valor;		muestra el valor en hexadecimal
	*/
	
	cout<<"valor del 12 en decimal: "<<dec<<12<<endl;
	cout<<"valor del 12 en octal: "<<oct<<12<<endl;	
	cout<<"valor de 12 en hexadecimal: "<<hex<<12<<endl;
	
	//ENTRADA DE DATOS
	
	int x, y;
	
	cout<<"ingreso de datos: ";
	cin>>x;
	
	
	cout<<endl<<x<<endl;
	
	//Se puede ingresar mas de un dato
	
	cout<<"ingrese datos para x e y: ";
	cin>>x>>y;
	
	cout<<endl;
	
	//ASIGNACION A UNA VARIABLE DE UNA CONSTANTE LITERAL
	
	x=4;
	y=6;
	
	cout<<x<<endl;
	cout<<y<<endl;
	
	//ASIGNACION A UNA VARIABLE DE UNA EXPRESION ALGEBRAICA
	
	int a=45,b=55;
	
	a=b;
	b=a;
	
	cout<<"valor de a: "<<a<<endl;
	cout<<"vlaor de b: "<<b<<endl;
	
	/*
	Como C++ es un lenguaje secuencial, en este procedimiento primero se asigna el valor de la variable b a la variable a, despues en la otra sentencia
	se le asigna a b el valor de a, pero a tiene el valor de b, entonces le queda el mismo valor.
	*/
	
	//ABREVIACION DE ALGUNAS OPERACIONES RAPIDAS EN C++
	
	++a;		//es equivalente a "a = a+1"
	
	cout<<"el valor de a incrementado en 1 de la primera forma: "<<a<<endl;
	
	a++;		//es igual a lo de arriba pero el procedimiento es diferente
	
	cout<<"el valor de a incrementado en 1 de la segunda forma: "<<a<<endl;
	
	--a;
	
	cout<<"el valor de decrementado en 1 de la segunda forma: "<<a<<endl;
	
	a--;
	
	cout<<"el valor de a decrementado en 1 de la segunda forma: "<<a<<endl;
	
	// en el primer caso, primero se incrementa a y despues se le asigna el valor, y en el segundo caso primero se le asigna el valor de a y despues se le incrementa
	
	a*=3;		//es equivalente a "a = a*3"

	a/=3;		//es equivalente a "a = a/3"
	
	cout<<endl;
	
	//OPERADORES RELACIONALES 
	
	/*
	
	expresion1 == expresion2		compara si las 2 expresiones son iguales
	
	
	expresion1 != expresion2		compara si las 2 expresiones son distintas
	
	
	expresion1 < expresion2			compara si la expresion1 es menor a la expresion2
	
	
	expresion1 > expresion2			compara si la expresion1 es mayor a la expresion2
	
	
	expresion1 >= expresion2		compara si la expresion1 es mayor o igual a la expresion2
	
	
	expresion1 <= expresion2 		compara si la expresion1 es menor o igual a la expresion2
	
	
	Estos operadores relacionales devuelven 1 si la expresion es verdadera y 0 si la expresion es falsa, las expresiones deben ser compatibles con el operador
	*/
	
	bool R;
	
	
	R=12==12;
	
	cout<<"Resultado de el operador igual: "<<R<<endl;
	
	R=12!=12;
	
	cout<<"Resultado de el operador distinto: "<<R<<endl;
	
	R= 12>3;
	
	cout<<"Resultado del operador mayor: "<<R<<endl;
	
	R= 12<3;
	
	cout<<"Resultado del operador menor: "<<R<<endl;
	
	R= 12>=3;
	
	cout<<"Resultado del operador mayor o igual entre 12 y 3: "<<R<<endl;
	
	R= 12>=12;
	
	cout<<"Resultado del operador mayor o igual entre 12 y 12: "<<R<<endl;
	
	R= 12<=3;
	
	cout<<"Resultado del operador menor o igual entre 12 y 3: "<<R<<endl;
	
	R= 12<=12;
	
	cout<<"Resultado del operador menor o igual entre 12 y 12: "<<R<<endl;
	
	
	//OPERADORES LOGICOS BOOLEANOS
	
	/*
	!(expresion) 		Es la negacion, niega el valor otorgado por la expresion, o bien toma el valor de la funcion opuesta a la expresion de adentro 
	
	
	(expresion) && (expresion)	Es la interseccion, tal cual como en el algebra de boole
	
	
	(expresion) || (expresion)	Es la union del algebra de boole
	
	Estos operadores trabajan con evaluacion en cortocircuito, es decir que el valor que tome el operador de la derecha, determina, si el operando de la izquierda
	se evalua o no.
	
	Para las expresiones logicas en C++ se toma como el valor literal 0 como falso y cualquier otro valor distinto como verdadero
	
	es decir...
	
	if(34){
		sentencias;			este bloque si se ejecuta
	}
	
	if(0){
		sentencias;			este bloque no e ejecuta
	}
	
	*/
	
	cout<<endl;
	
	x=11;
	y=33;
	
	bool S;
	
	S=(x!=y)&&(x>y);
	
	cout<<"Se evalua (x!=y)&&(x>y) : "<<S<<endl;
	
	S=(x!=y)||(x>y);
	
	cout<<"Se evalua (x!=y)||(x>y) : "<<S<<endl;
	
	S=(32)||(0);

	cout<<"Se evalua (32)||(0) : "<<S<<endl;
	
	S=(32)&&(0);
	
	cout<<"Se evalua (32)&&(0) : "<<S<<endl;
	
	S=(32)&&(22);
	
	cout<<"Se evalua (32)&&(22) : "<<S<<endl;
	
	//ESTO ESTA MAL SEMANTICAMENTE
	
	//	cout<<"Se evalua (32)&&(22) : "<<(32)&&(22)<<endl;		se tiene que enc
	
	//OPERADOR CONDICIONAL
	
	//C++ tiene un unico operador condicional que es
	

	// PRECEDENCIA O ASOCIATIVIDAD DE LOS OPERADORES
	
	/* 
	En C++ existe un orden en el que se resuelve una expresion algebraica, y esta viene dada por los ordenes de procedencia y asociatividad de 
	los operadores utilizados...
	*/
	cout<<"Evaluando 8 + 5 * 7 % 2 * 4 en C++: "<<8 + 5 * 7 % 2 * 4<<endl;
	return 0;
}

