#ifndef DEF_GESTION_PATIENT_H
#define	DEF_GESTION_PATIENT_H

#include"Patient.h"
#include"RendezVous.h"
#include<vector>

class Gestion_Patient {
private:
	vector<Patient> VPat;
	vector<Patient>::iterator itPrio;

	vector<RendezVous> RDVector;
	vector<RendezVous>::iterator RDVecIterator;

	bool Tri(Patient & patient1, Patient & patient2);

public:
	Gestion_Patient();
	~Gestion_Patient();

	void Ecriture(void);
	void TrierIdRessourcePatient(void);
	void AjouterPatient(Patient pat);

	void TriParPrio(void);


};

#endif DEF__GESTION_PATIENT_H