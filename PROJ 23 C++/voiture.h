#pragma once
#include "voiture.h"
#include "vehicule.h"
#include <iostream>


class voiture : public vehicule
{

private:

	int km;

public:
	
	voiture(int k , string mar , int id);
	~voiture();
	void affich();



};