#ifndef DEF_VEC_INT_CLASS
#define DEF_VEC_INT_CLASS

#include<vector>
#include<iterator>

using namespace std;

class VecInt {
	private:
		vector<int> intVec;
		vector<int>::iterator intVIt;

	public:
		VecInt();
		~VecInt();
		inline void DispOnScreen(void); 
		void AddValues(int NbVal);
		void DeleteFromPos(int position);
		void DispOnScreen(int posMax);
		void AddValBetween(int valMin, int valMax, int addValPos, int val);
		void DeleteValBetween(int valMin, int valMax, int delValPos);
		void ClearVector(void);
};

#endif DEF_VEC_INT_CLASS
