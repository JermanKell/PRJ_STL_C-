#ifndef DEF_PATIENT_CLASS
#define DEF_PATIENT_CLASS

#include<string>
#include<vector>
#include<iterator>

using namespace std;

class Patient {
private:
	string LName;
	string FName;
	string Add;
	string City;
	string curDis;

	int phNumber;
	int pCode;
	int DTime;
	int Prio;
	int IndPrio;

	vector<int> IVec;

public:
	Patient();
	Patient(string pr, string nm, int time, int priority);
	~Patient();

	void getPIdentity(void); // Patient Identity
	void getCDetails(void); // Contact details
	void getPMFile(void); // Patient Medical File
	void getListResources(void); //List of ids resources

	inline string getLName(void) {
		return LName;
	}
	inline string getFName(void) {
		return FName;
	}
	inline int getPrio(void) {
		return Prio;
	}
	inline int getDureeCons(void) {
		return DTime;
	}
	inline vector<int> & getVecId(void) {
		return IVec;
	}

	inline int getPrio(void) {
		return Prio;
	}

	inline int getIndPrio(void) {
		return IndPrio;
	}

	inline int getResource(void) {
		return 
	}

	void setCDetails(string add, string city, int postcode, int phoneNb);
	void setPMFile(string disease, int priority);
	void setResource(int id);
	inline void setPrio(int prio) {
		Prio = prio;
	}
	inline void setIndPrio(int Indprio) {
		IndPrio = Indprio;
	}

};


#endif // !DEF_PATIENT_CLASS
