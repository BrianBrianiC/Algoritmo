#include <iostream>
#include <cstdlib> 	// rand() y srand()
#include <ctime>	// rand()
using namespace std;


/*	
			* ========================================================*
			*                   FUNCIONES EN C++					  *
			* ========================================================*
	LAS FUNCIONES POTENCIAN EL CONCEPTO DE MODULARIZACION EN NUESTROS PROGRAMAS. HACIENDO
	DE ELLOS MAS LEGIBLES Y ESTRUCTURADOS, UNA DE LAS VENTAJAS PRINCIPALES QUE NOS OFRECEN
	ES LA REUTILIZACION DE CODIGO A LO LAGRO DE NUESTRO PROGRAMA PRINCIPAL AHORRANDO TIEMPO
	DE CODEO TANTO EN ESCRITURA COMO CORRECCION Y DETECCION DE ERRORES. ESTA NUEVA FORMA 
	QUE NOS TRAE NOS PERMITE DE CIERTA MANERA DESGLOSAR AUN MAS NUESTRO PROBLEMA PRINCIPAL
	EN BLOQUES AUN MAS FACILES DE RESOLVER, NOTAR QUE AL TRABAJAR EN UN NUEVO BLOQUE TAMPOCO
	NECESITAMOS TENER CUIDADO CON LOS NOMBRES DE LAS VARIABLES QUE VAMOS A UTILIZAR EN LA 
	FUNCION NI TAMPOCO VAMOS A LLENAR A NUESTRO MAIN DE TANTAS VARIABLES A LO LARGO DEL 
	DESARROLLO.

	TENEMOS DOS TIPOS:
 
	* FUNCI�N:
	- Siempre retorna un valor (usa 'return' con un valor)
	- Tiene un tipo de retorno especificado (int, float, string, const, etc.)
	- Se puede usar en expresiones (ej: y = suma(a,b) * 2)
 
	* PROCEDIMIENTO:
	- No retorna valores (void como tipo de retorno)
	- Puede usar 'return' sin valor para terminar su ejecuci�n
	- Se invoca como una instrucci�n independiente (como no retorna nada no podemos operar con ella, va sola)
 
	* NOTA: En C++ estrictamente hablando, todo son funciones.
	La distinci�n es conceptual seg�n si retornan valor o no.
	

	* PASO DE VALORES: "VALOR/COPIA Y REFERENCIA"
	EXISTEN ESTAS DOS MANERAS DE PARA DEFINIR LA MANERA EN LA QUE SE VAN A MANEJAR LOS
	PARAMETROS DE UNA FUNCION. POR VALOR/COPIA SE PASA EXACTAMENTE UNA COPIA DEL VALOR
	DE LA VARIABLE EN LA FUNCION QUE HACE LA LLAMADA, MIENTRAS QUE TRABAJANDO POR 
	REFERENCIA ESTAMOS PASANDO EXACTAMENTE LA DIRECCION DE MEMORIA DE LA VARIABLE	
	POR LO QUE SE VA MODIFICANDO A MEDIDA QUE TRABAJAMOS CON LA MISMA DENTRO DE LA 
	FUNCION.

	* MEJORES PR�CTICAS:
	1. Usar nombres descriptivos para funciones y par�metros
 	2. Funciones deber�an hacer una sola cosa (principio SRP)
	3. Documentar con comentarios el prop�sito y par�metros
	4. Preferir retornar valores en lugar de modificar referencias
	5. Mantener funciones cortas (idealmente < 20 l�neas)
*/



//	VEAMOS QUE SE PUEDE TRABAJAR CON FUNCIONES SIN LA NECESIDAD DE PROTOTIPOS. PERO LA CATEDRA LO PIDE!!!!

// 	Funci�n con par�metro por VALOR (copia)
void porValor(int x) {
	cout << "DENTRO de porValor:" << endl;
	cout << "  Valor recibido: " << x << endl;
	cout << "  Direcci�n de x: " << &x << endl;
	x = 100; // Modificamos la copia
	cout << "  Valor modificado: " << x << endl;
}

// 	Funci�n con par�metro por REFERENCIA (direcci�n)
void porReferencia(int &x) {
	cout << "DENTRO de porReferencia:" << endl;
	cout << "  Valor recibido: " << x << endl;
	cout << "  Direcci�n de x: " << &x << endl;
	x = 200; // Modificamos el original
	cout << "  Valor modificado: " << x << endl;
}

//	FIBONACCI
int fibonacci(int n) {
	int resultado;
	
	if (n == 0) {
		resultado = 0;
	} else if (n == 1) {
		resultado = 1;
	} else {
		int a = 0;
		int b = 1;
		int temp;
		
		for (int i = 2; i <= n; ++i) {
			temp = a + b;
			a = b;
			b = temp;
		}
		
		resultado = b;
	}
	
	return resultado;
}




//	PROTOTIPO: SE LE AVISA AL COMPILADOR QUE MAS ADELANTE ESTA DEFINIDA ESTA FUNCION, QUE EXISTE.
bool esPrimo(int);
void contDig(int, int&);
void intercambiar(int &a, int &b);



int main(int argc, char *argv[]) {
	
	// PRIMO
	int numeroAnalizar;  
	cout << "Ingrese el numero a analizar si es primo: ";  
	cin >> numeroAnalizar;  
	
	
	cout << "El numero " << numeroAnalizar << " es primo?: " << boolalpha << esPrimo(numeroAnalizar) << endl; // LLAMADA A LA FUNCION
	
	
	
	//CONTEO DE DIGITOS
	int numeroIngreso, contadorCifras = 1;
	
	cout << "Ingrese un numero para saber sus cifras: ";
	cin >> numeroIngreso;
	
	contDig(numeroIngreso, contadorCifras); // ESTO ES UN PROCEDIMIENTO, "RETORNAMOS" EL VALOR DE contadorCifras POR REFERENCIA
											// LO QUE PASAMOS ES LA DIRECCION DE MEMORIA Y A MEDIDA QUE TRABAJAMOS CON contadorCifras
											// VAMOS MODIFICANDO SU VALOR 
	
	cout << "La cantidad de cifras del numero ingresado es: " << contadorCifras << endl << endl;
	
	
	
	// EJEMPLO DE PASAJE DE VALORES A FUNCIONES. IMPORTANTE TEMA DE DIRECCION DE MEMORIA!!
	
	int num = 5;
	
	cout << "EJEMPLO DE PASAJE DE VALORES EN FUNCIONES" << endl;
	cout << "  Valor original: " << num << endl;
	cout << "  Direcci�n de num: " << &num << endl << endl;
	
	// Paso por VALOR
	cout << "LLAMANDO a porValor(num)" << endl;
	porValor(num);
	cout << "DESPU�S de porValor:" << endl;
	cout << "  Valor en main: " << num << " (no cambi�)" << endl << endl;
	
	// Paso por REFERENCIA
	cout << "LLAMANDO a porReferencia(num)" << endl;
	porReferencia(num);
	cout << "DESPU�S de porReferencia:" << endl;
	cout << "  Valor en main: " << num << " (s� cambi�)" << endl;
	
	
	
	// FUNCION rand(): "NUMEROS ALEATORIOS"
	
	// Semilla para el generador (�importante!)
	srand(time(NULL));  // Usa la hora actual como semilla
	
	// Generar 5 n�meros aleatorios
	
	cout << "5 numeros aleatorios entre 0 y RAND_MAX:" << endl;
	for(int i = 0; i < 5; i++) {
		cout << rand() % 12 + 1 << endl; // "rand() % 12" me deja numeros aleatorios entre [0,11] y con el "+ 1" dejamos el rango de [1,12]
	}
	
	
	//INTERCAMBIAR DOS VALORES
	
	int x, y;
	cin>>x>>y;
	intercambiar(x,y);
	
	cout<<"Ahora este es el valor de x: "<<x<<endl;
	cout<<"Y ahora este es el valor de y: "<<y<<endl;
	
	return 0;
}
void contDig(int numeroIngreso, int& contadorCifras){  	// PREOCEDIMIENTO. numeroIngreso se pasa por VALOR y contadorCifras se pasa por REFERENCIA 
	
	numeroIngreso = abs(numeroIngreso);
	
	while (numeroIngreso >= 10) {
		contadorCifras++;
		numeroIngreso /= 10;
	}
	
}
bool esPrimo(int numeroAnalizar){	// FUNCION
	
	bool esPrimo = true;  
	
	//CASOS BASES
	if (numeroAnalizar < 2) {
		esPrimo = false;  
	}
	
	int i = 2;  
	while (i < numeroAnalizar && esPrimo) {  
		if (numeroAnalizar % i == 0) {
			esPrimo = false;  
		}
		i++;
	}
	
	return esPrimo;
}
void intercambiar(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

