#include <iostream>
#include "voiture.h"
#include "vehicule.h"

using namespace std;

int main()
{
    
    
    voiture v1( 300 , "audi" , 20);

    v1.affich(); //masquage
    
    v1.vehicule::affich(); //demasquage

}
