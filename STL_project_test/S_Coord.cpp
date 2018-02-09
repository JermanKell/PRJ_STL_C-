#include"S_coord.h"
#include<iostream>
#include<cmath>

StructSet::StructSet(double * DTable) {
	unsigned int uiBoucle;
	unsigned int ptr = 0;

	for (uiBoucle = 0; uiBoucle < 10; uiBoucle++) {
		S_Coord sysCoord;
		sysCoord.AddPos(DTable[ptr], DTable[ptr + 1]);
		EnsSet.insert(sysCoord);
		ptr += 2;
	}

}

StructSet::~StructSet() {

}

void StructSet::S_Coord::AddPos(double posX, double posY) {
	d_X = posX;
	d_Y = posY;
}

void StructSet::CalculDistanceVec(void) {
	double res;
	unsigned int nbVec = 0;
	for (itEnsSet1 = EnsSet.begin(); itEnsSet1 != EnsSet.end(); itEnsSet1++) {
		for (itEnsSet2 = EnsSet.begin(); itEnsSet2 != EnsSet.end(); itEnsSet2++) {
			res = sqrt(pow((itEnsSet2->d_X - itEnsSet1->d_X), 2) + pow((itEnsSet2->d_Y - itEnsSet2->d_Y), 2));
			vecTab[nbVec].push_back(res);
		}
		nbVec++;
	}
}

void StructSet::DistancePoints(int ptX, int ptY) {	
	unsigned int nb = 0;
	double distance;
	if ((ptX > 0 && ptX < 11) && (ptY > 0 && ptY < 11)) {
		itEnsSet1 = EnsSet.begin();
		itEnsSet2 = EnsSet.begin();

		while (nb < (ptX - 1))
			itEnsSet1++;
			nb++;
		nb = 0;
		while (nb < (ptY - 1))
			itEnsSet2++;
			nb++;

		distance = sqrt(pow((itEnsSet2->d_X - itEnsSet1->d_X), 2) + pow((itEnsSet2->d_Y - itEnsSet2->d_Y), 2));
		cout << "Distance: " << distance << "\n" << endl;
	}
}