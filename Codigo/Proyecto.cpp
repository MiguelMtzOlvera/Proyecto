#include<iostream>
#include<stdlib.h>
using namespace std;

fibonacci(){
	int n,x=0,y=1,z=1;
	
	do{
		cout<<"Digite la cantidad de digitos de la serie: ";
		cin>>n;
	}while(n<=0);
	
	cout<<"1 ";
	for(int i=1;i<n;i++){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z;		
	}
	
	cout<<"\n";
	system("pause");
	return 0;
}

potencial(){
	
	int n,x,p;
	int pot;
	do{
		system("cls");
		cout<<"Digite el numero para potenciar: ";
		cin>>n;
		p=n;
		
		cout<<"Digite la potencia: ";
		cin>>x;
		
	}while(n<=0);
	
	for(int i=1; i<x; i++){
		
	pot=p*n;
	p=pot;
	cout<<p<<" ";
	}
	cout<<"\nLa Potencia de "<<n<<" elevado a la "<<x<<" es "<<pot;


}


main(){
	int opc;
	cout<<"--------------------------MENU DE OPCIONES-----------------------------"<<endl<<endl;
	cout<<"Instruciones: --Ingrese el numero de la opcion que desea hacer--"<<endl<<endl;
	cout<<" 1)Serie de Fibonacci\n 2)Factorial de un numero\n 3)Pontecial de un numero\n 4)Salir\n";
	cin >> opc;
	switch (opc){
		case 1:
			fibonacci();
		break;
		case 2:
			
		break;
		case 3:
			potencial();
		break;
		
	}
	
}

