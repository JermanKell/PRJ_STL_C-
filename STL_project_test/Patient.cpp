#include"Patient.h"
#include<iostream>


using namespace std;

Patient::Patient() {
}

Patient::Patient(string pr, string nm, int time, int priority) {
	FName = pr;
	LName = nm;
	DTime = time;
	Prio = priority;
}

Patient::~Patient() {
}

void Patient::getPIdentity(void) {
	cout << "Le patient s'appelle " << FName << " " << LName << ".\n" << endl;
}

void Patient::getCDetails(void) {
	cout << "Le patient vit à " << City << " au " << Add << "." << endl;
	cout << "Coordonnées:\t0" << phNumber << "\tCode postal: " << pCode << ".\n" << endl;
}

void Patient::getPMFile(void) {
	cout << "L'état du patient a atteint de seuil de priorité " << Prio << "." << endl;
	cout << "Il est atteint de " << curDis << ".\n" << endl;
}

void Patient::getListResources(void) {
	cout << "Liste des ids ressources:" << endl;
	for (vector<int>::iterator it = IVec.begin(); it != IVec.end(); ++it) {
		cout << *(it) << " ";
	}
	cout << endl;
}

void Patient::setCDetails(string add, string city, int postcode, int phoneNb) {
	Add = add;
	City = city;
	pCode = postcode;
	phNumber = phoneNb;
}
void Patient::setPMFile(string disease, int priority) {
	curDis = disease;
	Prio = priority;
}

void Patient::setResource(int id) {
	IVec.push_back(id);
}