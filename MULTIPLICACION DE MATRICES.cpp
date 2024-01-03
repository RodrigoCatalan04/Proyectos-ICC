#include <iostream>
using namespace std;

int F1,C1,F2,C2,matriz1[50][50], matriz2[50][50];
int ingresardatos1();
int F_C1();
int listado1();
int ingresardatos2();
int F_C2();
int listado2();
int multiplicacion();


int main(){
  do{
  	cout<<"Para multiplicar las matrices, el numero de columnas de la matriz 01 debe ser el mismo numero de las filas de la matriz 02\n";
	F_C1();
	F_C2();
	if(C1 != F2){
		cout<<"Ingrese de nuevo las filas y columnas por favor.\n";
		system("pause");
		system("cls");
	}
  }while(C1 != F2);
  ingresardatos1();
  ingresardatos2(); 
  listado1();
  listado2(); 
  multiplicacion();
}

int F_C1(){
  cout<<"Ingrese las filas de la matriz 01: ";
  cin>>F1;
  cout<<"Ingrese las columnas de la matriz 01: ";
  cin>>C1;
}

int ingresardatos1(){
	for(int i=0;i<F1;i++){
		cout<<"Matriz 01:\n";
		for(int j=0;j<C1;j++){
			cout<<"Ingresar dato en ("<<i<<")("<<j<<"): ";
			cin>>matriz1[i][j];
		}
		system("cls");
	}
}

int F_C2(){
  cout<<"Ingrese las filas de la matriz 02: ";
  cin>>F2;
  cout<<"Ingrese las columnas de la matriz 02: ";
  cin>>C2;
}

int ingresardatos2(){
	for(int i=0;i<F2;i++){
		cout<<"Matriz 02: \n";
		for(int j=0;j<C2;j++){
			cout<<"Ingresar dato en ("<<i<<")("<<j<<"): ";
			cin>>matriz2[i][j];
		}
		system("cls");
	}
}

int listado1(){
	cout<<"Matriz 01:"<<endl;
	for(int i=0;i<F1;i++){
		for(int j=0;j<C1;j++){
			cout<<"|"<<matriz1[i][j]<<"|";
		}
		cout<<"\n";
	}
}

int listado2(){
	cout<<"Matriz 02:"<<endl;
	for(int i=0;i<F2;i++){
		for(int j=0;j<C2;j++){
			cout<<"|"<<matriz2[i][j]<<"|";
		}
		cout<<"\n";
	}
}

int multiplicacion(){
	cout<<"Multiplicacion de matrices: "<<endl;
	int matrizfinal[C1][F2];
	for(int i = 0; i<F1;i++){
		for(int j=0;j<C2;j++){
				matrizfinal[i][j] = 0;
			} 
		}	
	for(int i = 0; i<F1;i++){
		for(int j=0;j<C2;j++){
			for(int k=0;k<C1;k++){
				matrizfinal[i][j] += matriz1[i][k]*matriz2[k][j]; 
			} 
			cout<<"|"<<matrizfinal[i][j]<<"|";
		}
		cout<<"\n";
	}
	
}
