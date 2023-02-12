#include"Move.h"
#include"Pokemon.h"
#include<string.h>
#include<iostream>

Pokemon::Pokemon()
{
    strcpy(status,"00000");
}
void Pokemon::dismove()
{
    std::cout<<" 1)"<<M[0].getname()<<" 2)"<<M[1].getname()<<" 3)"<<M[2].getname()<<" 4)"<<M[3].getname();
}
void Pokemon::set(char nm[], int hp, int att1, int def1, int spd1, int idi, int t1,int t2,int a,int b,int c,int d, Move * mm)
{
    lvl=100;
    strcpy(name,nm);
    maxhp=hp;
    currhp=maxhp;
    att=att1;
    def=def1;
    speed=spd1;
    ID=idi;
    type1=t1;
    type2=t2;
    M[0]=mm[a];
    M[1]=mm[b];
    M[2]=mm[c];
    M[3]=mm[d];
}
void Pokemon::putname()
{
    std::cout<<name;
}
void Pokemon::check()
{
    std::cout<<ID+1<<' '<<name<<'\t';
}
void Pokemon::statch(char*aa)    //change stat
{
    strcpy(status,aa);
}
char* Pokemon::getname()
{		return name;
}
char* Pokemon::getstat()
{	return status;
}
int Pokemon::getid()
{	return ID;
}
int Pokemon::gethp()
{	return currhp;
}
void Pokemon::puthp(int d) //damage passed
{	currhp-=d;
}
int Pokemon::getmax()
{	return maxhp;
}
int Pokemon::getatt()
{	return att;
}
int Pokemon::getdef()
{	return def;
}
int Pokemon::getspd()
{	return speed;
}
int Pokemon::get1()
{	return type1;
}
int Pokemon::get2()
{	return type2;
}
void Pokemon::restore()
{
    currhp=maxhp;
}