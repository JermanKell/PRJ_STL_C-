#ifndef DEF_STRUCT_SET
#define DEF_STRUCT_SET

#include<set>
#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

class StructSet {
private:
	struct S_Coord
	{
		double d_X;
		double d_Y;

		void AddPos(double posX, double posY);
	};
	set<S_Coord> EnsSet;	
	set<S_Coord>::iterator itEnsSet1;
	set<S_Coord>::iterator itEnsSet2;

	vector<vector<double>> vecTab;
	


public:
	friend bool operator<(const S_Coord & s1, const S_Coord & s2) {
		return s1.d_X < s2.d_X;
	}
	StructSet(double * DTable);
	~StructSet();

	void ShowCoord(void) {
		unsigned int id = 1;
		double valX;
		double valY;
		for (itEnsSet1 = EnsSet.begin(); itEnsSet1 != EnsSet.end(); itEnsSet1++) {
			valX = itEnsSet1->d_X;
			valY = itEnsSet1->d_Y;
			cout << "S_Coord " << id << ": " << "\n" << endl;
			cout << "\t" << valX << "\t" << valY << endl;
			id++;
		}
	}

	void CalculDistanceVec(void);

	void DistancePoints(int ptX, int ptY);

};

#endif DEF_STRUCT_SET
