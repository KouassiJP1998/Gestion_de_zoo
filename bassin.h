#ifndef BASSIN_H
#define BASSIN_H
#include <string>
#include "espace.h"
#include "Template.h"
/*

La classe BASSIN est une classe heritante de la classe ESPACE, elle contient la fonction permettant de verifier si un animal peut ou non être placer dans un l'espace.

*/

class BASSIN:public ESPACE
{
public:
	void afficher() const; 

	bool fonctionTest(ANIMAUX A);	// verifie si tout les paramettres spécifique au BASSIN sont remplis 



	
	BASSIN();
	~BASSIN();
};
#endif
