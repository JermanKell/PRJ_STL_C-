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
#include <string>
#include <random>


using namespace std;

int main()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(1, 100);//nb random compris entre 1 et 100

	unsigned int uiBoucle;

	Gestion_Patient  gestion = Gestion_Patient();

	for (uiBoucle = 0; uiBoucle < 4; uiBoucle++) {
<<<<<<< HEAD:STL_project_test/STL_project_test.cpp
		Patient pat = Patient("bob" + std::to_string(uiBoucle), "marley" + std::to_string(uiBoucle), uiBoucle, uiBoucle + 1);
=======
		Patient  pat = Patient("bob" + std::to_string(uiBoucle), "marley" + std::to_string(uiBoucle), uiBoucle, uiBoucle + 1);
		//Générer 30 ressources aléatoires
		for (unsigned int uiBoucle2 = 0; uiBoucle2 < 30; uiBoucle2++) {
			pat.setResource(dist(mt));
		}
>>>>>>> 38dbfb598b13ba977d95b95c083041c970331855:STL_project_test/main.cpp
		gestion.AjouterPatient(pat);
	}



	gestion.Ecriture();
	gestion.TrierIdRessourcePatient();
	vector<Patient> VecPatient = gestion.getVectorPatient();
	for (unsigned int uiB = 0; uiB < VecPatient.size(); uiB++) {
		VecPatient.at(uiB).getListResources();
	}


    return 0;
}

