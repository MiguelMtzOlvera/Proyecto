#include<iostream>
#include<stdlib.h>

using namespace std;

int fibonacci(int n1, bool print = true){   //   METODO PARA LA SERIE FINBONACCI
  int r = 0;
  int n2=n1;
  
  if( n1 > 0 ){
    
	if( n1 < 2 )
      r = 1;
    else
     r = fibonacci(n1-1,false) + fibonacci(n1-2,false);
    
	if(print){
      fibonacci(n1-1);
      cout<< r << ' ';
    }
  }

}

int factorial(int n2){   //   METODO DE EL FACTORIAL DE UN NUMERO
        int r;
        if (n2==1){
        return 1;
        }
        r=n2*factorial(n2-1 ) ;
        return (r) ;
}

potencia(int x,int x1, int y,int y1,int res1){   //   METODO DE POTENCIAL DE UN NUMERO
	y1=y1+1;
	if (y1==y){
		return res1;
	}else{
	res1=x*x1;
	x=res1;
	cout<<x<<" ";
	potencia(x,x1,y,y1,res1);
 }
}

main(){
	int opc;
	cout<<"          --------------------------MENU DE OPCIONES-----------------------------"<<endl<<endl;
	cout<<"             Instruciones: --Ingrese el numero de la opcion que desea hacer--"<<endl<<endl;
	cout<<endl<<"1)Serie de Fibonacci\n2)Factorial de un numero\n3)Pontecial de un numero\n4)Salir\n"<<endl;
	cin >> opc;
	switch (opc){
		case 1:
			int n1,n11;
			cout<<endl<<"Digite la cantidad de digitos de la serie: ";
		    cin>>n1;
		    if(n1==0){
		    	cout<<endl<<"ERROR 404 INGRESE UN NUMERO MAYOR A 0"<<endl<<endl;
		    	system("pause");
		    	
			}else{
				cout<<endl<<"La Serie de Fibonnacci del numero: "<<n1<<" Es: "<<endl<<endl;
			    fibonacci(n1);
			    cout<<endl<<endl;
			    system("pause");
			}
		break;
		case 2:
			int n2,res;
            cout<<endl<<"Digite un numero: "<<endl;
            cin>>n2;
            if(n2==0){
            	cout<<endl<<"ERROR 404 INGRESE UN NUMERO MAYOR A 0"<<endl<<endl;
            	system("pause");
			}else{
				res=factorial(n2);
                cout<<endl<<"El factorial de "<<n2<<" es: "<<res<<endl<<endl;
                return 0;
			}
		break;
		case 3:
 			int x,x1,y,y1,res1;
            cout <<endl<<"Digite la base: ";
            cin >> x;
            x1=x;
            if(x==0){
            	cout<<endl<<"ERROR 404 INGRESE UN NUMERO MAYOR A 0"<<endl<<endl;
            	system("pause");
			}else{
				cout<<endl<<"Digite el exponente: ";
            cin >> y;
            y1=0;
            cout<<endl<<"--Proceso del potencial de un numero--"<<endl;
            cout<<endl<<endl<<"Resultado: " <<x << " elevado a " << y << " = " << potencia(x,x1,y,y1,res1)<<endl<<endl;
            system("pause");
			}
		break;	
		default:
			cout<<endl<<"          --ERROR 405 INGRESE UN NUMERO DE OPCION CORRECTO---";
	}
}
