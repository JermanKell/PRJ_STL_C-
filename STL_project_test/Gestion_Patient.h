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
	void TrierIdRessourcePatient(void);
	void AjouterPatient(Patient pat);
	inline vector<Patient> getVectorPatient(void) { return VPat; };
};

#endif DEF__GESTION_PATIENT_H