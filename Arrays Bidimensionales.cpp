
// Crear un array bidimensional

#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int PrimerArray [2][2], SegundoArray [2][2], Multiplicacion [2][2] = {0}, Opcion;
	char Continuar = 'y';
	
	do {
		cout<<"-----Matriz 1-----"<<endl;
		for (int a = 0; a < 2; a++){
			for (int e = 0; e < 2; e++){
				cout<< "Introduzca Los Datos Del Primer Array (" <<a<<" , "<<e<<"): "; cin>> PrimerArray [a][e];   
			} 
		} cout<<endl;
		
		cout<<"-----Matriz 2-----"<<endl;
		for (int a = 0; a < 2; a++){
			for (int e = 0; e < 2; e++){
				cout<< "Introduzca Los Datos Del Segundo Array (" <<a<<" , "<<e<<"): "; cin>> SegundoArray [a][e];   
			} 
		} cout<<endl;
	
		do {
			system("cls");
			cout<< "\n\n-----Menu-----\n\n";
			cout<< "1._ Suma.\n2._ Resta.\n3._ Multiplicacion.\n4._ Cambiar Matriz"; 
			cout<< "\n\nSelecciona Una Opcion: "; cin >> Opcion;
			
			switch(Opcion){
				case 1: cout <<endl<<"-----Suma-----"<<endl;
					for (int a = 0; a < 2; a++){
						for (int e = 0; e < 2; e++){
							cout<< PrimerArray[a][e] + SegundoArray[a][e] << " "; 
						} 
						cout<<endl;
					} cout<<"\nDesea Continuar?(y/n)... "; cin >> Continuar; break;
					
				case 2:	cout <<endl<<"-----Resta-----"<<endl;
					for (int a = 0; a < 2; a++){
							for (int e = 0; e < 2; e++){
								cout<< PrimerArray[a][e] - SegundoArray[a][e] << " "; 
							} 
							cout<<endl;
						} cout<<"\nDesea Continuar?(y/n)... "; cin >> Continuar; break;
						
				case 3:cout <<endl<<"-----Multiplicacion-----"<<endl;
				
					for (int a = 0; a < 2; a++){
        				for (int e = 0; e < 2; e++){
            				for (int i = 0; i < 2; i++){
                				Multiplicacion[a][e] = Multiplicacion[a][e] + PrimerArray[a][i] * SegundoArray[i][e];
            				}
            				cout<<Multiplicacion[a][e] << " ";
        				}
        				cout<<endl;
    				}cout<<"\nDesea Continuar?(y/n)... "; cin >> Continuar; break;
				
					
				case 4: 
				Continuar = 'n';
				break;
				
				default: cout<<"Si va Puessssss...."; break;
				
				
			}
			
			
		} while(Continuar == 'y' or Continuar == 'Y');
	} while (Opcion == 4);
	
	return 0;
}



