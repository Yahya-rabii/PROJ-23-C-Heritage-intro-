#include "voiture.h"
#include "vehicule.h"
#include <iostream>

using namespace std;

vehicule::vehicule(int id, string mar)
{

	cout << "constructeur classe mere" << endl;
	this->id = id;
	this->marque = mar;

}

vehicule::~vehicule()
{

	cout << "destructeur classe mere" << endl;


}

void vehicule::affich()
{

	cout << "affich de la classe mere" << endl;
	cout << "la marque :  " << this->marque << endl;
	cout << "l'id :  " << this->id << endl;


}
