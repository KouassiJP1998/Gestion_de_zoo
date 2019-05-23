#include "zoo.h"

using namespace std;





void ZOO::afficherEspace()
{
	if ( !ZooVide()) // verifie si le zoo n'est pas vide
	{
		for(int i= 0; i < card(); i++)
		{
			cout << i<< ")   "<< endl;
			Zoo[i]->afficher();
		}
	}
	else
	{
		cout << "Il n'y a aucun espace " <<endl;
	}
}
void ZOO::afficherOccupant()
{
	
	int iChoix;
	int i;
	if ( !ZooVide() )
	{
		
		do // affichage des espaces 
		{
			for(i=0;i<card();i++)
			{
				cout << i <<")";
				Zoo[i]->afficher();

			}


	
			cout<<" Choissisez un espace ou afficher les animaux présents :"<<endl;
			cin >> iChoix;
		}while(iChoix<0 && iChoix > card() );
		if(Zoo[iChoix]->getNbAnimaux() == 0) // si l'espace est vide, on en peut afficher les occupant
		{
			cout << "Cet espace est vide " << endl;
		}
		else
		{
			cout << "Les occupant de l'espace sont : " << endl;
			Zoo[iChoix]->afficherAnimaux();
		}
		
			
	
			
			
		
	}
	else
	{
		cout<<" Aucun espace n'a etait créé"<<endl; // si aucun espace n'a était créé
	}

}



ZOO::ZOO ()
{
	iTaille =0;
	Zoo = NULL;
} 


ZOO::~ZOO ()
{
	delete[] Zoo;
}

void ZOO::suppression(int rang)
{
	int i = 0;
	ESPACE **tabTemp = NULL; 
	tabTemp = new ESPACE* [iTaille-1];
	for(i = 0; i < rang; i++)
		{
		tabTemp[i]=Zoo[i];
		}
	for (i = rang+1; i < iTaille; i++)
	{
		tabTemp[i]=Zoo[i];
	}
		
	iTaille--;
	delete[] Zoo;
	Zoo = tabTemp;
}


void  ZOO::insertion(int typeESPACE, int capa, string nom)
{
	int i = 0;
	BASSIN * b = NULL;
	ENCLOS * e = NULL;
	CAGES * c = NULL;

	ESPACE **tabTemp = NULL;

	
	tabTemp = new ESPACE* [iTaille+1];

	for(i = 0; i < iTaille; i++)
	{
		tabTemp[i]=Zoo[i];
	}
	iTaille++;
	cout<< iTaille<< endl;
	

	if(typeESPACE == 1 ) 
	{
		b = new BASSIN[1];
		b->setNom(nom);
		b->setCapacite(capa);
		b->afficher();
		tabTemp[i] = b;
	}
	else if(typeESPACE == 2 )
	{
		e = new ENCLOS[1];
		e->setNom(nom);
		e->setCapacite(capa);
		e->afficher();
		tabTemp[i] = e;
	}
	else if(typeESPACE == 3 )
	{
		c = new CAGES[1];
		c->setNom(nom);
		c->setCapacite(capa);
		c->afficher();
		tabTemp[i] = c;
	}
	

	if(Zoo!=NULL)
	{

		delete[] Zoo;
	}

	Zoo = tabTemp;
}

int ZOO::card() const
{
	return iTaille;
}

bool ZOO::ZooVide()
{

	if(iTaille == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}




void ZOO::afficherUnESPACE(int i)
{
	Zoo[i]->afficher();
}



void ZOO::ajoutAnimal(bool AGRESSIF, string ESPECE, string nom, string TYPE)
{
	ANIMAUX *A = NULL;
	A = new ANIMAUX[1];
	A->setAgressif(AGRESSIF);
	A->setESPECE(ESPECE);
	A->setNom(nom);
	A->setTYPE(TYPE);
							
	int i,iChoix;
	do
	{
		for(i=0;i<card();i++)
		{
			cout << i <<")";
			Zoo[i]->afficher();

		}


	
		cout<<"Dans quel espace voulez vous placer votre animal :"<<endl;
		cin >> iChoix;
	}while(iChoix<0 || iChoix >= card() );

	

		
	if (!Zoo[iChoix]->Remplis())
	{
		cout<<"L'espace est remplis, animal relaché."<<endl;
		
	}
	else if (Zoo[iChoix]->fonctionTest(*A))
	{
		cout<<"Animal ajouté" <<endl;
		Zoo[iChoix]->inserer(*A);
	}
	else
	{
		cout << "Animal non ajouté, animal relaché" <<endl;
	}

}

void ZOO::SuprimerAnimal()
{
	int i,iChoix;
	if(card() != 0)
	{
		do
		{
			for(i=0;i<card();i++)
			{
				cout << i <<")";
				Zoo[i]->afficher();

			}


	
			cout<<"Dans quel espace voullez vous supprimer votre animal :"<<endl;
			cin >> iChoix;
		}while(iChoix<0 || iChoix >= card() );
		if(getNbAnimaux(iChoix) != 0 )
		{
			do
			{
				Zoo[iChoix]->afficherAnimaux();
				cout << "Choisissez l'animal a supprimer: " ;
				cin >> i;
		
			}while(i<0 || i >= Zoo[iChoix]->getNbAnimaux() );
			Zoo[iChoix]->supprimer(i);		
		}
		else
		{
			cout << "aucun animal dans cette espace." << endl;
		}

	
	
	}
	else
	{
		cout << "Il n'y a pas d'espace créé et donc aucun animal a suprimer" << endl;
	}

}

int ZOO::getNbAnimaux(int espace) //retourne le nombre d'animal dans un espace donné
{
	
	return Zoo[espace]->getNbAnimaux();

}










