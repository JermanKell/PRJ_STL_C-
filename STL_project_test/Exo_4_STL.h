#ifndef DEF_PATIENT_PRJ
#define DEF_PATIENT_PRJ

#include<iostream>
#include<vector>
#include<iterator>
#include"Patient.h"

using namespace std;

class Patient_PRJ {
private:
	std::ostream & os;

	int totalPatient;
	int SommePrio;
	int durCons;

public:
	Patient_PRJ(std::ostream &out) : os(out), totalPatient(0), SommePrio(0), durCons(0)
		{}
	void operator()(Patient & patient) {
		os << "Patient:\t" << patient.getFName() << "\t" << patient.getLName() << endl;
		totalPatient++;
		SommePrio += patient.getPrio();
		durCons += patient.getDureeCons();
	}

	double getMoyennePriorite() {
		return (double)SommePrio / (double)totalPatient;
	}

	int getDureeTotalConsultation() {
		return durCons;
	}

	~Patient_PRJ() {
	}
};



#endif // !DEF_PATIENT_PRJ

