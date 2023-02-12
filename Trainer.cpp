#include"Trainer.h"
#include<string.h>
#include<iostream>

void Trainer::set(char*na,Pokemon a,Pokemon b,Pokemon c,Pokemon d,Pokemon e,Pokemon f)
{
    strcpy(name,na);
    P[0]=a;P[1]=b;P[2]=c;P[3]=d;P[4]=e;P[5]=f;
}
void Trainer::dispoke()
{
        for(int i=0;i<6;i++)
    {
        std::cout<<' '<<i+1<<')'<<P[i].getname()<<'\t';
    }
}
void Trainer::copy(Trainer t)
{
    strcpy(name,t.name);
    P[0]=t.P[0];P[1]=t.P[1];P[2]=t.P[2];P[3]=t.P[3];P[4]=t.P[4];P[5]=t.P[5];
}
char* Trainer::getname()
{	return name;
}