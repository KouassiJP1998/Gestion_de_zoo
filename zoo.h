#ifndef ZOO_H
#define ZOO_H

#include "Template.h"
#include "espace.h"
#include "bassin.h"
#include "enclos.h"
#include "cages.h"
#include "animaux.h"
using namespace std;
/*

La Class Zoo contien le tableau d'espace. Elle permet d'effectuer toutes les operation autours des ses espace.

*/
class ZOO
	{
	private :
	
	ESPACE ** Zoo;
	int iTaille; 	
	

	public : 


	ZOO();
	~ZOO();
	int emplacement(string);
	
	void afficherEspace(); //affiche tout les espaces présents
	void afficherOccupant(); //affiche les occupant d'un espace

	void insertion(int, int, string);  //insert un espace
	void ajoutAnimal(bool , string , string , string ); //ajout un animal

	void suppression(int);	//supprime un espace
	void SuprimerAnimal(); //supprime un animal
	
	int card() const; //renvois iTaille
	
	bool ZooVide();	//si aucun espace present renvois true
	
	void afficherUnESPACE(int i); // affiche un espace en particulier
	
	int getNbAnimaux(int);	// retourn le nombre d'animaux present dans un espace donné


	};

#endif	
