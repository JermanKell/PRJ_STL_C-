#ifndef DEF_MULTIMAP_STRING
#define	DEF_MULTIMAP_STRING

#include<map>
#include<iterator>
#include<string>

using namespace std;

class MultiString {
private:
	multimap<int, string> SIMap;
	multimap<int, string>::iterator IMap;

	void LetterFinder(string mastring);
	string DuplicationDelete(string mastring);

public:
	MultiString();
	~MultiString();

	void DispOnScreen(void);	
	void AddValues(void);
	void FindByKey(void);
	void DeleteFromInputLetters(void);

};

#endif // !DEF_MULTIMAP_STRING

