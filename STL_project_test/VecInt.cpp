#include"VecInt.h"
#include<iostream>

VecInt::VecInt() {

}
VecInt::~VecInt() {

}

inline void VecInt::DispOnScreen(void) {
	for (intVIt = intVec.begin(); intVIt != intVec.end(); intVIt++)
		cout << *intVIt << endl;
}

void VecInt::AddValues(int NbVal) {
	unsigned int uiBoucle;
	int maVariable;

	for (uiBoucle = 0; uiBoucle < NbVal; uiBoucle++) {
		cin >> maVariable;
		intVec.push_back(maVariable);
	}
}

/*
	Description: Supprime un entier à une position précise
		compris entre 1 et la taille du vector+1
*/
void VecInt::DeleteFromPos(int position) {
	if (position > 0 && position < intVec.size())
		intVec.erase(intVec.begin() + position - 1);
	VecInt::DispOnScreen();
}

/*
	Desc: Entrer la position max
*/
void VecInt::DispOnScreen(int posMax) {
	unsigned int uiBoucle;
	for (uiBoucle = 0; uiBoucle < posMax - 1; uiBoucle++)
		cout << intVec[uiBoucle] << endl;
}

void VecInt::AddValBetween(int valMin, int valMax, int addValPos, int val) {
	if (addValPos > valMin - 1 && addValPos < valMax + 1)
		intVIt = intVec.begin() + addValPos - 1;
		intVec.insert(intVIt, 1, val);

	VecInt::DispOnScreen();
}

void VecInt::ClearVector(void) {
	intVec.clear();
}

void VecInt::DeleteValBetween(int valMin, int valMax, int delValPos) {
	if (delValPos > valMin - 1 && delValPos < valMax + 1)
		intVec.erase(intVec.begin() + delValPos - 1);
}