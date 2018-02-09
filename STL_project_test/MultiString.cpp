#include"MultiString.h"
#include<iostream>
#include<string>


using namespace std;

MultiString::MultiString() {
	
}

MultiString::~MultiString() {

}

void MultiString::DispOnScreen(void) {
	cout << "Lecture de la multimap en cours...\n" << endl;
	for (IMap = SIMap.begin(); IMap != SIMap.end(); IMap++) {
		cout << "Case " << IMap->second << "\tvaleur: " << IMap->first << endl;
	}
}

void MultiString::AddValues(void) {
	bool val = true;
	string str;
	string end("end");
	int entier;

	cout << "Debut de la saisie..." << endl;

	while (val) {
		cout << "Veuillez saisir une phrase\n" << endl;
		getline(cin, str);
		if (str.compare(end) == 0)
			val = false;

		else {
			cout << "Veuillez saisir la clé associée...\n" << endl;
			cin >> entier;
			if (entier != 0)
				SIMap.insert(pair<int, string>(entier, str));
			else cout << "Impossible d'ajouter cette valeur, incorrect..." << endl;
		}
	}
}

void MultiString::FindByKey(void) {
	string nomS;
	int entier;
	bool val = true;


	while (val) {
		cout << "Veuillez saisir la clé associée à la phrase recherchée...\n" << endl;
		cin >> entier;

	
		IMap = SIMap.find(entier);
		if (IMap != SIMap.end())
			cout << "La valeur associée à la clé " << entier << " est " << IMap->second << endl;

		else {
			int valeur = entier;
			while (IMap == SIMap.end()) {
				valeur++;
				IMap = SIMap.find(entier);
			}
			cout << "La valeur avec la clé la plus proche de " << entier << " présente dans le tableau est " << valeur << "dont la valeur est la suivante: " << endl;
			cout << "\t" << IMap->second << endl;
		}
	}	
}

void MultiString::DeleteFromInputLetters(void) {
	unsigned int uiBoucle;
	string valeur;
	string correction;

	cout << "Voici le contenu de votre map avant traitement:\n" << endl;
	DispOnScreen();

	cout << "\nVeuillez rentrer votre phrase..." << endl;
	getline(cin, valeur);
	cout << "\nTraitement en cours sur votre saisie..." << endl;
	correction = DuplicationDelete(valeur);

	cout << "Les suppressions des valeurs contenant les caractères ";
	for (uiBoucle = 0; uiBoucle < correction.size(); uiBoucle++) {
		cout << correction[uiBoucle] << ", ";
	}
	cout << " ont bien été faites\n" << endl;
	cout << "Voici le contenu courant de la multimap.\n" << endl;
	DispOnScreen();

}

void MultiString::LetterFinder(string mastring) {
	unsigned int uiBoucle;
	unsigned int uiBoucle2;
	bool var = false;

	for (IMap = SIMap.begin(); IMap != SIMap.end();) {
		for (uiBoucle = 0; uiBoucle < mastring.size(); uiBoucle++) {
			for (uiBoucle2 = 0; uiBoucle2 < IMap->second.size(); uiBoucle++) {
				if (IMap->second[uiBoucle2] == mastring[uiBoucle]) {
					var = true;
					break;
				}
			}
			if (var == true) break;
		}
		if (var == true) {
			SIMap.erase(IMap);
			var = false;
		}
		else IMap++;
	}
}

string MultiString::DuplicationDelete(string mastring) {
	string corrige;
	unsigned int uiBoucle;
	unsigned int uiBoucle2;

	for (uiBoucle = 0; mastring.size(); uiBoucle++) {
		if (uiBoucle == 0)	corrige[0] = mastring[0];
		else {
			for (uiBoucle2 = 0; uiBoucle2 < corrige.size(); uiBoucle2++) {
				if (corrige[uiBoucle2] == mastring[uiBoucle])
					break;
				else corrige[uiBoucle2] = mastring[uiBoucle];
			}
		}
	}

	return corrige;
}