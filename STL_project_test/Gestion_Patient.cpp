#include"Gestion_Patient.h"
#include"Exo_4_STL.h"
#include<iostream>
#include<algorithm>

using namespace std;


Gestion_Patient::Gestion_Patient() {

}
Gestion_Patient::~Gestion_Patient() {

}

void Gestion_Patient::Ecriture() {
	for_each(VPat.begin(), VPat.end(), Patient_PRJ(cout, VPat, VPat.size()));
}

void Gestion_Patient::AjouterPatient(Patient pat) {
	VPat.push_back(pat);
}