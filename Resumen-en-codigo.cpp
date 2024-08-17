#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3,1415 // CONSTANTE DEFINIDA o GLOBAL

/*
Es visible para todo el programa y su valor no se puede alterar UNA VEZ DEFINIDA y ocupa memoria durante todo el proceso del programa.

	El identificador de una constante definida NO debe:

	* Contener espacios
	* Ni caracteres especiales
	* No puede usar palabras reservadas del lenguaje
*/



int main() {
	
	
	//C++ es un lemguaje compilado del tipo multiparadigma, compilaoo quiere decir que trata
	//el programa completa(no como un lenguaje que interpreta), lee y analiza todo.
	
	
	
	/*
	METODO DE PROGRAMACION ESTRUCTURADA:
	
		* organizamos nuestro programa en modulos, es una unidad de codigo que resuelve
		un problema particular.
	
		* Pensamos el problema general como un conjunto de mini-problemas que vamos resolviendo en modulos
		la ida es continuar con este proceso para llegar a un prolema mucho mas simple.
	
		* Cada modulo se resuelve utilizando las 3 estructuras basicas de control
	
	TEOREMA FUNDAMENTAL DE LA PE:
	
	"Todo programa propioo puede ser resuelto usando solo las estructuras de control basicas"
	
	Se le dice programa "Propio" como un programa que tiene un unico punto de entra y uno de salida,
	no existen bucles (se resuelve en un tiempo finito) y no existe bloques rredundantes que no aporteen
	a la solucion de nuestro problema.
	
	*/
	
	
	
	//COMPILACION Y EJECUCION DE UN PROGRAMA:
	
	/*
	
	1)	Escribimos codigo en el EDITOR
	
	2)  Se guarda el archivo del programa convirtiendose en un programa fuente(.cpp)
	
	3) 	Compilamos el programa fuente y se traduce a lenguaje maquina, este trabajo
	lo realiza el compilador con el sistema operativo. Recordar que la maquina solo entiende
	lenguaje maquina y no otro.
	
		Errores de programa:
	
		* Errores de sintaxis
		* Errores logicos
		* Errores de maquina
	
	4) Si NO hay errores se obtien el programa objeto ya traducido
	
	5) Luego ocurre un montaje/enlace/ligacion de los archivos y biblotecas del compilador
	que hayamos usado para unirlo en el sitio donde fueron llamados con el programa objeto
	obteniendo lo que seria el ejecutable del programa.
	
	5) Se ejecuta y se crea un archivo.exe del mismo
	*/
	
	
	
	//TIPOS DE DATOS
	
	/*
	
	SIMPLES:
	
	COMPUESTOS:
	
	
	Enteros: 		int			ocupa 8 bytes de memoria
	
	
	
	los char van con comillas simples '' y las cadenas de caracteres van con comillas ""
	
	*/
	
	
	
	// EJEMPLOS Y CURIOSIDADES
	
	char caracter='A';
	char cadenaDeCaracteres[4]= "soy";		// se indica el tamaño del arreglo de caaracteres y siempre se guarda un espacio para el \0
	
	caracter=(char)126;
	
	cout<<endl<<(char)(caracter + 2); 
	
	int entero=2147483647;					//valor limite positivo de los tipo de dato enetros
	
	cout<<endl<<entero + 1<<endl;			//si le sumamos uno nos manda al valor limite negativo, como si fuera un ciclo cerrado
	
	/*
	El valor limite de cada tipo de dato son la unidad (11111...) y si le sumamos un 1 nos quedaria la unidad seguida de ceros
	quedando en el bit mas significativa un uno, que se podria interpretar como el bit de signo de nuestro nuevo valor y para ver
	el valor de este nuevo dato, mediante complemento nos queda el valor inicial. 
	En el caso de los unsigned no se toma en cuenta el bit de signo y recordar que el cero forma parte de los positivos.

	*/
	
	
	
	//VARIABLES
	
	int A; //declararcion		se reserva espacio en la memoria
	int B=2; //inicializaion	se pisa el valor basura por el que deseamos asignarle
	
	cout<<endl;
	
	cout<<&A<<" "<<&B<<endl; //PARA VER LA DIRECCION DE MEMORIA 
	
	cout<<A<<" "<<B<<endl;	//PARA VER EL VALOR ALMACENADO EN LAS VARIABLES
	
	cout<<endl;
	
	
	
	//CONSTANTES LITERALES
	
	cout<<"Constante literal entera: "<<12<<endl;
	cout<<"Constante literla de tipo char: "<<"12"<<endl;
	
	cout<<endl;
	
	/*
	Una constante literal son los valores que escribimos nosotros. Y NO OCUPAN ESPACIO EN LA MEMORIA.
	*/
	
	//CONSTANTES DECLARDAS
	
	const int CD1 = 3;
	const double CD2 = 4.3;

	
	/*
	Son constantes que una vez definidas no se puede cambiar su valor y visibles solo para el bloque general en el que son declaradas, es decir,
	que la constante tambien sera visible para los bloques internos que existan, pero no para los bloques externos, a diferencia de 
	las constantes globales tienen esta limitacion en su visibilidad.
	
	En cuanto a la memoria, la mismas unas vez declaradas ocupan espacio en la memoria hasta la finalizacion del bloque en donde fueron 
	declaradas.
	*/
	{
		//esto es un BLOQUE INTERNO
		
		int x;
		
		/* Notese que no salta ningun error al redeclarar a la variable x, esto porque estamos en otro
		bloque aparte, si intentara esto en el bloque general saldria error de sintaxis
		La misma nace y muere dentro de este bloque, junto con el espacio que reserva en la memoria.
		*/
	}
	
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
	
	cout<<"setprecision(2) de  4.567: "<<setprecision(2)<<4.567<<endl;						//para agregar rapido la libreria "CNTRL + H"
	cout<<"setprecision(5) de  4.567: "<<setprecision(5)<<4.567<<endl;						//			  sobre la funcion
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
	
	cout<<dec;
	
	/*  ¡¡ ALGO QUE ALCARAR SOBRE ESTAS ULTIMAS PROPIEDADES DE IOMANIP Y PASO DE SISTEMAS NUMERICOS ES QUE UNA VEZ DECLARADAS TODOS
								LOS COUT SE VAN A MOSTRAR CON ESAS PROPIEDADES, NO HAY NECESIDAD DE REPETIRLAS!!
	*/

	
	
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
	
	//CUIDAO CON ESTO
	
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
	
	a=1;
	b=1;
	
	cout<<endl<<"esto es lo que pasa con el preincremento y postcremento: "<<++a<<" "<<b++<<endl;
	
	//Se podria suponer que en este caso se nos mostrara de pantalla como resultadoun 1 y 2
	//pero no es asi como funciona, la situacion real es que en el postincremento (como en el postdecremento)
	//primero se muestra por pantalla el valor de "b" y luego lo incrementa
	
	// en el primer caso, primero se incrementa a y despues se le asigna el valor, y en el segundo caso primero se le asigna el valor de a y despues se le incrementa
	
	a*=3;		//es equivalente a "a = a*3"

	a/=3;		//es equivalente a "a = a/3"
	
	cout<<endl;
	
	
	
	// OPERADORES Y CHAR
	
	/*
	Tambien se puede operar con variables de tipo char:
	
	Este tipo de dato esta definido en el codigo ASCII, es una tabla que muestra las difrentes combinaciones de bits que representan
	alguna funcion o caracter en especifico, cuando trabajamos con un valor char, estamos trabajando con el conjunto de bits que lo representa 
	en este codigo.
	
	Incremento/Decremento de una variable char:
	
	sumamos un uno al codigo binario que representa al valor de la variable.
	ejemplo:
			'a'+1 va a ser igual a 'b'
	*/
	
	
	
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
	
	/* La libreria <cstdlib> nos otorga la propiedad boolalpha que nos muestra true(1) o false(0)*/
	
	cout<<"Resultado del operador menor o igual entre 12 y 12 usando boolalpha: "<<boolalpha<<R<<endl;
	
	
	
	
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
	
	//	cout<<"Se evalua (32)&&(22) : "<<(32)&&(22)<<endl;		
	
	
	
	
	//OPERADOR CONDICIONAL
	
	//C++ tiene un unico operador condicional que es ?: OPERADOR TERNARIO
	
	
	
	
	// PRECEDENCIA O ASOCIATIVIDAD DE LOS OPERADORES
	
	/* 
	En C++ existe un orden en el que se resuelve una expresion algebraica, y esta viene dada por los ordenes de procedencia y asociatividad de 
	los operadores utilizados...
	*/
	cout<<"Evaluando 8 + 5 * 7 % 2 * 4 en C++: "<<8 + 5 * 7 % 2 * 4<<endl;
	
	/*
	En este caso, el operador *(multiplicacion) y el operador %(modulo) tienen el mismo valor de precedencia
	que a la vez es mayor al de la suma.Entonces, primero se va a ejecutar (5 * 7 % 2 * 4) comenzando
	de izquierda a derecha y por ultimo se va a sumar el valor.
	
	8 + ( ((5 * 7)% 2) * 4)  
	
	8 + ( (35 % 2) *4)
	
	cualquier numero modulo dos siempre nos va a devolver o un 1 o un 0, en si siempre que trabajemos
	el operador modulo, el resultado siempre va a rondar entre ( 0 , divisor-1 ) 
	
	8 + (1 * 4)
	
	8 + 4
	
	12
	
	Para asegurar que una operacion se ejecute de tal manera, podemos hacer uso de las comillas ()
	
	*/
	a=2;
		
	cout<<"Evaluando a * -1: "<<a*-1<<endl;
	
	/*
	En este caso tenemos al operador UNARIO que afecta al constante literaria 1. Entonces va a pasar
	lo siguiente, primero el que tieme mayot precedencia es el operador UNITARIO "-" asi que primero
	cambia el valor de 1 a -1 y despues se multiplica por la variable "a".
	*/
	x=18;
	
	cout<<"Evaluando la siguiente operacion not valor or 3 > 5 or true: "<<(not x or -3 > 5 or true)<<endl;
	
	/*
	1- Se aplica el operador UNITARIO a x ya que aplican de derecha a izquierda y convierte a esta x
	en un cero. Recordemos que cualquier numero distinto de cero se considera falso(0), al ser 18 la 
	la sentencia !18 retorna un cero (false).
	
	2- Se evalua el operador RELACIONAL 
	
	3- Se evaluan los operadores LOGICOS
	*/
	
	
	
	
	// OPERADORES QUE OPERAN DE DERECHA A IZQUIERDA
	
	int c;
	
	a=b=c=0;	//todos cero
	
	/* En esta operacion tenemos al operador ASIGNACION y su asociatividad de de DERECHA a IZXQUIERDA,
	entonces lo que sucederia en este caso es que primero a la variable "c" se le asigna el valor de 0,
	luego a "b" se le asigna "c" y por ultimo a "a" se le asigna "b", quedando todos con valor cero.
	*/
	
	cout<<endl<<"Mostrando b=5: "<<int(b=5)<<endl;
	
	
	
	
	// INCONVENIENTES CON LAS OPERACIONES CON TIPOS DE DATOS DE PUNTO FLOTANTE Y PUNTO FLOTANTE DE DOBLE PRECISION
	
	/*
	Hay un tema importante en estos tipos de dato (de punto flotante) que es su precision, que es esto? es al cantidad de digitos precisos que
	toma el tipo de dato, mas alla de esa cantidad no podemos asegurarnos con certeza de que el resultado sea el esperado.
	*/
	
	float X=100.0/3.0;
	
	if(X*3 == 10)
		cout<<"Son iguales"<<endl;
	else
		cout<<endl<<"No son iguales"<<endl;
	
	cout<<endl<<"X: "<<setprecision(9)<<X<<endl;
	
	
	// Matematicamente esperariamos que nos salga por pantalla que los numeros son iguales, pero en realidad esto no es asi
	// ya que tendriamos un 33.33... periodico y comoo se sabe solo obtenemos 7 digitos de precision (CONTANDO LA PARTE ENTER) y los demas digitos
	// serian datos erroneos.
	
	// POR ESTO HAY QUE SABER CON QUE TIPO DE DATO TRABAJAR!
	
	// Si el rango de numeros supera los 7 digitos no se recomienda trabajar con float
	
	//			float: 7 digitos
	//			double: 15 digitos
	//		long double: 19 digitos
	
	
	
	
	
	//CONVERSION DE TIPOS DE DATOS
	
	/*
	Existen metodos semanticos para convertir un valor (no tipo de dato) dado en un tipo de dato a otro:
	
		* Cuando se asigna un valor de un tipo a una variable de otro tipo.
		* Cuando se combinan tipos de datos en expresiones
		* Cuando se pasasn argumentos a funciones
	
	optipo es una operacion que da lugar a un valor de ese tipo de dato

	1) 
	
	int= opint/opint;		Esta operacione entre los dos valores enteros me origina un nuevo valor de tipo int
	
	int= int;				El valor que se asigna es entero
	
	2)
	
	float= opint/opint;		Esta operacione entre los dos valores enteros me origina un nuevo valor de tipo int
	
	float = int;		En este punto uno podria imaginar que el resultado que se asignaria es entero, pero en realidad
							lo que ocurre es que trunca el valor de la operacione al tipo de dato float.
	
	var = (float)(opint/opint);	Algo asi, toma el valor flotante de la operacion
	
	3)
	
	int= opint/opfloat;  O  int= opfloat/opint;	 Esta operacion entre un valor int y uno float nos origina un nuevo valor de tipo float
	
	int= float;					En este punto lo que sucede es que la variable entera toma el valor entero de la operacion
	*/

	
	return 0;
}

