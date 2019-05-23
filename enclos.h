#ifndef ENCLOS_H
#define ENCLOS_H
#include <string>
#include "espace.h"


using namespace std;

class ENCLOS:public ESPACE
{
public:
	void afficher() const;
	void AjoutAnimal(ANIMAUX &);
	bool fonctionTest(ANIMAUX A);// verifie si tout les paramettres spécifique au ENCLOS sont remplis 
	ENCLOS();
	~ENCLOS();
		
};
#endif
