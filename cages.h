#ifndef CAGES_H
#define CAGES_H
#include<string>
#include"espace.h"

class CAGES:public ESPACE
{

public:
	void afficher() const;
	bool fonctionTest(ANIMAUX A);// verifie si tout les paramettres spécifique au CAGES sont remplis 
	CAGES();
	~CAGES();

};

#endif
