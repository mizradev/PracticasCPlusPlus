////  metodo_insercion.cpp//  metodo_Insercion////  Created by Jorge Mizrain Aguilar on 11/22/15.//  Copyright (c) 2015 Jorge Mizrain Aguilar. All rights reserved.//#include <iostream>#include <ctime>#include <sys/timeb.h>//#include <conio.h>#include <time.h>#include <stdio.h>#include <cstdlib>//#include <dos.h>#define N 5000using namespace std;//Definicion de variables globaleschar Key;//definimos y inicializamos el caracter tecla que es la variable con la que trabajaremosstring resp="s";clock_t inicio, fin;double cpu_time_used;int num[N],n;// definicion de funcionesvoid F1(){	cout<<"-------------------------------------------------------------------------------------------------------------\n"<<endl;	cout<<"::::::::::::::::::::::: METODO DE ORDENAMIENTO DE INSERCION :::::::::::::::::::::::"<<endl;	cout<<"Es un algoritmo de ordenacion basado en comparaciones de elementos mayores que tiene a su izquierda para ordenarlos"<< endl;	cout<<"y seguirlo moviendo a la izquierda hasta que tenga un numero menor que el o hasta que llegue al limite. "<< endl;	cout<<"              VENTAJAS                                                  DESVENTAJAS                   "<<endl;	cout<< "1. Facil implementacion.                                              1. Lento"<< endl;	cout<< "2. Requerimientos minimos en memoria.                                 2. Realiza numerosas comparaciones."<< endl;	cout <<" ----------------------------------------------------------------------------------------------------------"<<endl;}void Menu(){	cout<< "=====================================================================================================================";	cout << "============================================//////// M E N U ////////===============================================";	cout<< "=====================================================================================================================";	cout<<"\r\n\tPresione Para..."<<endl; // imprimimos en pantalla el mensaje para poder ingresar la tecla	cout<<" f1 = Ayuda"<< endl;	cout<<" f2 = Ordenar datos del 0-10000"<< endl;	cout<<" f3 = Ordenar datos del 10001-20000"<< endl;	cout<<" f4 = Ordenar datos del 20001-30000"<< endl;	cout<<" f5 = Ordenar datos del 300001-50000"<< endl;	cout<<" f6 = Ordenar datos del 500001-100000"<< endl;		cout<<"-------------------------------------------------------"<<endl;}void Ordenar_Insercion(){	int temp;	for(int i=1;i<n;i++){		temp=num[i];		for(int j=i;(j>0)&&(temp<num[j-1]);j--){			num[j]=num[j-1];			num[j-1]=temp;		}	}}void Muestra_Vector(){	for(int t=0;t<n;t++){		cout<<num[t]<<" ";	}}void view(){	cout<<"\nAntes de Ordenar: \n";	for(int j=0;j<n;j++){		cout<<num[j]<<" ";	}}int main(int argc, char *argv[]) {	system("color f0");	system("mode 120,30");		while (resp=="s") {		Menu();		//Key = getch(); // utilizamos la funcion getch para que el programa pueda reconocer una sola tecla al presionarla y asi automaticamente trabajar con ella		//if ((Key == 0) || (Key <0)) { Key = getch();}		switch(Key){		case 59://=======================================================key F1			F1();			break;		case 60://Key F2			cout<<"Presiono F2"<<endl;;			cout<<"---------------------------------------------------"<<endl;			cout<<"Ingresa la cantidad de elementos del arreglo: "; cin>>n;			for(int i=0;i<n;i++){				num[i]=(0+rand()%9999);			}			/*Muestra numeros desordenados			*/
			view();			inicio = clock();			Ordenar_Insercion();			cout<<"\n\nOrdenamiento Metodo Insercion: \n";			Muestra_Vector();			fin = clock();			cpu_time_used = ((double) (fin - inicio)) / CLOCKS_PER_SEC;			cout<<"\nTiempo invertido = "<< (cpu_time_used * 1000.0) << " milisegundos" <<endl;			break;		case 61://======================================================= Key F3			cout<<"Presiono F3"<<endl;;			cout<<"---------------------------------------------------"<<endl;			cout<<"Ingresa la cantidad de elementos del arreglo: "; cin>>n;			for(int i=0;i<n;i++){				num[i]=(10000+rand()%9999);			}			/*Muestra numeros desordenados*/			view();			inicio = clock();			Ordenar_Insercion();			cout<<"\n\nOrdenamiento Metodo Insercion: \n";			Muestra_Vector();			fin = clock();			cpu_time_used = ((double) (fin - inicio)) / CLOCKS_PER_SEC;			cout<<"\nTiempo invertido = "<< (cpu_time_used * 1000.0) << " milisegundos" <<endl;			break;		case 62://======================================================= Key F4			cout<<"Presiono F4"<<endl;;			cout<<"---------------------------------------------------"<<endl;			cout<<"Ingresa la cantidad de elementos del arreglo: "; cin>>n;			for(int i=0;i<n;i++){				num[i]=(20000+rand()%9999);			}			/*Muestra numeros desordenados			*/			view();			inicio = clock();			Ordenar_Insercion();			cout<<"\n\nOrdenamiento Metodo Insercion: \n";			Muestra_Vector();			fin = clock();			cpu_time_used = ((double) (fin - inicio)) / CLOCKS_PER_SEC;			cout<<"\nTiempo invertido = "<< (cpu_time_used * 1000.0) << " milisegundos" <<endl;			break;			case 63:				cout<<"Presiono F5"<<endl;;				cout<<"---------------------------------------------------"<<endl;				cout<<"Ingresa la cantidad de elementos del arreglo: "; cin>>n;				for(int i=0;i<n;i++){					num[i]=(30000+rand()%29999);				}				/*Muestra numeros desordenados*/
				view();				inicio = clock();				Ordenar_Insercion();				cout<<"\n\nOrdenamiento Metodo Insercion: \n";				Muestra_Vector();				fin = clock();				cpu_time_used = ((double) (fin - inicio)) / CLOCKS_PER_SEC;				cout<<"\nTiempo invertido = "<< (cpu_time_used * 1000.0) << " milisegundos" <<endl;				break;				case 64:					cout<<"Presiono F6"<<endl;;					cout<<"---------------------------------------------------"<<endl;					cout<<"Ingresa la cantidad de elementos del arreglo: "; cin>>n;					for(int i=0;i<n;i++){						num[i]=(50000+rand()%59999);					}					view();					inicio = clock();					Ordenar_Insercion();					cout<<"\n\nOrdenamiento Metodo Insercion: \n";					Muestra_Vector();					fin = clock();					cpu_time_used = ((double) (fin - inicio)) / CLOCKS_PER_SEC;					cout<<"\nTiempo invertido = "<< (cpu_time_used * 1000.0) << " milisegundos" <<endl;					break;					case 13:						system("exit");						break;		}		system("PAUSE");		cout<< "Desea salir del programa?(S/N): " << endl;		cin >> resp;	}	return 0;}
