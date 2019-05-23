
#include <string>
#include <iostream>
#include "espace.h"
#include "animaux.h"



using namespace std;




ESPACE::ESPACE ()
{
	iCapacite = 0;
} 

ESPACE::~ESPACE ()
{
} 

void ESPACE::afficher() 
{
	cout << " *------------------------* "<< endl;
	cout << "Nom de l'espace : " << getNom() << endl;
	cout << "Capacité de l'espace : " <<getCapacite() << endl;
	cout << " *------------------------* "<< endl;
}
string ESPACE::getEspeceTab()
{
	
	return (tabAnimaux[0]->getESPECE());
}
bool ESPACE::getAgressifTab()
{
	return (tabAnimaux[0]->getAgressif());
}



void ESPACE::afficherAnimaux()
{
	cout <<tabAnimaux.card() << endl;
	for(int i = 0; i < tabAnimaux.card(); i++)
	{
		cout << i<< ")" << endl;
		tabAnimaux[i]->affiche();
	}
	
}
bool ESPACE::fonctionTest(ANIMAUX A)
{
	return(false); //empeche un warning de s'afficher.
	
}

bool ESPACE::Vide()
{
	if (tabAnimaux.card()==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}



bool ESPACE::Remplis()
{

	if (!(tabAnimaux.card() < iCapacite))
	{
		return false;
	}
	else
	{
		return true;
	}
} 



void ESPACE::setCapacite(int taille)
{
	iCapacite = taille;
}

int ESPACE::getCapacite() const
{
	return (iCapacite);
}



void ESPACE::inserer(ANIMAUX & A)
{
	getTabAnimaux()->inserer(A);
}

void ESPACE::supprimer(int rang)
{
	getTabAnimaux()->supprimer(rang);
}
 

Tab<ANIMAUX>* ESPACE::getTabAnimaux()
{
	return & tabAnimaux;
}

int ESPACE::getNbAnimaux()
{
	return tabAnimaux.card();
}
 void ESPACE::setNom(const string& n)
{
	
	sNom = n;
}

string ESPACE::getNom() const
{

	return (sNom);

}


















