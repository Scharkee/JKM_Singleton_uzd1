#include "stdafx.h"
#include "Singleton.h"
#include "iostream"
#include "fstream"

using namespace std;

// Global static pointer used to ensure a single instance of the class.
Singleton* Singleton::m_pInstance = NULL;

/** This function is called to create an instance of the class.
Calling the constructor publicly is not allowed. The constructor
is private and is only called by this Instance function.
*/

Singleton* Singleton::Instance()
{
	if (!Singleton::m_pInstance)   // Only allow one instance of class to be generated.
		Singleton::m_pInstance = new Singleton;

	return Singleton::m_pInstance;
}

void Singleton::writeToLogFile()
{
	cout << "Hello Singleton world" << endl;
}

int Singleton::kiekis(char sm)
{
	char s;
	int k=0;
	ifstream in("Ivestis.txt");

	while(!in.eof()){
		in.get(s);
		if(s==sm){
			k++;
		}
	}
	return k;

}

char Singleton::getChar()
{
	char ch;

	cout<<"Iveskite norima raide:"<<endl;
	cin>>ch;
	
	return ch;

}