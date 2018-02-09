#ifndef DEF_PATIENT_PRJ
#define DEF_PATIENT_PRJ

#include<iostream>
#include<vector>
#include<iterator>
#include"Patient.h"

using namespace std;

class Patient_PRJ {
private:
	vector<Patient> PVec;
	std::ostream & os;

	int var;
	int tailleVec;
	int Prio;
	int durCons;

public:
	Patient_PRJ(std::ostream &out, vector<Patient> vec, int taille) : os(out), PVec(vec),
		var(0), tailleVec(taille), Prio(0), durCons(0)
		{}
	void operator()(Patient patient) {
		os << "Patient:\t" << patient.getFName() << "\t" << patient.getName() << endl;
		Prio += patient.getPrio();
		durCons += patient.getDureeCons();
		
		if (var == tailleVec)
			Prio = Prio / 2;
	}

	~Patient_PRJ() {
	}
};



#endif // !DEF_PATIENT_PRJ

