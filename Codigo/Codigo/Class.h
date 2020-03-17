#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include<stdlib.h>

using namespace std;

class Proyecto{
	private:
		int n1,n2,res,x,x1,y,y1,res1;
		bool print;
	public:
		Proyecto(int,int,int,int,int,int,int,int,bool);
		int fibonacci(int n1,bool print);
		int Seriefactorial(int n1,int n2, int x);
		int factorial(int y);
		potencia(int x,int x1, int y,int y1,int res1);
		menu();
};
#endif
