// SingletonJKM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Singleton.h"
#include <iostream>

using namespace sstd;

int main()
{
	//kintamuju apsibrezimai
	char s,sm,sd;

	//pasiemam 1 raide konsoline ivestimi
	s=Singleton::Instance()->getChar()

	//didziosios ir mazosios raides
	sm=tolower(s);
	sd=toupper(s);;

	//isvedama raide ir jos ASCII kodas
	cout<<"Ivestos raides ("<<s<<") ASCII kodas yra: "<<(int)s<<endl;

	//randamas ir isvedamas tos raides pasikartojimu skaicius ivesties faile
	int kiekis=Singleton:::Instance()->kiekis(s);
	cout<<"Ivestyje "<<s<<" raidziu yra: "<<kiekis<<endl;

    return 0;
}

