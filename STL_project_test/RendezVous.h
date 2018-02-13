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
		Rendez-vous précédent pour le patient
	*/
	RendezVous * rdvPrec;

	/*
		Rendez-vous suivant pour le patient
	*/
	RendezVous * rdvSuiv;

	/*
		Rendez-vous précédent pour la ressource (planning)
	*/
	RendezVous * rdvResPrec;

	/*
		Rendez-vous suivant pour la ressource (planning)
	*/
	RendezVous * rdvResSuiv;

	/*
		Valeur max de la ressource 
			=> faire un for
	*/
	int Ressource;

	/*
		Heure du RDV fixé
	*/
	int HeureRDV;
	int dRDV;

public:
	RendezVous();
	RendezVous(int ressource, int duree, Patient & pat);
	~RendezVous();

	void setPatient(Patient * pat);
	void setRdvPrec(RendezVous * rdvPrecedent);
	void setRdvSuiv(RendezVous * rdvSuivant);
	void setHeureRDV(int heure);

	RendezVous & getRdvPrec(void);
	RendezVous & getRdvSuiv(void);
	Patient & getPatient(void);
	int getHeureRDV(void);

};


#endif // !DEF_RENDEZ_VOUS_H
