#ifndef DEF_GESTION_PATIENT_H
#define	DEF_GESTION_PATIENT_H

#include"Patient.h"
#include<vector>

class Gestion_Patient {
public:
	vector<Patient> VPat;

	Gestion_Patient();
	~Gestion_Patient();

	void Ecriture(void);
	void AjouterPatient(Patient pat);
};

#endif DEF__GESTION_PATIENT_H