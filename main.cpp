#include <iostream>
#include "morse.h"
using namespace std;

int main(){

	
	int x=0;
	cout << "1  Converter uma frase em código Morse"<<endl;
	cout << "2  Converter um arquivo com código Morse para texto"<<endl;
	cout << "3  SAIR"<<endl;
	cin>>x;

	if(x==1)
	{
	
	toMorse();

	}

	if(x==2)
	{

		toText();
	}


return 0;
}