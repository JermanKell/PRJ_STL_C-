// STL_project_test.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "VecInt.h"
#include"S_coord.h"
#include"MultiString.h"
#include"Exo_4_STL.h"
#include"Gestion_Patient.h"
#include"Patient.h"


#include<vld.h>
#include<iostream>


using namespace std;

int main()
{
	unsigned int uiBoucle;

	Gestion_Patient * gestion = new Gestion_Patient();

	for (uiBoucle = 0; uiBoucle < 4; uiBoucle++) {
		Patient * pat = new Patient("bob", "marley", uiBoucle, uiBoucle + 1);
		gestion->AjouterPatient(*pat);
		delete pat;
	}

	gestion->Ecriture();
	delete gestion;

    return 0;
}

