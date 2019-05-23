#ifndef ESPACE_H
#define ESPACE_H

#include <string>
#include "animaux.h"
#include "Template.h"
/*

La classe ESPACE contien un tableau d'animaux. ELle apporte aussi les fonctions permettant de modifier ou afficher celui ci.

*/
using namespace std;
class ESPACE
{
	
	int iCapacite;
	string sNom;
	Tab<ANIMAUX> tabAnimaux; //Tableau d'animaux via template


	public:

	ESPACE();
	virtual ~ESPACE();	
	virtual void afficher();

	void setCapacite(int); 
	int getCapacite() const;
	string getNom() const;
	void setNom(const string&);

	string getEspeceTab(); //retourne l'espece du premier animal dans tabAnimaux
	bool getAgressifTab(); // retourne l'agressivité du premier animal dans tabAnimaux. Si le premier animal est agressif,les autres le seront aussi, et inversement.

	Tab<ANIMAUX>* getTabAnimaux(); //retourn tabAnimaux
	
	void inserer(ANIMAUX &); //insere un animal dans tabAnimaux
	void supprimer(int); // suprime l'animal au rang donné
	

	void afficherAnimaux(); //afficher les animaux present dans tabAnimaux
	

	int getNbAnimaux();//recupere le nombre d'animaux dans tabAnimaux, fonction utilisé pour eviter les erreurs de type " PRIVATE"

	bool Remplis(); //verifie si la taille du tableau n'est pas egale a la capacité donné a la creation de l'espace
	bool Vide(); // verifie si le tableau est vide
	
	virtual bool fonctionTest(ANIMAUX);
	
};
#endif

















