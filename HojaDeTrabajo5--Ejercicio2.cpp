#include <iostream>
#include <cstdlib>
#include <fstream>
#include<string>

using namespace std;

int main(){
	float peso; 
	float altura;
	int edad; 
	char genero[1];
	int n,i;
	float total_peso = 0.00;
	float total_peso2 = 0.00;
	float total_altura = 0.00;
	float total_altura2 = 0.00;
	int total_edad = 0;
	int total_edad2 = 0;
	int opc=0, resp[1];
	
	ofstream personas;
	personas.open("Poblacion.txt", ios::out | ios::app);
	
	do{
		system("cls");
		cout<<"MENU DE OPCIONES"<<endl;
		cout<<"1. Ingresar datos de personas"<<endl;
		cout<<"2. Consultar datos de personas"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<" "<<endl;
		cout<<"Seleccione su opcion: "; 
		cin>>opc;
		
		switch(opc){
			case 1:
				do{
					system("cls");
					cout<<"Ingrese el peso de la persona: "<<endl;
					cin>>peso;
					cout<<"Ingrese la altura de la persona: "<<endl;
					cin>>altura;
					cout<<"Ingrese la edad de la persona: "<<endl;
					cin>>edad;
					cout<<"ingrese el genero de la persona (M/F): "<<endl;
					cin>>genero;
					
					personas<<"__________________"<<endl;
					personas<<"Peso: "<<peso<<endl;
					personas<<"Altura: "<<altura<<endl;
					personas<<"Edad: "<<edad<<endl;
					personas<<"Genero: "<<genero<<endl;
					personas<<"__________________"<<endl;
					
					cout<<"Desea ingresar otra persona (S/N)?"<<endl;
					cin>>resp[0];
				}while (resp[0]=='S' || resp[0]=='s');
				break;
				
				case 2:
					system("cls");
					std::ifstream personas;
					personas.open("Poblacion.txt", ios::out | ios::in);
					if(personas.is_open()){
						cout<<"DATOS DE PERSONAS"<<endl;
						cout<<"_________________"<<endl;
						while(personas.eof()){
							personas>>peso;
							personas>>altura;
							personas>>edad;
							personas>>genero;
							cout<<"Peso: "<<peso<<endl;
							cout<<"Altura: "<<altura<<endl;
							cout<<"Edad: "<<edad<<endl;
							cout<<"Genero: "<<genero<<endl;
							
							total_peso += peso;
							total_peso2 = (total_peso)/n; 
							cout<<"Promedio de peso: "<<total_peso2;
							
							total_altura += altura; 
							total_altura2 = (total_altura)/n;
							cout<<"Promedio de altura: "<<total_altura2;
							
							total_edad += edad; 
							total_edad2 = (total_edad)/n; 
							cout<<"Promedio de edad: "<<total_edad2;
							
							cout<<"_________________"<<endl;
							
							personas.close();
						}
					}
					break;
					
					case 3: 
					break;
		} while (opc !=3);
	}
	
	system("pause");
	return 0;
}

