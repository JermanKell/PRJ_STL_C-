#include"RendezVous.h"

RendezVous::RendezVous() {
	patient = nullptr;
	rdvPrec = nullptr;
	rdvSuiv = nullptr;
	rdvResPrec = nullptr;
	rdvResSuiv = nullptr;
	Ressource = 0;
	HeureRDV = 0;
	dRDV = 0;
}

RendezVous::RendezVous(int ressource, int duree, Patient & pat) {
	patient = &pat;
	Ressource = ressource;
	dRDV = duree;
}
RendezVous::~RendezVous() {
	delete patient;
	delete rdvPrec;
	delete rdvSuiv;
}

void RendezVous::setPatient(Patient * patient1) {
	patient = patient1;
}

void RendezVous::setRdvPrec(RendezVous * rdvPrecedent) {
	rdvPrec = rdvPrecedent;
}

void RendezVous::setRdvSuiv(RendezVous * rdvSuivant) {
	rdvSuiv = rdvSuivant;
}

Patient & RendezVous::getPatient() {
	return *patient;
}

RendezVous & RendezVous::getRdvPrec() {
	return *rdvPrec;
}

RendezVous & RendezVous::getRdvSuiv() {
	return *rdvSuiv;
}

int RendezVous::getHeureRDV() {
	return HeureRDV;
}

void RendezVous::setHeureRDV(int heure) {
	HeureRDV = heure;
}