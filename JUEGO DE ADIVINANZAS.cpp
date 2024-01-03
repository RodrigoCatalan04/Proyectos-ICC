#include <iostream> 
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int i=0, nAzar, respuesta;
	string playAgain;
	cout<<"JUEGO DE ADIVINANZAS: \n";
	cout<<"Se seleccionará aletarioamente un numero entre  1  y 100 y tiene que adivinar el numero.\n";
	cout<<"- Si adivina incorrectamente, se dirá si la suposición del usuario fue demasiado alta o demasiado baja. \n";
	cout<<"- Si adivina correctamente, se informa cuantos intentos se necesitaron para obtener la respuesta correcta.\n";
	srand(time(NULL));
	do{    
		nAzar = 1 + rand() % (100 + 1 - 1);
		
		do{
			cout<<"Introduzca su respuesta[1-100]: ";
			cin>>respuesta;

    do{
      
        if(respuesta >100 || respuesta<1){
          cout<<"Ingrese un numero correcto: ";
          cin>>respuesta;
        }
      
			}while(respuesta>100 || respuesta<1);
      if(respuesta > nAzar && respuesta<=100){
				cout<<"Nop! Es un numero menor."<<endl;
				i++;
			}
			else if(respuesta < nAzar && respuesta>=1){
				cout<<"No! Es un numero mayor."<<endl;
				i++;
           }
        }while(respuesta != nAzar);
        i++;
		cout<<"MUY BIEN! adivinaste el numero. :)"<<endl;
    cout<<"Intentos necesitados para adivinar fueron de:"<<i<<endl;
    system("pause");
    system("cls");		
	do{
		cout<<"Le gustaria volver a jugar (Y/N )?: ";
		cin>>playAgain;
		if(playAgain != "Y" && playAgain != "y" && playAgain != "N" && playAgain != "n"){
			cout<<"Por favor ingrese una respuesta correcta (Y/N)."<<endl;
		}
    }while(playAgain != "Y" && playAgain != "y" && playAgain != "N" && playAgain != "n");
    
    if(playAgain == "Y" || playAgain=="y"){
    	i = 0;
	}
	}while(playAgain == "Y" || playAgain=="y");
	cout<<"Gracias por Jugar :)";
  }


