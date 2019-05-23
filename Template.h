#ifndef TEMPLATE_H
#define TEMPLATE_H


#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;



template<class Ensemble>
class Tab
{
	Ensemble ** eTableau;
	int iTaille;


	public : 
	Tab();
	~Tab();
	
	int card() const;
	void inserer(Ensemble &);
	void supprimer(int);
	
	Ensemble* operator [] (int offset);
};


template<class Ensemble> Tab<Ensemble> :: Tab()
{
	iTaille = 0;
	eTableau = NULL;
}


template<class Ensemble> Tab<Ensemble> :: ~Tab()
{
	delete[] eTableau;
}



template<class Ensemble> int Tab<Ensemble> :: card() const
{
	return iTaille;
}



template<class Ensemble> void Tab<Ensemble> :: inserer(Ensemble & E)
{
	int i = 0;
	Ensemble **tabTemp = NULL; 
	tabTemp = new Ensemble* [iTaille+1];
	for(i = 0; i < iTaille; i++)
		{
		tabTemp[i]=eTableau[i];
		}

	iTaille++;
	
	tabTemp[i] =& E;
	
	delete[] eTableau;
	eTableau = tabTemp;
}



template <class Ensemble> Ensemble* Tab<Ensemble> :: operator [] (int offset)
{
	return (eTableau[offset]);
}

template<class Ensemble> void Tab<Ensemble> :: supprimer(int rang)
{

	int i = 0;
	Ensemble **tabTemp = NULL; 
	tabTemp = new Ensemble* [iTaille-1];
	for(i = 0; i < iTaille; i++)
	{
		if (i < rang)
		{
			tabTemp[i]=eTableau[i];
		}
		if( i > rang)
		{
			tabTemp[i-1]=eTableau[i];	
		}
	}

		
	iTaille--;
	delete[] eTableau;
	eTableau = tabTemp;
}
	
#endif	

