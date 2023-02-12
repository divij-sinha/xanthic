#include<Trainer.h>

class Gamer:public Trainer
{       public:
	int i,j;          //player co-ordinates
	int bttled[15];   //array of battles with trainers, 0 is not battled 1 if battled
	Gamer();
	void restore();
	void putname(char r[]);
};