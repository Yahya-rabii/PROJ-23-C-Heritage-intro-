#pragma once
#include <iostream>

using namespace std;

class vehicule
{


private:
	
	int id;
	string marque;



public:

	vehicule(int id , string mar);
	~vehicule();
	void affich();
};