#include"Pokemon.h"

class Trainer{
	protected:
	char name[30];
	public:
	Pokemon P[6];
	void set(char*na,Pokemon a,Pokemon b,Pokemon c,Pokemon d,Pokemon e,Pokemon f);
	void dispoke();
	void copy(Trainer t);
	char* getname();
};