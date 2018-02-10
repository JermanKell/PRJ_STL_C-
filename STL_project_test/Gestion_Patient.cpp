#include"Gestion_Patient.h"
#include"Exo_4_STL.h"
#include "FoncteurTrieRessource.h"
#include<iostream>
#include<algorithm>

using namespace std;


Gestion_Patient::Gestion_Patient() {

}
Gestion_Patient::~Gestion_Patient() {

}

void Gestion_Patient::Ecriture() {
<<<<<<< HEAD
	for_each(VPat.begin(), VPat.end(), Patient_PRJ(cout, VPat.size()));
=======
	Patient_PRJ foncteurPatient = for_each(VPat.begin(), VPat.end(), Patient_PRJ(cout));
	cout << "Priorite moyenne = " << foncteurPatient.getMoyennePriorite() << endl << "Somme totale des durees de consultations = " << foncteurPatient.getDureeTotalConsultation() << endl;
>>>>>>> d0b65432947b3b359f92d36a60a0537288d486af
}

void Gestion_Patient::TrierIdRessourcePatient() {
	vector<Patient> NewVecPatient(VPat.size(), Patient());
	std::transform(VPat.begin(), VPat.end(), NewVecPatient.begin(), FoncteurSortResource());
	VPat = NewVecPatient;
}

void Gestion_Patient::AjouterPatient(Patient pat) {
	VPat.push_back(pat);
}
