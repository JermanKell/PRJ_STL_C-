#include"Patient.h"
#include<iostream>


using namespace std;

Patient::Patient() {
}

Patient::Patient(string pr, string nm, string add, string city) {
	FName = pr;
	LName = nm;
	Add = add;
	City = city;
}

Patient::~Patient() {
}

void Patient::getPIdentity(void) {
	cout << "Le patient s'appelle " << FName << " " << LName << ".\n" << endl;
}

void Patient::getCDetails(void) {
	cout << "Le patient vit � " << City << " au " << Add << "." << endl;
	cout << "Coordonn�es:\t0" << phNumber << "\Code postal: " << pCode << ".\n" << endl;
}

void Patient::getPMFile(void) {
	cout << "L'�tat du patient a atteint de seuil de priorit� " << Prio << "." << endl;
	cout << "Il est atteint de " << curDis << ".\n" << endl;
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