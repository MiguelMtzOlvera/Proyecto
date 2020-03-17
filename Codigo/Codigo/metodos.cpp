#include "Class.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Proyecto::Proyecto(int _n1,int _n2,int _res,int _x,int _x1,int _y,int _y1,int _res1, bool _print){
	n1=_n1;
	n2=_n2;
	res=_res;
	x=_x;
	x1=_x1;
	y=_y;
	y1=_y1;
	res1=_res1;
	print=_print;
}

Proyecto po=Proyecto(0,0,0,0,0,0,0,0,true);

int Proyecto::fibonacci(int n1, bool print = true){   //   METODO PARA LA SERIE FINBONACCI
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

int Proyecto::Seriefactorial(int n1, int n2,int x){   //   METODO DE EL FACTORIAL DE UN NUMERO
        n1=n1+1;
		if (n1>n2){
        cout<<"=";
        }else{
        cout<<x<<" x ";
        x=x-1;
        Seriefactorial(n1,n2,x);
		}
}

int Proyecto::factorial(int y){   //   METODO DE EL FACTORIAL DE UN NUMERO
        int r=0;
        if (y==1){
        return 1;
        }
        cout<<r;
		r=y*factorial(y-1) ;
        return (r) ;
}

Proyecto::potencia(int x,int x1, int y,int y1,int res1){   //   METODO DE POTENCIAL DE UN NUMERO
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

Proyecto::menu(){
	int opc;
	cout<<"          --------------------------MENU DE OPCIONES-----------------------------"<<endl<<endl;
	cout<<"             Instruciones: --Ingrese el numero de la opcion que desea hacer--"<<endl<<endl;
	cout<<endl<<"1)Serie de Fibonacci\n2)Factorial de un numero\n3)Pontecial de un numero\n4)Salir\n"<<endl;
	cin >> opc;
	switch (opc){
		case 1:
			system("cls");
			cout<<"          --------------------------SERIE DE FIBONACCI-----------------------------"<<endl<<endl;
			cout<<endl<<"Digite la cantidad de digitos de la serie: ";
		    cin>>n1;
		    if(n1==0){
		    	cout<<endl<<"ERROR 404 INGRESE UN NUMERO MAYOR A 0"<<endl<<endl;
		    	system("pause");
		    	system("cls");
            	po.menu();
			}else{
				cout<<endl<<"   --La Serie de Fibonnacci del numero--"<<n1<<" Es: "<<endl<<endl;
			    fibonacci(n1,print);
			    cout<<endl<<endl;
			    system("pause");
			    system("cls");
            	po.menu();
			}
		break;
		case 2:
			system("cls");
			cout<<"          --------------------------FACTORIAL DE UN NUMERO-----------------------------"<<endl<<endl;
            cout<<endl<<"Digite un numero: "<<endl;
            cin>>n2;
            n1=0;
            x=n2;
            y=n2;
            if(n2==0){
            	cout<<endl<<"ERROR 404 INGRESE UN NUMERO MAYOR A 0"<<endl<<endl;
            	system("pause");
            	system("cls");
            	po.menu();
			}else{
				cout<<endl<<"   --El proceso del factorial del numero--"<<endl<<endl;
				Seriefactorial(n1,n2,x);
                res=factorial(y);
				cout<<endl<<"El factorial de "<<y<<" es: "<<res<<endl<<endl;
				system("pause");
				system("cls");
            	po.menu();
            }
		break;
		case 3:
 			system("cls");
			cout<<"          --------------------------POTENCIAL DE UN NUMERO-----------------------------"<<endl<<endl;
            cout <<endl<<"Digite la base: ";
            cin >> x;
            x1=x;
            if(x==0){
            	cout<<endl<<"ERROR 404 INGRESE UN NUMERO MAYOR A 0"<<endl<<endl;
            	system("pause");
                system("cls");
                po.menu();
			}else{
			cout<<endl<<"Digite el exponente: ";
            cin >> y;
            if(y==0){
            	cout<<endl<<endl<<"Resultado: " <<x << " elevado a " << y << " = " <<"1"<<endl<<endl;
            	system("pause");
            system("cls");
            po.menu();
			}if(y==1){
				cout<<endl<<endl<<"Resultado: " <<x << " elevado a " << y << " = " <<x<<endl<<endl;
            	system("pause");
            system("cls");
            po.menu();
			}else{
			y1=0;
            cout<<endl<<"   --Proceso del potencial de un numero--"<<endl<<endl;
            cout<<endl<<endl<<"Resultado: " <<x << " elevado a " << y << " = " << potencia(x,x1,y,y1,res1)<<endl<<endl;
            system("pause");
            system("cls");
            po.menu();
			}
			}
		break;	
			case 4:
			int op;
			system("cls");
			cout<<"Seguro que deseas salir? "<<endl;
			cout<<"1. Si"<<endl;
		    cout<<"2. No" ;
		    cin>>op;
		    if(op==1){
		    	return 0;
			}
			else{
				return main();
			}
		    
		break;
		
		
		default:
			cout<<endl<<"          --ERROR 405 INGRESE UN NUMERO DE OPCION CORRECTO---";
			system("pause");
            po.menu();
	}
}
