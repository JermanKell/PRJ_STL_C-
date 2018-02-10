#ifndef DEF_RENDEZ_VOUS_H
#define DEF_RENDEZ_VOUS_H

#include"Patient.h"

class RendezVous {
private:
	/*
		Pointeur sur l'objet Patient concerné par ce RDV
	*/
	Patient * patient;

	/*
		Pointeur sur l'objet RDV précédent celui la
			=> création du chainage
	*/
	RendezVous * rdvPrec;

	/*
		Pointeur sur l'objet RDV suivant celui la 
			=> suite du chainage
	*/
	RendezVous * rdvSuiv;

	int Ressouce;

public:
	RendezVous();
	~RendezVous();

	void setPatient(Patient * pat);
	void setRdvPrec(RendezVous * rdvPrecedent);
	void setRdvSuiv(RendezVous * rdvSuivant);

	RendezVous & getRdvPrec(void);
	RendezVous & getRdvSuiv(void);
	Patient & getPatient(void);

};


#endif // !DEF_RENDEZ_VOUS_H
