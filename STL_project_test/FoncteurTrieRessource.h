#ifndef DEF_FONC_SORT_PATIENT
#define DEF_FONC_SORT_PATIENT

#include"Patient.h"
#include <algorithm>

using namespace std;

class FoncteurSortResource {

public:
	Patient operator()(Patient & patient) {
		std::sort(patient.getVecId().begin(), patient.getVecId().end());
		return patient;
	}
};

#endif // !DEF_FONC_SORT_PATIENT