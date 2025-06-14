#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;

/*
* ========================================================
*                 FUNCIONES RECURSIVAS EN C++
* ========================================================
* 
* DEFINICIÓN:
* Una función recursiva es aquella que se llama a sí misma
* durante su ejecución para resolver un problema dividiéndolo
* en subproblemas más pequeños del mismo tipo.
* 
* CARACTERÍSTICAS PRINCIPALES:
* 1. Caso Base: Condición que detiene la recursión (sin esto,
*    la función se llamaría infinitamente)
* 2. Caso Recursivo: Donde la función se llama a sí misma
*    con un subproblema más pequeño
* 
* ANALOGÍA:
* Es como un juego de muñecas rusas (matryoshka):
* - Cada muñeca abre para revelar otra más pequeña (llamada recursiva)
* - Hasta llegar a la más pequeña que no se puede abrir (caso base)


 FUNCIÓN RECURSIVA FIBONACCI

 La sucesión de Fibonacci es una serie numérica donde:
* - Fibonacci(0) = 0 (Caso base 1)
* - Fibonacci(1) = 1 (Caso base 2)
* - Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2) (Caso recursivo)
* 
 Esta implementación recursiva es directa pero ineficiente para números grandes
 porque recalcula los mismos valores muchas veces (O(2^n) en complejidad temporal)


* CONSIDERACIONES IMPORTANTES:
* 1. Siempre debe existir un caso base que termine la recursión
* 2. Cada llamada recursiva debe acercarse al caso base
* 3. La recursión consume memoria (pila de llamadas)
* 4. Puede ser menos eficiente que soluciones iterativas
* 5. Pero es más elegante para ciertos problemas

*/

int fibonacci(int n) {
	// CASO BASE 1: Si n es 0, retorna 0
	if (n == 0) {
		return 0;
	}
	// CASO BASE 2: Si n es 1, retorna 1
	else if (n == 1) {
		return 1;
	}
	// CASO RECURSIVO: Suma los dos números anteriores en la secuencia
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

/*
* VISUALIZACIÓN DEL ÁRBOL DE LLAMADAS (para n=4):
* 
*               fib(4)
*              /      \
*         fib(3)      fib(2)
*        /     \      /    \
*   fib(2) fib(1) fib(1) fib(0)
*   /    \
* fib(1) fib(0)
* 
* Nota: fib(1) y fib(0) se calculan múltiples veces
*/

int cantDig(int N);
int cantDigPares(int N);
bool tieneDigPares(int N);
int sumaDigMul(int N, int m);
int suma(int n);
int sumaPares(int n);
int inverso(int n);
bool capicua(int n);
int maxDig(int n);
int prodNum(int x, int y);
double potencia(double x,int y);
int decBin(int n);
int binDec(int n);
int conejos(int meses);
void cuentaRegresiva(int seg);
void explosion(int n,int b);
	
int main(int argc, char *argv[]) {
	int N,m,n;
	cin>>N;
	cout<<"El numero tiene "<<cantDig(N)<<" digito(s)"<<endl;
	
	system("pause");

	cout<<endl<<"Cantidad de digitos pares: "<<cantDigPares(N)<<endl;
	
	system("pause");
	
	cout<<endl<<"Tiene digitos pares? : "<<boolalpha<<tieneDigPares(N)<<endl;
	
	system("pause");
	
	cout<<endl<<"Ingrese un numero: ";
	cin>>m;
	
	cout<<endl<<"Suma de los digitos multiplos de "<<m<<": "<<sumaDigMul(N,m)<<endl;
	
	system("pause");
	
	cout<<endl<<"Ingrese un numero: ";
	cin>>n;
	
	cout<<endl<<"Suma de los primeros n digitos: "<<suma(n)<<endl;
	
	system("pause");
	
	cout<<endl<<"Ingrese un numero para sumaPares(): ";
	cin>>n;
	
	cout<<endl<<"Suma de los de los enteros positivos pares entre [2,n]: "<<sumaPares(n)<<endl;
	
	system("pause");
	
	cout<<endl<<"Ingrese el valor a invertir: ";
	cin>>n;
	
	cout<<endl<<"Orden inverso de n: "<<inverso(n)<<endl;
	
	system("pause");
	
	cout<<endl<<"Ingrese un numero para capicua(): ";
	cin>>n;
	
	cout<<endl<<"El numero es capicua?: "<<capicua(n)<<endl;
	
	system("pause");
	
	cout<<endl<<"Ingrese un numero para maxDig(): ";
	cin>>n;
	
	cout<<endl<<"El digito mas grande es: "<<maxDig(n)<<endl;
	
	system("pause");
	int x,y;
	cout<<endl<<"Ingrese un numero para prodNum(x,y): ";
	cin>>x>>y;
	
	cout<<endl<<"El producto entre x e y es: "<<prodNum(x,y)<<endl;
	
	system("pause");
	
	cout<<endl<<"Ingrese un numero para potencia(b,ex): ";
	cin>>x>>y;
	
	cout<<endl<<"La potencia de b elevado a ex es: "<<potencia(x,y)<<endl;
	
	system("pause");
	
	cout<<endl<<"Ingrese un numero para binDec(n): ";
	cin>>n;
	
	cout<<endl<<"El numero es: "<<binDec(n)<<endl;
	
	system("pause");
	
	cout<<endl<<"Ingrese un numero para conejos(n): ";
	cin>>n;
	
	cout<<endl<<"El numero es: "<<conejos(n)*2<<endl;
	
	system("pause");
	
	int seg;
	
	cout<<"Ingrese los segundos faltantes para el despegue: ";
	cin>>seg;
	
	cuentaRegresiva(seg);
	
	system("pause");
	
	int a,b;
	
	cout<<"Ingrese dos numeros naturales 'n' y 'b' (n>b): ";
	cin>>a>>b;
	
	explosion(a,b);
	
	return 0;
}

int cantDig(int N){
	int s=0;
	if(N/10==0)
		s=1;
	else
		s= 1 + cantDig(N/10);
	
	return s;
}
int cantDigPares(int N){
	int s=0;
	
	if(N/10==0){
		if(N%2==0)
			s=1;
	}else{
		s= (N%2==0) + cantDigPares(N/10);
	}
	
	return s;
}
bool tieneDigPares(int N){
	bool s=0;
	
	if(N/10==0){
		if(N%2==0)
			s=1;
	}else{
		if(N%2==0)
			s=1;
		else
			s=tieneDigPares(N/10);
	}
	
	return s;
}
int sumaDigMul(int N, int m){
	int s=0;
	
	if(N/10==0){
		if(N%m==0)
			s=N;
	}else{
		if((N%10)%m==0)
			s= N%10 + sumaDigMul(N/10,m);
		else
			s= sumaDigMul(N/10,m);
	}
	
	return s;
}
int suma(int n){
	int s=0;
	
	if(n==1)
		s=1;
	else
		s= n + suma(n-1);
	
	return s;
}
int sumaPares(int n){
	int s=0;
	
	if(n==2){
		s=2;
	}else{
		if(n%2==0)
			s = n + sumaPares(n-2);
		else
			s = sumaPares(n-1);
	}
	
	return s;
}
	
int inverso(int n){
	int s;
	if(n/10==0)
		s=n;
	else
		s= (n%10)*pow(10,cantDig(n/10)) + inverso(n/10);
	
	return s;
}
	
//Otra manera es calcular el inverso y ver si son iguales... 
bool capicua(int n){
	bool s=0;
	int cant=cantDig(n);
	
	if(cantDig(n)==1 or (cantDig(n)==2 and n/10==n%10)){
		s=1;
	}else{
		if(n/(int)(pow(10,cant-1))== n%10){
			n = n%(int)(pow(10,cant-1));
			n = n/10;
			s = capicua(n);
		}
	}
	return s;
}	
int maxDig(int n){
	int s;
	if(n/10==0){
		s=n;
	}else{
		if(n%10>maxDig(n/10))
			s=n%10;
		else
			s=maxDig(n/10);
	}
	return s;
}
int prodNum(int x,int y){
	int s;
	if(x==1 or y==1){
		if(x==1)
			s=y;
		else
			s=x;
	}else{
		s = x + prodNum(x,y-1);
	}
	return s;
}
double potencia(double x, int y){
	double s;
	
	if(y==1 or y==0){
		if(y==1)
			s=x;
		else
			s=1;
	}else{
		s = x*potencia(x,y-1);
	}
	
	return s;
}
int decBin(int n){
	if(n==1 or n==0){
		return n;
	}else{
		return decBin(n/2)*10 + n%2;
	}
}
int binDec(int n){
	int s=0;
	if(n==1 or n==0)
		s=n;
	else{
		if(n%10==1)
			s= 1 + 2*binDec(n/10);
		else
			s= 2*binDec(n/10);
	}
	return s;
}
int conejos(int meses){
	int p;
	if(meses==1){
		p=1;
	}else if(meses==2){
		p=2;
	}else
		p=conejos(meses-2)+conejos(meses-1);
	return p;	
}
void cuentaRegresiva(int seg){
	if(seg==0)
		cout<<"DESPEGUE";
	else{
		if(seg<=10){
			cout<<seg;
			Sleep(1000);
			cout<<"-";
			cuentaRegresiva(seg-1);
		}else{
			seg=seg-seg%10;
			cout<<seg;
			Sleep(10000);
			cout<<"-";
			cuentaRegresiva(seg-10);
		}
	}
}
void explosion(int n,int b){
	int n1=n/b,n2=n-n1;
	
	
	if(n1>b){
		explosion(n1,b);
	}else
		cout<<n1<<" ";
		
	if(n2>b){
		explosion(n2,b);		
	}else
		cout<<n2<<" ";
	
}
