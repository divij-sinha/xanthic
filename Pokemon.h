#include<Move.h>

class Pokemon
{

	char name[20],status[5];
	int  ID,lvl,currhp,maxhp;
	int  att,def,speed,type1,type2;
public:
	Move M[4];

	Pokemon();
    void dismove();
	void set(char nm[], int hp, int att1, int def1, int spd1, int idi, int t1,int t2,int a,int b,int c,int d,Move*mm);
	void putname();
	void check();
	void statch(char*aa);    //change stat
	char* getname();
	char* getstat();
	int getid();
	int gethp();
	void puthp(int d); //damage passed;
	int getmax();
	int getatt();
	int getdef();
	int getspd();
	int get1();
	int get2();
	void restore();
};
