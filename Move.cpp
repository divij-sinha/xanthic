#include"Move.h"
#include<string.h>

void Move::set(char nm[],int t,int dmg,int acc,int sp,int spa,int id)
{
    ID=id;
    strcpy(name,nm);
    type=t;
    damage=dmg;
    accuracy=acc;
    spec=sp;
    spacc=spa;
} 