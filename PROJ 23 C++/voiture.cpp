#include "voiture.h"
#include "vehicule.h"
#include <iostream>

using namespace std;

voiture::voiture(int k , string m , int id  ):vehicule(id,m)
{

	cout << "constructeur classe fille" << endl;
	this->km = k;
	
}

voiture::~voiture()
{

	cout << "destructeur classe fille" << endl;

}


void voiture::affich()
{

	this->vehicule::affich();
	cout << "affich de la classe fille" << endl;
	cout << "kilometrage :  " << this-> km <<endl;


}
