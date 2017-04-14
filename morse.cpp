#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <locale>
#include <sstream>
#include <fstream>
#include "morse.h"
using namespace std;

void toMorse(){

cout << "Digite uma frase (com letras maiúsculas): ";
	string text;
	cin.ignore();
   	getline(cin, text);
	cout<< text<<endl;

	char latinAlphabet[40] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', '!', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
	char morseAlphabet[40][7] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".-.-.-", "--..--", "..--..", "-.-.--", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----" };

	ofstream myfile ("morse.txt");
	
	char text2[100];


	
   strcpy (text2, text.c_str());
  
    for (int i = 0; i < text.length(); ++i)
    {
      for (int j = 0; j < sizeof(latinAlphabet); ++j)
      {
        
         if (text2[i] == latinAlphabet[j])
        
        {
         
          myfile << morseAlphabet[j] << "/";
    
        }
        else 
        {
        
        
        }
      }
      
  	}


 	 myfile.close();


	

	}


void toText(){


	char latinAlphabet[40] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', '!', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
	string line;
	string blank = (" ");
	string morse_Alphabet[40] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".-.-.-", "--..--", "..--..", "-.-.--", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----" };
	string word[40];
	

	int test=0;
	int a;
	cout<<"Salve em um arquivo 'morse.txt' o codigo morse a ser traduzido e pressione P para prosseguir"<<endl;
	cin>>a;

	ifstream myfile2 ("morse.txt");
	while( getline(myfile2, line) ){

	}  

	cout<<"Codigo Morse que será traduzido: "<<endl;
	cout<<line<<endl;
	for (int i = 0; i < line.length(); ++i)
	{
		if (line[i] != '/')
		{
		word[test]=word[test]+line[i];
		//cout<<word[test]<<endl;
		}
		else{
			
			test++;
		}
	}
	cout<<"Tradução: "<<endl;
	for (int i = 0; i < 40; ++i)
	{
		for (int j = 0; j < 40; ++j)
		{
			if (word[i] == morse_Alphabet[j])
		{
			cout<<latinAlphabet[j]+blank;
		}
	}
}

cout<<endl;
myfile2.close();

	}