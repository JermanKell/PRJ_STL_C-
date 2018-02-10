#include"RendezVous.h"

RendezVous::RendezVous() {
	patient = nullptr;
	rdvPrec = nullptr;
	rdvSuiv = nullptr;
	Ressouce = 0;
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