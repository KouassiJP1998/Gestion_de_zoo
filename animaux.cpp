#include "animaux.h"

#include <iostream>

using namespace std;



string ANIMAUX::getTYPE() const
{
	return stype;

}

void ANIMAUX::setTYPE(const string &t)
{

	stype = t;
}


string ANIMAUX::getNom() const
{
	return sNom;

}

void ANIMAUX::setNom(const string &nom)
{

	sNom = nom;

}

string ANIMAUX::getESPECE() const
{
	return sespece;

}

void ANIMAUX::setESPECE(const string &e)
{

	sespece = e;


}

bool ANIMAUX::getAgressif() const
{

	return agressif;

}

void ANIMAUX::setAgressif(bool agre)
{

	agressif = agre;

}



ANIMAUX&ANIMAUX::operator=(const ANIMAUX &a)
{
	setAgressif(a.getAgressif());
	setNom(a.getNom());
	setTYPE(a.getTYPE());
	setESPECE(a.getESPECE());
	
	return (*this);
}

ANIMAUX::ANIMAUX(const ANIMAUX &a)
{

	agressif = a.getAgressif();
	sNom = a.getNom();
	setTYPE(a.getTYPE());
	setESPECE(a.getESPECE());

}
ANIMAUX::ANIMAUX()
{
 	setNom("");
	setTYPE("ttt");
	setESPECE("ttt");
	setAgressif(false);

}
void ANIMAUX::affiche() const
{
	cout << endl << "Nom : " << getNom() << endl;
	if (getAgressif() )
	{
		cout << "Agressif : oui" << endl;
	}
	else
	{
		cout << "Agressif : non" << endl;
	}
	cout << "Type : " << getTYPE() << endl;
	cout << "Espece : " << getESPECE() << endl;
		
}

ANIMAUX::~ANIMAUX()
{


}

















