#include <iostream>
#include <bitset>
#include <sstream>
#include <math.h>
#include <iomanip>
#include <cmath>
using namespace std;

void numero_pi_e(int opcion);
void funcionestrigonometricas(int opcion);
void funcioneslogaritmicas(int opcion);
void funcionesexponenciales(int opcion);
void raicescuadradas_superiores(int opcion);
void notaciones_cientificas(int opcion);
void puntoflotante(int opcion);
void binario_hexa_octal(int opcion);

int main(){
  int opcion;
  string continuar;
  do{
  system("cls");	
  cout<<"CALCULADORA CIENTÍFICA"<<endl;
  cout<<"Acceso rápido a los números pi y e                    [1]"<<endl;
  cout<<"Funciones de trigonometría                            [2]"<<endl;
  cout<<"Funciones logarítmicas en base e y en base 10.        [3]"<<endl;
  cout<<"Funciones exponenciales                               [4]"<<endl;
  cout<<"Raíces cuadradas y superiores                         [5]"<<endl;
  cout<<"Notaciones científicas                                [6]"<<endl;
  cout<<"Aritmética de punto flotante                          [7]"<<endl;
  cout<<"Cálculo binario, hexadecimal y octal                  [8]"<<endl;
  do{
  cout<<"Elija una opción que desee usar[1-8]: ";
  cin>>opcion;
  }while(opcion<1 || opcion >8);
  switch(opcion){
    case 1:system("cls");numero_pi_e(opcion);break;
    case 2:system("cls");funcionestrigonometricas(opcion);break;
    case 3:system("cls");funcioneslogaritmicas(opcion);break;
    case 4:system("cls");funcionesexponenciales(opcion);break;
    case 5: system("cls"); raicescuadradas_superiores(opcion);break;
    case 6: system("cls");notaciones_cientificas(opcion);break;
    case 7:system("cls");puntoflotante(opcion);break;
    case 8:system("cls");binario_hexa_octal(opcion);break;
  		}
  	do{
  		cout<<"Desea volver al menu?(Y/N): ";
		cin>>continuar;	
		if(continuar != "Y" && continuar != "y" && continuar != "N" && continuar != "n"){
			cout<<"Por favor ingrese una respuesta correcta (Y/N)."<<endl;
		}
	  }while(continuar != "Y" && continuar != "y" && continuar != "N" && continuar != "n");
  	}while(continuar == "Y" || continuar =="y");
  }

//Numeros pi y e
void numero_pi_e(int opcion){
	float pi= M_PI;
	float e= M_E;
	int numero;
	cout<<"Ha seleccionado el acceso a los numeros pi y e.\n";
	cout<<"Seleccione lo que desee usar: "<<endl;
    cout<<"PI [1]"<<endl;
    cout<<"e  [2]"<<endl;
    do{
    cout<<"Elija una opción que desee usar[1-2]: ";
    cin>>numero;
    }while(numero<1 || numero>2);
    switch(numero){
    	case 1:{
    		cout<<"Ha seleccionado el numero pi"<<endl;
    		int caracteres;
    		cout<<"Elija la cantidad de numeros para mostrar en pi: ";
    		cin>>caracteres;
    		cout<<"PI ="<<setprecision(caracteres)<<pi<<endl;
			break;
		}
		case 2:{
			cout<<"Ha seleccionado el numero e"<<endl;
    		int caracteres;
    		cout<<"Elija la cantidad de numeros para mostrar en e: ";
    		cin>>caracteres;
    		cout<<"e ="<<setprecision(caracteres)<<e<<endl;
			break;
		}
	}
}
//Funciones trigonometricas
void funcionestrigonometricas(int opcion){
  cout<<"Ha seleccionado funciones trigonométricas.\n";
  float hipotenusa,adyacente, opuesto,seno,coseno,tangente,cotangente,secante,cosecante;
  int trigonometrico;
  cout<<"Seleccione la funcion trigonométrica que desee usar: "<<endl;
  cout<<"Seno       [1]"<<endl;
  cout<<"Coseno     [2]"<<endl;
  cout<<"Tangente   [3]"<<endl;
  cout<<"Secante    [4]"<<endl;
  cout<<"Cosecante  [5]"<<endl;
  cout<<"Cotangente [6]"<<endl;
  do{
  cout<<"Elija una opción que desee usar[1-6]: ";
  cin>>trigonometrico;
  }while(trigonometrico<1 || trigonometrico>6);
  switch(trigonometrico){
  	case 1:{
  		cout<<"Introduzca el cateto opuesto:";
        cin>>opuesto;
        cout<<"Ingrese su hipotenusa:";
        cin>>hipotenusa;
        seno = opuesto / hipotenusa;
        cout<<"El seno es: "<<seno<<endl;
		break;
	  } 
    case 2:{
  		cout<<"Introduzca el cateto adyacente:";
        cin>>adyacente;
        cout<<"Ingrese su hipotenusa:";
        cin>>hipotenusa;
        coseno = adyacente / hipotenusa;
        cout<<"El coseno es: "<<coseno<<endl;
		break;
	  }
    case 3:{
    	cout<<"Introduzca el cateto opuesto:";
        cin>>opuesto;
  		cout<<"Introduzca el cateto adyacente:";
        cin>>adyacente;
        tangente = opuesto / adyacente;
        cout<<"La tangente es: "<<tangente<<endl;
		break;
	  } 
    case 4:{
  		cout<<"Introduzca el cateto adyacente:";
        cin>>adyacente;
        cout<<"Ingrese su hipotenusa:";
        cin>>hipotenusa;
        secante = hipotenusa / adyacente;
        cout<<"La secante es: "<<secante<<endl;
		break;
	  } 
    case 5:{
  		cout<<"Introduzca el cateto opuesto:";
        cin>>opuesto;
        cout<<"Ingrese su hipotenusa:";
        cin>>hipotenusa;
        cosecante = hipotenusa / opuesto;
        cout<<"La cosecante es: "<<cosecante<<endl;
		break;
	  }  
    case 6:{
    	cout<<"Introduzca el cateto opuesto:";
        cin>>opuesto;
  		cout<<"Introduzca el cateto adyacente:";
        cin>>adyacente;
        cotangente = adyacente / opuesto;
        cout<<"La cotangente es: "<<cotangente<<endl;
		break;
	  }  
  }
}
// Funciones logaritmicas
void funcioneslogaritmicas(int opcion){
  int base;
  cout<<"Ha seleccionado funciones logaritmicas en base 10 y en base e\n";
	cout<<"Seleccione lo que desee usar: "<<endl;
    cout<<"base 10[1]"<<endl;
    cout<<"base e[2]"<<endl;
    do{
    cout<<"Elija una opción que desee usar[1-2]: ";
    cin>>base;
    }while(base<1 || base>2);
    switch(base){
  case 1: {
     
    cout<<"Ha seleccionado la base 10"<<endl;
	int x;
    cout<<"Ingrese el numero x:"<<endl;
    cin>>x;
	double lg = log10(x);
	cout << lg << endl;
}
   case 2: {
     cout<<"Ha seleccionado la base e"<<endl;
	int x;
      cout<<"Ingrese el numero x:"<<endl;
     cin>>x;
  double lg = log (x);
	cout << lg << endl;
}
  }
  }
//Funciones exponenciales
void funcionesexponenciales(int opcion){
  float a,b,c;
  cout<<"Ingresar el numero base de la potencia:";
  cin>>a;
  cout<<"Ingresar el exponente de la potencia:";
  cin>>b;

  c=pow(a,b);
  cout<<"El numero potenciado es:"<<c<<endl;
}
//Raices cuadradas y superiores
void raicescuadradas_superiores(int opcion){
  
  float a,b,c;
  cout<<"Ingresar numero:";
  cin>>a;
  
  b=sqrt(a);
  cout<<"La raiz de "<<a<<" es:"<<b<<endl;
}
//Notaciones cientificas
void notaciones_cientificas(int opcion){
	cout<<"Ha seleccionado notaciones cientificas.\n";
	float numero, potencia;
	int i=0;
	cout<<"Ingrese el numero que desea convertir a notacion cientifica.";
	cin>>numero;
	if(numero<10&&numero>-10){
		cout<<"El numero en notacion cientifica es: "<<numero;
	}
	else{
		do{
			numero=numero/10; i++;
		}while (numero<=-10||numero>=10);
	
		cout<<"El numero en notacion cientifica es: "<<numero<<"x"<<10<<"^"<<i;
	}
}
//Aritmetrica punto flotante
void puntoflotante(int opcion){
	cout<<"Ha seleccionado aritmetrica de punto flotante.\n";
	float primer_numero,segundo_numero, resultado;
	int operacion,i=0;
	cout<<"Seleccione el tipo de operacion aritmetica que desea realizar."<<endl;
	cout<<"Suma               [1]"<<endl;
	cout<<"Resta              [2]"<<endl;
	cout<<"Multiplicacion     [3]"<<endl;
	cout<<"Division           [4]"<<endl;
	do{
	cout<<"Selecione un numero entre el 1-4"<<endl;
	cin>>operacion;
	}while(operacion<1||operacion>4);
	switch(operacion){
	case 1:{
		cout<<"Escriba el primer numero de la suma"<<endl;
		cin>>primer_numero;
		cout<<"Escriba el segundo numero de la suma"<<endl;
		cin>>segundo_numero;
		resultado=primer_numero+segundo_numero;
	if(resultado<10&&resultado>-10){
		cout<<"El numero en notacion cietica es: "<<resultado;
	}
	else{
		do{
			resultado=resultado/10; i++;
		}while (resultado<=-10||resultado>=10);
	
		cout<<"El numero en notacion cietica es: "<<resultado<<"x"<<10<<"^"<<i;
	}
		break;
	}
	case 2:{ 
		cout<<"Escriba el primer numero para la resta"<<endl;
		cin>>primer_numero;
		cout<<"Escriba el segundo numero para la resta"<<endl;
		cin>>segundo_numero;
		resultado=primer_numero-segundo_numero;
	if(resultado<10&&resultado>-10){
		cout<<"El numero en notacion cietica es: "<<resultado;
	}
	else{
		do{
			resultado=resultado/10; i++;
		}while (resultado<=-10||resultado>=10);
	
		cout<<"El numero en notacion cietica es: "<<resultado<<"x"<<10<<"^"<<i;
	}
		break;
	}
	case 3:{
		cout<<"Escriba el primer numero de la multiplicacion"<<endl;
		cin>>primer_numero;
		cout<<"Escriba el segundo numero de la multiplicacion"<<endl;
		cin>>segundo_numero;
		resultado=primer_numero*segundo_numero;
	if(resultado<10&&resultado>-10){
		cout<<"El numero en notacion cietica es: "<<resultado;
	}
	else{
		do{
			resultado=resultado/10; i++;
		}while (resultado<=-10||resultado>=10);
	
		cout<<"El numero en notacion cietica es: "<<resultado<<"x"<<10<<"^"<<i;
		}
		break;
	}
	case 4:{
		cout<<"Escriba el primer numero de la division"<<endl;
		cin>>primer_numero;
		cout<<"Escriba el segundo numero de la division"<<endl;
		cin>>segundo_numero;
		resultado=primer_numero/segundo_numero;
	if(resultado<10&&resultado>-10){
		cout<<"El numero en notacion cientifica es: "<<resultado;
	}
	else{
		do{
			resultado=resultado/10; i++;
		}while (resultado<=-10||resultado>=10);
	
		cout<<"El numero en notacion cietica es: "<<resultado<<"x"<<10<<"^"<<i;
	}
		break;
	}
	}
}
// Calculo binario hexadecimal y octal
void binario_hexa_octal(int opcion){
	cout<<"Ha seleccionado calculo binario, hexadecimal o octal"<<endl;
	cout<<"Calculo binario     [1]\n";
	cout<<"Calculo hexadecimal [2]\n";
	cout<<"Calculo octal       [3]\n";
	int calculo;
	do{
    	cout<<"Elija una opción que desee usar[1-3]: ";
 	 	cin>>calculo;
 	}while(calculo<1 || calculo >3);
 	switch(calculo){
 		case 1: {
 			system("cls");
 			cout<<"CALCULO BINARIO\n";
 			cout<<"Suma           [1]\n";
 			cout<<"Resta          [2]\n";
 			cout<<"Multiplicación [3]\n";
 			cout<<"Division       [4]\n";
 			int Bi;
			do{
    		cout<<"Elija una opción que desee usar[1-4]: ";
 	 		cin>>Bi;
 			}while(Bi<1 || Bi>4);
 			switch(Bi){
 				case 1: {
 					int numero1,numero2, sumabinaria;
 					cout<<"Introduzca el primer numero (NO en Binario): ";
 					cin>>numero1;
 					cout<<"Introduzca el segundo numero(NO en Binario): ";
 					cin>>numero2;
					bitset<8> b1(numero1);
					bitset<8> b2(numero2);
					sumabinaria = numero1 + numero2;
					bitset<8> sb(sumabinaria);  	
    			    cout<<"El primer numero en binario es: "<<b1<<endl;
 					cout<<"El segundo numero en binario es: "<<b2<<endl;
 					cout<<"La suma binaria de estos dos es: "<<sb<<endl;
					break;
				 }
				case 2:{
					int numero1,numero2, restabinaria;
 					do{
 						cout<<"Introduzca el primer numero (NO en Binario y debe ser el mayor de los dos): ";
 						cin>>numero1;
 						cout<<"Introduzca el segundo numero(NO en Binario): ";
 						cin>>numero2;
					 }while(numero1<numero2);
					bitset<8> b1(numero1);
					bitset<8> b2(numero2);
					restabinaria = numero1 - numero2;
					bitset<8> rb(restabinaria);  	
    			    cout<<"El primer numero en binario es: "<<b1<<endl;
 					cout<<"El segundo numero en binario es: "<<b2<<endl;
 					cout<<"La resta binaria de estos dos es: "<<rb<<endl;
					break;
				}
				case 3:{
					int numero1,numero2, multiplicacion;
 					cout<<"Introduzca el primer numero (NO en Binario): ";
 					cin>>numero1;
 					cout<<"Introduzca el segundo numero(NO en Binario): ";
 					cin>>numero2;
					bitset<8> b1(numero1);
					bitset<8> b2(numero2);
					multiplicacion = numero1 * numero2;
					bitset<8> mb(multiplicacion);  	
    			    cout<<"El primer numero en binario es: "<<b1<<endl;
 					cout<<"El segundo numero en binario es: "<<b2<<endl;
 					cout<<"La multiplicacion binaria de estos dos es: "<<mb<<endl;
					break;
				}
				case 4:{
					int numero1,numero2,division;
 					do{
 						cout<<"Introduzca el primer numero (NO en Binario y no debe ser menor al divisor): ";
 						cin>>numero1;
 						cout<<"Introduzca el segundo numero(NO en Binario): ";
 						cin>>numero2;
					}while(numero1<numero2);
					bitset<8> b1(numero1);
					bitset<8> b2(numero2);
					division = numero1 / numero2;
					bitset<8> db(division);  	
    			    cout<<"El dividendo en binario es: "<<b1<<endl;
 					cout<<"El divisor en binario es: "<<b2<<endl;
 					cout<<"La division binaria de estos dos es: "<<db<<endl;
					break;
				} 
			 }
			break;
		 }
 		case 2:{
 			system("cls");
 			cout<<"CALCULO HEXADECIMAL\n";
 			cout<<"Suma           [1]\n";
 			cout<<"Resta          [2]\n";
 			cout<<"Multiplicación [3]\n";
 			cout<<"Division       [4]\n";
 			int hexa;
 			do{
    		cout<<"Elija una opción que desee usar[1-4]: ";
 	 		cin>>hexa;
 			}while(hexa<1 || hexa>4);
 			switch(hexa){
 				case 1:{
 					int numero1, numero2, suma;
 					cout<<"Introduzca el primer numero (NO en hexadecimal): ";
 					cin>>numero1;
 					cout<<"Introduzca el segundo numero(NO en hexadecimal): ";
 					cin>>numero2;
 					suma = numero1 + numero2;
 					cout<<"El primer numero en hexadecimal es: "<<hex<<numero1<<endl;
 					cout<<"El segundo numero en hexadecimal es: "<<hex<<numero2<<endl;
 					cout<<"La suma hexadecimal de estos dos es: "<<hex<<suma<<endl;
					break;
				 }
 				case 2:{
 					int numero1, numero2, resta;
 					do{
 						cout<<"Introduzca el primer numero (NO en hexadecimal y debe ser mayor): ";
 						cin>>numero1;
 						cout<<"Introduzca el segundo numero(NO en hexadecimal): ";
 						cin>>numero2;
					 }while(numero1<numero2);
 					resta = numero1 - numero2;
 					cout<<"El primer numero en hexadecimal es: "<<hex<<numero1<<endl;
 					cout<<"El segundo numero en hexadecimal es: "<<hex<<numero2<<endl;
 					cout<<"La resta hexadecimal de estos dos es: "<<hex<<resta<<endl;
					break;
				 }
 				case 3:{
 					int numero1, numero2, multiplicacion;
 					cout<<"Introduzca el primer numero (NO en hexadecimal): ";
 					cin>>numero1;
 					cout<<"Introduzca el segundo numero(NO en hexadecimal): ";
 					cin>>numero2;
 					multiplicacion = numero1 * numero2;
 					cout<<"El primer numero en hexadecimal es: "<<hex<<numero1<<endl;
 					cout<<"El segundo numero en hexadecimal es: "<<hex<<numero2<<endl;
 					cout<<"La multiplicacion hexadecimal de estos dos es: "<<hex<<multiplicacion<<endl;
					break;
				 }
 				case 4:{
 					int numero1, numero2, division;
 					cout<<"Por favor una division exacta :)"<<endl;
 					do{
 						cout<<"Introduzca el primer numero (NO en hexadecimal): ";
 						cin>>numero1;
 						cout<<"Introduzca el segundo numero(NO en hexadecimal): ";
 						cin>>numero2;
					 }while(numero1%numero2 != 0 );
					 division = numero1/numero2;
 					cout<<"El dividendo en hexadecimal es: "<<hex<<numero1<<endl;
 					cout<<"El divisor en hexadecimal es: "<<hex<<numero2<<endl;
 					cout<<"La division hexadecimal de estos dos es: "<<hex<<division<<endl;
					break;
				 }
			 } 
			 break;
		}
 		case 3:{
 			system("cls");
 			cout<<"CALCULO OCTAL\n";
 			cout<<"Suma           [1]\n";
 			cout<<"Resta          [2]\n";
 			cout<<"Multiplicación [3]\n";
 			cout<<"Division       [4]\n";
 			int octal;
 			do{
    		cout<<"Elija una opción que desee usar[1-4]: ";
 	 		cin>>octal;
 			}while(octal<1 || octal>4);
 			switch(octal){
 				case 1:{
 					int numero1, numero2, suma;
 					cout<<"Introduzca el primer numero (NO en octal): ";
 					cin>>numero1;
 					cout<<"Introduzca el segundo numero(NO en octal): ";
 					cin>>numero2;
 					suma = numero1 + numero2;
 					cout<<"El primer numero en octal es: "<<oct<<numero1<<endl;
 					cout<<"El segundo numero en octla es: "<<oct<<numero2<<endl;
 					cout<<"La suma octal de estos dos es: "<<oct<<suma<<endl;
					break;
				 }
 			    case 2:{
 			    	int numero1, numero2, resta;
 					do{
 						cout<<"Introduzca el primer numero (NO en octal y debe ser mayor): ";
 						cin>>numero1;
 						cout<<"Introduzca el segundo numero(NO en octal): ";
 						cin>>numero2;
					 }while(numero1<numero2);
 					resta = numero1 - numero2;
 					cout<<"El primer numero en octal es: "<<oct<<numero1<<endl;
 					cout<<"El segundo numero en octal es: "<<oct<<numero2<<endl;
 					cout<<"La resta octal de estos dos es: "<<oct<<resta<<endl;
					break;
				 }
				case 3:{
					int numero1, numero2, multiplicacion;
 					cout<<"Introduzca el primer numero (NO en octal): ";
 					cin>>numero1;
 					cout<<"Introduzca el segundo numero(NO en octal): ";
 					cin>>numero2;
 					multiplicacion = numero1 * numero2;
 					cout<<"El primer numero en octal es: "<<oct<<numero1<<endl;
 					cout<<"El segundo numero en octal es: "<<oct<<numero2<<endl;
 					cout<<"La multiplicacion octal de estos dos es: "<<oct<<multiplicacion<<endl;
					break;
				}
				case 4:{
					int numero1, numero2, division;
 					cout<<"Por favor una division exacta :)"<<endl;
 					do{
 						cout<<"Introduzca el primer numero (NO en octal): ";
 						cin>>numero1;
 						cout<<"Introduzca el segundo numero(NO en octal): ";
 						cin>>numero2;
					 }while(numero1%numero2 != 0 );
					 division = numero1/numero2;
 					cout<<"El dividendo en octal es: "<<oct<<numero1<<endl;
 					cout<<"El divisor en octal es: "<<oct<<numero2<<endl;
 					cout<<"La division octal de estos dos es: "<<oct<<division<<endl;
					break;
				}
			 }
			break;
		 }	
	 }
}
