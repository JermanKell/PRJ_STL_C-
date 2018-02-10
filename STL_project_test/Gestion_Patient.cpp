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
	Patient_PRJ foncteurPatient = for_each(VPat.begin(), VPat.end(), Patient_PRJ(cout));
	cout << "Priorite moyenne = " << foncteurPatient.getMoyennePriorite() << endl << "Somme totale des durees de consultations = " << foncteurPatient.getDureeTotalConsultation() << endl;
}

void Gestion_Patient::TrierIdRessourcePatient() {
	vector<Patient> NewVecPatient(VPat.size(), Patient());
	std::transform(VPat.begin(), VPat.end(), NewVecPatient.begin(), FoncteurSortResource());
	VPat = NewVecPatient;
}

void Gestion_Patient::AjouterPatient(Patient pat) {
	VPat.push_back(pat);
}
