#ifndef ANIMAUX_H
#define ANIMAUX_H
#include <string>
using namespace std;

class ANIMAUX
{

	string sNom;
	string sespece;
	string stype;
	bool agressif;
	
	
public:

	string getESPECE() const;
	void setESPECE(const string &);

	string getNom() const;
	void setNom(const string &);

	bool getAgressif() const;
	void setAgressif(bool);

	string getTYPE() const;
	void setTYPE(const string &);

	ANIMAUX& operator=(const ANIMAUX&);
	ANIMAUX(const ANIMAUX &);
	ANIMAUX();
	void affiche() const;
	~ANIMAUX();

};

#endif
