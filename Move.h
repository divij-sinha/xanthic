class Move
{
	char name[30];
	int  type,ID,damage,accuracy,spec,spacc; //spec=special,spacc=special accuracy
public:

	void set(char nm[],int t,int dmg,int acc,int sp,int spa,int id);
	//GETTERS
	char* getname();
	int getid();
	int gettype();
	int getdam();
	int getacc();
	int getspec();
	int getspacc();
};