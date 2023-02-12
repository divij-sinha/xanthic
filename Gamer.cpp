#include"Gamer.h"
#include<string.h>

Gamer::Gamer()
{       i=50;j=50;
    for(int i=0;i<15;i++)
    {
        bttled[i]=1;
    }
}
void Gamer::restore()
{
    for(int u=0;u<6;u++)
        P[u].restore();
}
void Gamer::putname(char r[])
{       strcpy(name,r);
}