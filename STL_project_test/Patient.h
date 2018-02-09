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

	vector<int> IVec;

public:
	Patient();
	Patient(string pr, string nm, int time, int priority);
	~Patient();

	void getPIdentity(void); // Patient Identity
	void getCDetails(void); // Contact details
	void getPMFile(void); // Patient Medical File

	inline string getName(void) {
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

	void setCDetails(string add, string city, int postcode, int phoneNb);
	void setPMFile(string disease, int priority);
};


#endif // !DEF_PATIENT_CLASS
