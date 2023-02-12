
////////////////////////////-----COMP PROJECT-----////////////////////////////
/*			DIVIJ VENKAT SHIVESH VINAYAK
				   BAWSES
			     LIKE NEVER BEFORE
			    PREPARE TO BE BLOWN
				 PRESENTING
			      POKEMON XANTHIC
*/
#include<string.h>
#include<fstream>
#include<ncurses.h>
#include<stdio.h>
//#include<process>
//#include<dos>
//#include<graphics.h>
#include<time.h>
#include<stdlib.h>
#include"Gamer.h"

Move mm[110];
Pokemon all[49];
Trainer comp[15];

int toxflg=0;

void charizard() //function to draw charizard sprite
{
	cleardevice();
	int lwing[70]={118,240,121,225,135,203,147,193,162,185,179,179,190,192,198,213,205,222,216,210,228,201,235,203,250,231,266,213,273,220,292,186,282,180,272,167,264,162,254,155,245,150,234,148,229,118,225,99,220,85,208,85,190,90,178,101,164,115,150,130,140,144,133,162,124,183,120,199,118,213};
	int rwing[90]={481,248,484,234,485,222,486,198,483,180,476,163,468,148,464,134,457,127,446,120,433,107,417,90,409,86,406,90,401,93,396,101,391,118,386,137,386,144,383,156,368,161,358,170,346,183,338,184,356,218,360,213,364,211,369,216,372,219,378,226,381,217,385,208,392,211,396,219,399,220,404,211,409,207,416,196,426,183,430,192,441,189,456,198,467,206,474,213,478,232};
	int body[326]={294,185,300,175,300,152,296,130,295,121,285,117,278,106,282,103,286,102,282,103,278,106,269,106,266,104,264,95,260,93,260,87,260,80,262,75,275,70,283,73,292,78,302,75,308,79,314,79,318,91,339,106,340,110,335,113,327,109,324,106,318,107,318,114,322,127,325,146,330,168,333,176,340,185,346,183,354,189,362,192,383,194,396,204,406,215,425,228,427,233,423,237,422,241,420,236,417,232,415,236,418,246,407,250,408,240,405,235,410,242,403,247,400,249,395,247,395,230,382,215,377,209,367,208,351,207,360,233,365,253,381,267,395,282,400,295,400,307,394,316,391,321,394,316,400,307,419,292,432,284,440,273,446,266,442,278,433,290,423,298,408,306,400,307,408,306,423,298,433,290,442,278,446,266,446,278,437,291,428,303,407,316,393,319,388,325,406,338,406,343,403,343,402,349,395,346,395,355,355,338,352,328,358,320,342,307,354,293,362,277,363,258,354,236,334,215,320,215,304,225,296,240,288,256,291,268,290,294,284,305,304,315,325,315,342,307,325,315,304,315,284,305,274,317,262,322,269,335,265,343,265,355,
257,350,254,349,245,357,242,347,231,354,232,340,233,331,237,326,236,303,246,279,258,260,267,254,269,234,273,225,282,207,260,207,246,235,247,249,238,258,235,256,236,254,234,244,228,252,233,255,224,255,218,247,225,236,216,246,211,240,211,235,218,224,224,224,237,209,247,192,271,192,280,185,287,183};
	int eye[16]={295,81,300,80,304,81,306,82,307,86,302,87,299,85,298,82};
	int pupil[6]={295,80,301,80,301,84};
	line(260,87,263,87);
	line(263,87,275,83);
	line(275,83,280,86);
	line(280,86,286,87);
	line(286,87,293,94);
	line(293,94,304,95);
	line(304,95,308,102);
	int t1[8]={259,84,263,87,263,93,259,92};
	int t2[6]={276,85,281,86,277,90};
	setfillstyle(0,0);
	fillpoly(35,lwing);
	fillpoly(45,rwing);
	setfillstyle(0,0);
	fillpoly(163,body);
	fillpoly(8,eye);
	fillpoly(3,pupil);
	setfillstyle(0,0);
	fillpoly(4,t1);
	fillpoly(3,t2);
}
void oak()      //function to draw oak
{	clrscr();
	cleardevice();
	int oak[28]={232,93,280,103,296,134,295,107,354,91,382,126,382,171,385,208,383,266,327,312,279,312,213,262,217,223,217,129};
	int hair[60]={217,181,162,123,182,123,161,105,185,113,164,85,178,91,163,76,212,59,191,54,219,50,204,38,245,34,231,16,277,39,376,60,392,80,409,106,412,121,411,176,385,208,382,171,382,126,354,91,295,107,296,134,280,103,232,93,217,129,217,223};
	int eb1[6]={220,172,236,155,287,197};
	int eb2[6]={308,199,359,157,380,173};
	int nose[6]={292,231,292,255,284,243};
	setcolor(BLACK);
	setfillstyle(1,BROWN);
	fillpoly(14,oak);
	line(287,180,287,197);
	line(308,199,308,179);
	line(241,182,241,215);
	line(241,215,271,215);
	line(361,212,361,184);
	line(331,212,361,212);
	setcolor(RED);
	line(265,273,271,272);
	line(271,272,282,270);
	line(282,270,312,270);
	line(312,270,322,272);
	line(322,272,335,273);
	setcolor(BLACK);
	setfillstyle(1,BLACK);
	fillellipse(264,200,1,10);
	fillellipse(338,200,1,10);
	setfillstyle(1,DARKGRAY);
	fillpoly(30,hair);
	setfillstyle(1,BLACK);
	fillpoly(3,eb1);
	fillpoly(3,eb2);
	fillpoly(3,nose);
}
void dprint(char arr[])
{
	rectangle(0,350,638,479);
	for(int x=0;arr[x]!='\0';x++)
	{       rectangle(0,350,638,479);
		cout<<arr[x];
		delay(50);
	}
	rectangle(0,350,638,479);
}
void pokedex();
void lbreak(char arr[])
{       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n   ";
	dprint(arr);
}
void pokeball(int lol=0);
void map(gamer player);
void postint()
{
	gamer Player;
	clrscr();
	cleardevice();
	rectangle(0,350,638,479);
	lbreak("WELCOME TO THE WORLD OF POKEMON!");
	rectangle(0,350,638,479);
	getch();
	oak();
	lbreak("MY NAME IS OAK! PEOPLE CALL ME THE POKEMON PROF!");
	getch();
	oak();
	lbreak("THIS WORLD IS INHABITED BY CREATURES CALLED POKEMON! \n\n   FOR SOME PEOPLE, POKEMON ARE PETS. OTHER USE THEM FOR FIGHTS.\n\n   MYSELF... I STUDY POKEMON AS A PROFESSION.");
	getch();
	oak();
	lbreak("WHAT IS YOUR NAME ?\n  ");
	char na[30],temp[30];
	cin>>na;
	strcpy(temp,na);
	oak();
	int ctr=0;
	strcat(na,".DAT");
     //	ifstream dd;
      //	dd.open(na,ios::binary|ios::app);
	fstream gg;
	gg.open(na,ios::binary|ios::in|ios::out);
	lbl:
	gamer qw;
	gg.read((char*)&qw,sizeof(qw));
	if(gg.tellg()==0)
	{	lbreak(temp);
		delay(1000);
		dprint(".. GET READY TO ENTER THE WORLD OF POKEMON.. ");
		clrscr();
		cleardevice();

		pokedex();
		for(int kase=0;kase<6;kase++)
		{	cout<<"\nENTER POKEMON NO. "<<kase+1<<" : ";
			int no;
			cin>>no;
			{		qw.P[kase]=all[no];
					qw.P[kase].check();
			}
		}
		qw.putname(temp);
		gg.write((char*)&qw,sizeof(qw));
		getch();
		outtextxy(130,200,"PRESS A KEY TO START YOUR JOURNEY....");
		getch();
		gg.close();
	      //	dd.close();
		map(qw);
	}
	else
	{       gg.seekg(0);
		gg.read((char*)&Player,sizeof(Player));

		{
			ctr++;
			lbreak(temp);
			delay(2000);
			dprint("..AH YES I REMEMBER YOU!! LET'S CONTINUE ON YOUR JOURNEY");
			gg.close();
			map(Player);
		}
	}
   /*	if(ctr==0)
	{	lbreak(na);
		delay(1000);
		dprint(".. GET READY TO ENTER THE WORLD OF POKEMON.. ");
		clrscr();
		cleardevice();
		gamer qw;
		pokedex();
		for(int kase=0;kase<6;kase++)
		{	cout<<"\nENTER POKEMON NO. "<<kase+1<<" : ";
			int no;
			cin>>no;
			{		qw.P[kase]=all[no];
					qw.P[kase].check();
			}
		}
		qw.putname(na);
		gg.write((char*)&qw,sizeof(qw));
		getch();
		outtextxy(130,200,"PRESS A KEY TO START YOUR JOURNEY....");
		getch();
		gg.close();
		dd.close();
		map(qw);
	} */
}
void wally(int i,int j,int wallb,int walle,int& x,int lim)
{
	if(j>=wallb&&j<=walle)
		if(i+x==lim)
			x=0;
}
void wallx(int i,int j,int wallb,int walle,int& y,int lim)
{
	if(i>=wallb&&i<=walle)
		if(j+y==lim)
			y=0;
}
void battle2(trainer&AI,trainer& Player);
void map(gamer player)
{
	char z;
	int ch,x=0,y=-1;
	while(1)                                                               //infinite loop
	{	settextstyle(6,0,1);
		outtextxy(260,150,"THE ELITE FOUR");
		rectangle(0,0,639,379);         //main box
		rectangle(0,379,639,479);       //dialogue box
		rectangle(0,40,30,80);  	//pc
		int pc[8]={0,40,0,80,30,80,30,40};
		int path1[8]={39,0,79,0,79,310,39,310};
		int path2[8]={39,310,39,350,579,350,579,310};
		int path3[8]={539,310,539,50,579,50,579,310};
		setfillstyle(7,RED);
		fillpoly(4,pc);
		settextstyle(11,1,1);
		outtextxy(15,51,"PC");
		setfillstyle(7,BLUE);
		settextstyle(6,0,1);
		line(39,0,39,350);		//road A line1
		line(79,0,79,310);		//road A line2
		line(79,310,539,310); 		//road B line1
		line(39,350,579,350);		//road B line2
		line(539,310,539,90);		//road C line2
		line(579,350,579,50);		//road C line1
		line(539,90,140,90);		//road D line2
		line(579,50,100,50);		//road D line1
		line(140,90,140,240);		//road E line2
		line(100,50,100,280);		//road E line1
		line(140,240,500,240);		//road F line12
		line(100,280,500,280);		//road F line12
		line(500,240,500,280);          //end wall
		rectangle(310,220,330,240);   	//path to elite 4
		rectangle(209,110,440,220);     //elite 4 bosslike arena
		setcolor(WHITE);
		circle(316,118,5);
		circle(328,118,5);
		circle(340,118,5);
		circle(304,118,5);
		circle(25,60,3);                //nurse joy
		rectangle(30,55,39,65);       //path to pc
		circle(player.i,player.j,3);
		circle(44,130,3);    	        //trainer A
		circle(75,230,3);               //trainer B
		circle(300,344,3);              //trainer C
		circle(543,200,3);              //trainer D
		circle(500,55,3);               //trainer E
		circle(150,55,3);               //Trainer G
		circle(325,85,3);               //Trainer F
		circle(105,135,3);		//Trainer H
		circle(135,185,3);              //Trainer I
		circle(165,275,3);              //Trainer J
			l2:
			ch=getch();

		if(ch==72)                           //move upward
		{
			x=0;
			y=-1;
		}
		if(ch==75)                           //move left
		{
			x=-1;
			y=0;
		}
		if(ch==77)                           //move right
		{
			x=1;
			y=0;
		}
		if(ch==80)                           //move downward
		{
			x=0;
			y=1;
		}
		if(ch==27)                           //exit when esc pressed
		{          	char c;
				outtextxy(5,381,"Would you like to save the game?(y/n)");
				c=getch();
				cleardevice();
				if(c=='Y'||c=='y')
				{       char pop[30];
					strcpy(pop,player.getname());
					strcat(pop,".DAT");
					fstream filo(pop,ios::binary|ios::in|ios::out);
					charizard();
					outtextxy(5,381,"SAVING GAME DATA....");
					//charizard();
				       //	gamer lol;
				      /*	while(filo.read((char*)&lol,sizeof(lol)))
					{       int h=filo.tellg();
						if(strcmp(lol.getname(),player.getname())==0)
						{	filo.seekp(h-sizeof(lol));
							filo.write((char*)&player,sizeof(player));
							break;
						}
					}*/
					filo.seekp(0);
					filo.write((char*)&player,sizeof(player));
					delay(2000);
					outtextxy(5,399,"GAME DATA SAVED");
					getch();
					filo.close();
					exit(0);
				}
				else
				{	exit(0);
				}
		}
		wally(player.i,player.j,0  ,55 ,x, 42);
		wally(player.i,player.j,55 ,65 ,x, 33);
		wally(player.i,player.j,65 ,105,x, 42);
		wally(player.i,player.j,105,115,x, 33);
		wally(player.i,player.j,115,350,x, 42);
		wally(player.i,player.j,  0,310,x, 76);
		wally(player.i,player.j,90 ,310,x,542);
		wally(player.i,player.j,50 ,350,x,576);
		wally(player.i,player.j,90 ,240,x,137);
		wally(player.i,player.j,50 ,280,x,103);
		wally(player.i,player.j,240,280,x,497);
		wally(player.i,player.j,110,220,x,212);
		wally(player.i,player.j,110,220,x,437);
		wally(player.i,player.j,220,240,x,327);
		wally(player.i,player.j,220,240,x,313);
		wallx(player.i,player.j,39 ,79 ,y,  0);
		wallx(player.i,player.j,79 ,539,y,313);
		wallx(player.i,player.j,39 ,579,y,347);
		wallx(player.i,player.j,100,579,y, 53);
		wallx(player.i,player.j,140,539,y, 87);
		wallx(player.i,player.j,140,310,y,243);
		wallx(player.i,player.j,330,500,y,243);
		wallx(player.i,player.j,100,500,y,277);
		wallx(player.i,player.j,219,310,y,217);
		wallx(player.i,player.j,330,440,y,217);
		wallx(player.i,player.j,219,440,y,113);
		wallx(player.i,player.j,30 ,39 ,y, 58);
		wallx(player.i,player.j,30 ,39 ,y, 62);
		wallx(player.i,player.j,30 ,39 ,y,108);
		wallx(player.i,player.j,30 ,39 ,y,112);
		player.i+=x;
		player.j+=y;
		delay(20);
		cleardevice();
				if(player.i==34&&player.j==60)
				{	outtextxy(5,381,"Welcome to the Pokemon Center!May I heal your pokemon?");
					char y;
					y=getch();
					if(y=='z'||y=='Z')
					{	cleardevice();
						for(int u=0;u<6;u++)
						{	player.P[u].restore();
						}

						outtextxy(5,381,"Your Pokemon are healed!");

					}
					else;
				}

				else if(player.j==130&&player.i<100&&player.bttled[0]==1)
				{

						outtextxy(5,381,"Fisherman Bandi : The Road Ahead Is Long And Hard! Fight Me ");
						b:
						z=getch();
						if(z=='z'||z=='Z')
						{       player.bttled[0]=2;
							pokeball();
							battle2(comp[1],player);
						}
						else goto b;

				}
				else if(player.j==230&&player.i<75&&player.bttled[1]==1)
				{

						outtextxy(5,381,"Swimmer sHiVaNgI : hI ! BaTtLe mE nW! nO mErCy ");
						l3:
						z=getch();
						if(z=='z'||z=='Z')
						{       pokeball();
							battle2(comp[8],player);
							player.bttled[0]=2;

						}
						else goto l3;
							x=0;y=0;

				}

				else if(player.i==301&&player.j>300&&player.bttled[2]==1)
				{		outtextxy(5,381,"PokeManiac Atul : eh SUBBRI . ANA BATTRE ME ");
						lbl:
						z=getch();
						if(z=='z'||z=='Z')
						{       pokeball();
							player.bttled[2]=2;
							battle2(comp[2],player);
						}
						else goto lbl;


				}
				else if(player.j==200&&player.i>450&&player.bttled[3]==1)
				{		outtextxy(5,381,"BASEAddict Pratik : I've learnt all about life from");
						outtextxy(5,399,"from my BASE books!Theres no way you'll beat me! ");
						lb:
						z=getch();
						if(z=='z'||z=='Z')
						{       pokeball();
							player.bttled[3]=2;
							battle2(comp[3],player);
						}
						else goto lb;
				}
				else if(player.i==501&&player.j<100&&player.bttled[4]==1)
				{		outtextxy(5,381,"Bug Catcher NR : They call me kulla.");
						yu:
						z=getch();
						if(z=='z'||z=='Z')
						{       pokeball();
							player.bttled[4]=2;
							battle2(comp[5],player);
						}
						else goto yu;
				}
				else if(player.i==151&&player.j<100&&player.bttled[5]==1)
				{		outtextxy(5,381,"Pokemon Collector Katte : *claps and does halli dance* ");
						x:
						z=getch();
						if(z=='z'||z=='Z')
						{       pokeball();
							player.bttled[5]=2;
							battle2(comp[4],player);
						}
						else
						goto x;

				}
				else if(player.i==325&&player.j<100&&player.bttled[6]==1)
				{		outtextxy(5,381,"Hiker Pranava : GIFF ME MANAAAAAAAAAA");
						c:
						z=getch();
						if(z=='z'||z=='Z')
						{       pokeball();
							player.bttled[6]=2;
							battle2(comp[8],player);
						}
						else
						goto c;
				}
				else if(player.j==135&&player.i<350&&player.i>100&&player.bttled[7]==1)
				{
						outtextxy(5,381,"Gamer Ravi : OY MULTON!! MULTON . MULTON . MULTON ");
						l9:
						z=getch();
						if(z=='z'||z=='Z')
						{       pokeball();
							player.bttled[7]=2;
							battle2(comp[7],player);
						}
						else goto l9;
				}
				else if(player.i==165&&player.j<300&&player.j>150&&player.bttled[9]==1)
				{		outtextxy(5,381,"Shreevanth : Ey bro, is water super-effective against fire?");
						lab:
						z=getch();
						if(z=='z'||z=='Z')
						{       pokeball();
							player.bttled[8]=2;
							battle2(comp[6],player);
						}
						goto lab;
				}
				else if(player.i==305&&player.j==126&&player.bttled[10]==1)
				{		outtextxy(5,381,"ELITE 4 Venkat : I am a beacon of knowledge in a dark sea of IGNORANCE!");
						r:
						z=getch();
						if(z=='z'||z=='Z')
						{	pokeball();
							player.bttled[10]=2;
							battle2(comp[11],player);
						}
						else
						goto r;

				}
				else if(player.i==317&&player.j==126&&player.bttled[11]==1)
				{		outtextxy(5,381,"ELITE 4 Divij : My name is Divij.I am a master of Fire-type Pokemon");
						y:
						z=getch();
						if(z=='z'||z=='Z')
						{	pokeball();
							player.bttled[11]=2;
							battle2(comp[9],player);
						}
						else
						goto y;

				}
				else if(player.i==329&&player.j==126&&player.bttled[12]==1)
				{		outtextxy(5,381,"ELITE 4 Vinayak : My name is Vinayak. I am a master of Electric-type Pokemon.");
						n:
						z=getch();
						if(z=='z'||z=='Z')
						{	pokeball();
							player.bttled[12]=2;
							battle2(comp[12],player);
						}
						else
						goto n;

				}
				else if(player.i==341&&player.j==126&&player.bttled[13]==1)
				{		outtextxy(5,381,"ELITE 4 Shivesh : After this battle, I shall wash my blood-stained claws in the river.");
						i:
						z=getch();
						if(z=='z'||z=='Z')
						{	pokeball();
							player.bttled[13]=2;
							battle2(comp[10],player);
						}
						else
						goto i;

				}

		}


	getch();
}
void healthpl(pokemon pl,int t1,int dmg);
void healthai(pokemon pl,int t1,int dmg);
int dmg(pokemon& attack, pokemon& victim,int mo);
void battlegrfx(int dmg,int dmg2,pokemon pl,pokemon ai)
{
	double x=((double)pl.gethp()*200);
	int y=x/pl.getmax();
	int t1=y;
	int c1=0,c2=0;
	if(t1<=20)
		c1=2;
	else if(t1<=100)
		c1=12;
	x=((double)ai.gethp()*200);
	y=x/ai.getmax();
	int t2=y;
	if(t2<=20)
		c2=2;
	else if(t2<=100)
		c2=12;
	clrscr();
	cleardevice();
	outtextxy(300,200,pl.getname());
	outtextxy(140,60,ai.getname());
	int ourhp[8]={300,290,300+t1,290,300+t1,310,300,310};
	int aihp[8]={140,150,140+t2,150,140+t2,170,140,170};
	setcolor(WHITE);
	rectangle(300,290,500,310);
	rectangle(140,150,340,170);
	setfillstyle(1,2+c2);
	fillpoly(4,aihp);
	setfillstyle(1,2+c1);
	fillpoly(4,ourhp);
	settextstyle(6,0,3);
	setcolor(YELLOW);
	outtextxy(250,10,"Pok\202mon Battle");
	setcolor(LIGHTRED);
	rectangle(240,10,405,40);
	setcolor(WHITE);
	rectangle(0,350,638,479);
	line(0,425,638,425);
	outtextxy(300,200,pl.getname());
	outtextxy(140,60,ai.getname());
	healthai(ai,t2,dmg2);
	healthpl(pl,t1,dmg);

}
void batlpr(int dmg,int dmg2,pokemon pl,pokemon ai,char arr[])
{
	battlegrfx(dmg,dmg2,pl,ai);
	outtextxy(300,200,pl.getname());
	outtextxy(140,60,ai.getname());
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n   ";
	rectangle(0,350,638,479);
	for(int x=0;arr[x]!='\0';x++)
	{       rectangle(0,350,638,479);
		cout<<arr[x];
		delay(50);
	}
	rectangle(0,350,638,479);
	outtextxy(300,200,pl.getname());
	outtextxy(140,60,ai.getname());
}
int special(pokemon& attack,pokemon& victim,int*mo);
int changepoke(gamer player)
{	player.dispoke();
	rectangle(0,350,638,479);
	char ch=getch();
	int a=(int)ch-48;
	return a;
}
float modifier(int a,int d);
float STAB(int p,int m);
int dmg(pokemon& attack,pokemon& victim,int*ms)
{
	int mo=*ms;
	randomize();
	int ac=(1+random(100));
	if(attack.M[mo].getacc()<=ac||attack.M[mo].getacc()==100)
	{
		float d=(double)((((((double)(2*100)+10))*(attack.getatt()))*attack.M[mo].getdam())+2)*85*modifier(attack.M[mo].gettype(),victim.get1())*modifier(attack.M[mo].gettype(),victim.get2())*STAB(attack.get2(),attack.M[mo].gettype())*STAB(attack.get1(),attack.M[mo].gettype());
		d=d/victim.getdef();

		d=d/25000;
		float eff=(modifier(attack.M[mo].gettype(),victim.get1())*modifier(attack.M[mo].gettype(),victim.get2()));
		if(eff>=2)  	//4,2
		{	dprint("\t SUPER EFFECTIVE");

		}
		else if(eff>=1)   	//1
		{	dprint(" ");
		}
		else if(eff>=0.25)  	//0.5,0.25
		{	dprint("\t NOT VERY EFFECTIVE");

		}
		else if(eff==0)   	//0
		{	dprint("\t IT DOESN'T EFFECT");

		}
		return d;

	}
	else
	dprint("THE ATTACK MISSED");

	return 0;
}
int special(pokemon & attack,pokemon & victim,int*ms)
{	int eee;
	int d;
	int mo=*ms;
	if(attack.M[mo].getspec()==0)
		d=dmg(attack,victim,ms);
	else if(attack.M[mo].getspec()==2)
	{	d=dmg(attack,victim,ms);
		attack.statch("REC");
	}
	else if(attack.M[mo].getspec()==3)
	{	d=dmg(attack,victim,ms);
		eee=1+random(100);
		if(eee<attack.M[mo].getspacc())
		{	victim.statch("BRN");
			dprint("POKEMON GOT BURNT");
		}
	}
	else if(attack.M[mo].getspec()==4)
	{	d=dmg(attack,victim,ms);
		eee=1+random(100);
		if(eee<attack.M[mo].getspacc())
		{	victim.statch("PAR");
			dprint("POKEMON GOT PARALYSED");
		}
	}
	else if(attack.M[mo].getspec()==5)
	{	d=dmg(attack,victim,ms);
		eee=1+random(100);
		if(eee<attack.M[mo].getspacc())
		{	if(attack.M[mo].getid()==39)
			{	victim.statch("PSNT");
				toxflg=1;
			}
			else
			{	victim.statch("PSN");
				dprint("POKEMON GOT POISONED");
			}
		}
	}
	else if(attack.M[mo].getspec()==6)
	{	d=dmg(attack,victim,ms);
		eee=1+random(100);
		if(eee<attack.M[mo].getspacc())
		{	victim.statch("SLP");
			dprint("POKEMON FELL ASLEEP");

		}
	}
	else if(attack.M[mo].getspec()==7||attack.M[mo].getspec()==12)
	{	d=dmg(attack,victim,ms);
		attack.puthp(-d);
	}
	else if(attack.M[mo].getspec()==8)
	{	d=dmg(attack,victim,ms);
		eee=1+random(100);
		if(eee<attack.M[mo].getspacc())
		{	victim.statch("CNF");
			dprint("POKEMON GOT CONFUSED");

		}
	}
	else if(attack.M[mo].getspec()==9)
	{
	       d=dmg(attack,victim,ms);
	}
	else if(attack.M[mo].getspec()==10)
	{       d=dmg(attack,victim,ms);
		attack.puthp((d/3));
		dprint("POKEMON GOT HIT BY RECOIL");

	}
	else if(attack.M[mo].getspec()==11)
	{	d=dmg(attack,victim,ms);
	}
	else if(attack.M[mo].getspec()==13)
	{	d=dmg(attack,victim,ms);
		attack.puthp(attack.gethp());
	}
	else if(attack.M[mo].getspec()==14)
	{	attack.statch("SLP");
		dprint("POKEMON GOT SLEPT...HEALTH FULLY RESTORED");

		attack.puthp(attack.gethp()-attack.getmax());
	}
	return d;
}
float STAB(int p,int m)
{	if(p==m)
		return 1.5;
	else
		return 1;
}
float modifier(int a,int d)
{

	if(d==0)
		return 1;
	if(a==1)
	{	if(d==6||d==9)
			return 0.5;
		else if(d==8)
			return 0;
		else
			return 1;
	}
	else if(a==2)
	{	if(d==1||d==6||d==9||d==15||d==17)
			return 2;
		else if(d==3||d==4||d==7||d==14)
			return 0.5;
		else if(d==8)
			return 0;
		else
			return 1;
	}
	else if(a==3)
	{	if(d==2||d==7||d==12)
			return 2;
		else if(d==6||d==9||d==13)
			return 0.5;
		else
			return 1;
	}
	else if(a==4)
	{	if(d==12)
			return 2;
		else if(d==9)
			return 0;
		else if(d==4||d==5||d==6||d==8)
			return 0.5;
		else
			return 1;
	}
	else if(a==5)
	{	if(d==4||d==6||d==9||d==10||d==13)
			return 2;
		else if(d==3)
			return 0;
		else if(d==7||d==12)
			return 0.5;
		else
			return 1;
	}
	else if(a==6)
	{	if(d==3||d==7||d==10||d==15)
			return 2;
		else if(d==2||d==5||d==9)
			return 0.5;
		else
			return 1;
	}
	else if(a==7)
	{
		if(d==12||d==14||d==17)
			return 2;
		else if(d==2||d==3||d==4||d==8||d==9||d==10)
		{
			return 0.5;
		}
		else
			return 1;
	}
	else if(a==8)
	{	if(d==8||d==14)
			return 2;
		else if(d==1)
			return 0;
		else if(d==9||d==17)
			return 0.5;
		else
			return 1;
	}
	else if(a==9)
	{	if(d==6||d==15)
			return 2;
		else if(d==9||d==10||d==13)
			return 0.5;
		else
			return 1;
	}
	else if(a==10)
	{	if(d==7||d==9||d==12||d==15)
			return 2;
		else if(d==6||d==10||d==11||d==16)
			return 0.5;
		else
			return 1;
	}
	else if(a==11)
	{	if(d==5||d==6||d==10)
			return 2;
		else if(d==11||d==12||d==16)
			return 0.5;
		else
			return 1;
	}
	else if(a==12)
	{	if(d==5||d==6||d==11)
			return 2;
		else if(d==3||d==4||d==7||d==9||d==10||d==12||d==16)
			return 0.5;
		else
			return 1;
	}
	else if(a==13)
	{	if(d==3||d==11)
			return 2;
		else if(d==5)
			return 0;
		else if(d==12||d==13||d==16)
			return 0.5;
		else
			return 1;
	}
	else if(a==14)
	{	if(d==2||d==4)
			return 2;
		else if(d==17)
			return 0;
		else if(d==9||d==14)
			return 0.5;
		else
			return 1;
	}
	else if(a==15)
	{	if(d==3||d==5||d==12||d==16)
			return 2;
		else if(d==9||d==10||d==11||d==15)
			return 0.5;
		else
			return 1;
	}
	else if(a==16)
	{	if(d==16)
			return 2;
		else if(d==9)
			return 0.5;
		else
			return 1;
	}
	else if(a==17)
	{	if(d==8||d==14)
			return 2;
		else if(d==2||d==9||d==17)
			return 0.5;
		else
			return 1;
	}
	else return 1;
}

int chk(trainer PL)
{
	int z=0;
	for(int s=0;s<6;s++)
	{
		if(PL.P[s].gethp()==0)
			z++;
	}
	return z;
}
void healthpl(pokemon T,int t,int dmg)
{	float b=200*(long)dmg;
	float a=b/T.getmax();
	int i=a;
	setcolor(BLACK);
	if(t==200)
		for(int x=0;x<i&&(t-x)>=0;x++)
		{
			line(299-x+t,291,299-x+t,309);
			delay(10);
		}
	else
		for(int x=0;x<i&&(t-x)>=0;x++)
		{
			line(300-x+t,291,300-x+t,309);
			delay(10);
		}
	outtextxy(300,200,T.getname());
	delay(10);
}
void healthai(pokemon T,int t,int dmg)
{
	float b=200*(long)dmg;
	float a=b/T.getmax();
	int i=a;
	setcolor(BLACK);
	if(t==200)
		for(int x=0;x<i&&(t-x)>=0;x++)
		{	line(139-x+t,151,139-x+t,169);
			delay(10);
		}
	else
		for(int x=0;x<i&&(t-x)>=0;x++)
		{	line(140-x+t,151,140-x+t,169);
			delay(10);
		}
	outtextxy(140,60,T.getname());
	delay(10);
}

void battle2(trainer&AI,trainer& Player)
{
	int plfir=0,i=0,j=0,flag=0;
	int dmg=0;
	battlegrfx(0,0,Player.P[i],AI.P[j]);
	if(Player.P[i].getspd()>=AI.P[j].getspd())
	{	plfir=1;
	}
	lbl:
	outtextxy(300,200,Player.P[i].getname());
	outtextxy(140,60,AI.P[j].getname());
	getch();
	if(plfir%2!=0)
	{

		outtextxy(300,200,Player.P[i].getname());
		outtextxy(140,60,AI.P[j].getname());
		int v=0;
		if(strcmpi(Player.P[i].getstat(),"SLP")==0)
		{	batlpr(0,0,Player.P[i],AI.P[j],"POKEMON IS SLEEPING");
			//pressz();
			goto lbl;
		}
		else if(strcmpi(Player.P[i].getstat(),"REC")==0)
		{
			batlpr(0,0,Player.P[i],AI.P[j],"POKEMON IS RECHARGING");
			//pressz();
			Player.P[i].statch("000");
			plfir++;
			goto lbl;
		}
		else if(strcmpi(Player.P[i].getstat(),"PAR")==0)
		{	randomize();
			int par=random(4);
			if(par==2)
			{	batlpr(0,0,Player.P[i],AI.P[j],"POKEMON IS PARALYSED AND CANNOT ATTACK");
				plfir++;
				//pressz();
				goto lbl;
			}
			else
				v=1;
		}
		else if(strcmpi(Player.P[i].getstat(),"CON")==0)
		{	randomize();
			int par=random(4);
			if(par==2)
			{	batlpr(10,0,Player.P[i],AI.P[j],"POKEMON IS CONFUSED AND HURT ITSELF");
				plfir++;
				//pressz();
				goto lbl;
			}
			else
				v=1;
		}
		else v=1;
		if(v==1)
		{
			outtextxy(300,200,Player.P[i].getname());
			outtextxy(140,60,AI.P[j].getname());
			batlpr(0,0,Player.P[i],AI.P[j],"ENTER CHOICE : ");
			cout<<"\n1)FIGHT\t\t\t2)POKEMON";
			lbl1:
			outtextxy(300,200,Player.P[i].getname());
			outtextxy(140,60,AI.P[j].getname());
			char cho=getch();
			switch(cho)
			{
				case '1':{
					batlpr(0,0,Player.P[i],AI.P[j],"CHOOSE YOUR MOVE");
					Player.P[i].dismove();
					char ch=getch();
					int mo=(int)ch-49;
					if(ch==27)
						exit(0);

					batlpr(0,0,Player.P[i],AI.P[j],"YOU USED ");
					cout<<Player.P[i].M[mo].getname();
					int dmg=special(Player.P[i],AI.P[j],&mo);
					batlpr(0,dmg,Player.P[i],AI.P[j]," ");
					if(strcmpi(AI.P[j].getstat(),"BRN")==0)
					{	batlpr(0,5,Player.P[i],AI.P[j],"POKEMON AFFECTED BY BURN");
						AI.P[j].puthp(5);
						//pressz();
					}
					else if(strcmpi(AI.P[j].getstat(),"PSN")==0)
					{	batlpr(0,5,Player.P[i],AI.P[j],"POKEMON AFFECTED BY POISON");
						AI.P[j].puthp(5);
						//pressz();
					}
					else if(strcmpi(AI.P[j].getstat(),"PSNT")==0)
					{	toxflg++;
						batlpr(0,5*toxflg,Player.P[i],AI.P[j],"POKEMON AFFECTED BY POISON");
						AI.P[j].puthp(5*toxflg);
						//pressz();
					}
					if(Player.P[i].M[mo].getspec()==10)
					{
						batlpr(0,dmg/3,Player.P[i],AI.P[j],"FOE HIT BY RECOIL");
						Player.P[i].puthp(dmg/3);
						//pressz();
					}
					if(dmg<=AI.P[j].gethp())
					{	AI.P[j].puthp(dmg);  }
					else
						AI.P[j].puthp(AI.P[j].gethp());
					if(AI.P[j].gethp()==0)
					{
						batlpr(0,0,Player.P[i],AI.P[j],"POKEMON FAINTED!!!");
							j++;

						if(j==6)
						{	batlpr(0,0,Player.P[i],AI.P[5],"YOU WON!!");
							getch();
							return;
						}

						char str2[]={"FOE SENT OUT "};
						plfir++;
						batlpr(0,0,Player.P[i],AI.P[j],str2);
						cout<<AI.P[j].getname();
						getch();
						goto lbl;
					}
					plfir++;
					goto lbl;
					}

				case '2':
					dprint("CHOOSE POKEMON");
					Player.dispoke();
					char k=getch();
					i=(int)k-49;
					cout<<"YOU SENT OUT "<<Player.P[i].getname();
					plfir++;
					goto lbl;
				default:goto lbl1;
			}
		}
	}
	else
	{
		outtextxy(300,200,Player.P[i].getname());
		outtextxy(140,60,AI.P[j].getname());
		int v=0;
		if(strcmpi(AI.P[j].getstat(),"SLP")==0)
		{	batlpr(0,0,Player.P[i],AI.P[j],"FOE IS SLEEPING");

			goto lbl;
		}
		else if(strcmpi(AI.P[j].getstat(),"REC")==0)
		{
			batlpr(0,0,Player.P[i],AI.P[j],"FOE IS RECHARGING");

			AI.P[j].statch("000");
		}
		else if(strcmpi(AI.P[j].getstat(),"PAR")==0)
		{	randomize();
			int par=random(4);
			if(par==2)
			{	batlpr(0,0,Player.P[i],AI.P[j],"FOE IS PARALYSED AND CANNOT ATTACK");


			}


			else
				v=1;
		}
		else if(strcmpi(AI.P[j].getstat(),"CON")==0)
		{	randomize();
			int par=random(4);
			if(par==2)
			{	batlpr(0,10,Player.P[i],AI.P[j],"FOE IS CONFUSED AND HURT ITSELF");

			}
			else
				v=1;
		}
		else v=1;
		if(v==1)
		{
			outtextxy(300,200,Player.P[i].getname());
			outtextxy(140,60,AI.P[j].getname());
			randomize();
			int mo=random(4);
			int d;
			batlpr(0,0,Player.P[i],AI.P[j],"FOE ");
			cout<<AI.P[j].getname()<<" USED "<<AI.P[j].M[mo].getname();
			delay(1000);
			int dmg=special(AI.P[j],Player.P[i],&mo);
			batlpr(dmg,0,Player.P[i],AI.P[j]," ");
			if(strcmpi(Player.P[i].getstat(),"BRN")==0)
			{	batlpr(5,0,Player.P[i],AI.P[j],"POKEMON AFFECTED BY BURN");
				Player.P[i].puthp(5);

			}
			else if(strcmpi(Player.P[i].getstat(),"PSN")==0)
			{	batlpr(5,0,Player.P[i],AI.P[j],"POKEMON AFFECTED BY POISON");
				Player.P[i].puthp(5);

			}
			else if(strcmpi(Player.P[i].getstat(),"PSNT")==0)
			{	toxflg++;
				batlpr(5*toxflg,0,Player.P[i],AI.P[j],"POKEMON AFFECTED BY POISON");
				Player.P[i].puthp(5*toxflg);

			}
			if(AI.P[j].M[mo].getspec()==10)
			{
				batlpr(0,dmg/3,Player.P[i],AI.P[j],"FOE HIT BY RECOIL");
				AI.P[j].puthp(dmg/3);

			}
			cout<<"HP "<<Player.P[i].gethp()<<" DMG "<<dmg;
			getch();
			if(Player.P[i].gethp()>=dmg)
				Player.P[i].puthp(dmg);
			else
				Player.P[i].puthp(Player.P[i].gethp());
			if(Player.P[i].gethp()==0)
			{
				flag++;
				batlpr(0,0,Player.P[i],AI.P[j],"YOUR POKEMON FAINTED!!\nCHOOSE NEW POKEMON");
				Player.dispoke();
				char k=getch();
				i=(int)k-48;
				cout<<"YOU SENT OUT "<<Player.P[i].getname();
				goto lbl;
			}
			if(flag==6)
			{
				cout<<"YOU WHITED OUT!!..";
				exit(0);
			}
		}
		plfir++;
		goto lbl;
	}
}
void movedex()
{
	int ID[110];
	for(int idset=0;idset<110;idset++)
		ID[idset]=idset;
	int type[110]={1,1,1,1,11,11,11,11,10,10,10,10,13,13,13,13,12,12,12,12,12,12,12,9,9,9,9,14,14,14,14,8,8,8,8,17,17,17,17,4,4,4,4,16,16,16,16,2,2,2,2,3,3,3,3,15,15,15,15,5,5,5,5,7,7,7,1,1,2,2,12,12,11,6,1,4,9,16,1,1,1,3,7,1,1,1,1,6,12,1,1,13,1,10,13,15,17,8,17,2,17,16,2,4,9,6,9,14,11,12};
	char nm[110][30]={"TACKLE","BODYSLAM","STRENGTH","ENDEAVOUR","HYDROCANNON","BUBBLEBEAM","SURF","HYDROPUMP","EMBER","FLAMETHROWER","FLAREBLITZ","BLASTBURN","THUNDERBOLT","THUNDER","SPARK","THUNDERWAVE","VINEWHIP","RAZORLEAF","POISONPOWDER","STUNSPORE","SLEEPPOWDER","GIGADRAIN","FRENZYPLANT","IRONTAIL","STEELWING","FLASHCANNON","DOOMDESIRE","PSYCHIC","CONFUSION","HYPNOSIS","DREAMEATER","SHADOWBALL","CONFUSERAY","LICK","NIGHTSHADE","BITE","CRUNCH","DARKPULSE","PURSUIT","TOXIC","SLUDGEBOMB","GUNKSHOT","VENOSHOCK","DRAGONCLAW","DRAGONBREATH","OUTRAGE","DRACOMETEOR","MACHPUNCH","DRAINPUNCH","CLOSECOMBAT","SEISMICTOSS","WINGATTACK","AIRSLASH","BRAVEBIRD","DRILLPECK","ICEBEAM","BLIZZARD","AURORABEAM","SHEERCOLD","EARTHQUAKE","FISSURE","MUDSHOT","BULLDOZE","BUGBUZZ","X-SCISSOR","MEGAHORN","HEADBUTT","SONICBOOM","LOWKICK","KARATECHOP","LEAFBLADE","MEGADRAIN","WATERGUN","ROCKTHROW","SELFDESTRUCT","POISONSTING","METALCLAW","TWISTER","SLAM","SLASH","HYPERFANG","PECK",
"LEECHLIFE","SPLASH","REST","HYPERBEAM","GIGAIMPACT","ROCKSLIDE","ENERGYBALL","DOUBLEEDGE","EXTREMESPEED","THUNDERFANG","SOFTBOILED","FIREPUNCH","THUNDERPUNCH","ICEPUNCH","CRUNCH","DESTINYBOND","NIGHTSLASH","BRICKBREAK","DARKPULSE","DRAGONPULSE","HAMMERARM","POISONJAB","METEORMASH","ROCKWRECKER","IRONHEAD","ZENHEADBUTT","BRINE","SOLAR BEAM"};
	int dmg[110]={30 , 80,70 ,0  ,150,65 ,90 ,120,40 ,90 ,130,150,90 ,120,60 ,0  ,40 ,60 ,0  , 0 , 0 ,75 ,150,100,70,80 ,150, 90, 40, 0 ,120,90 ,0  ,20 ,40 ,60 ,80 ,80 ,40 , 0 ,80 ,120,60 ,90 ,80 ,120,150,40 ,60 ,120,0  ,60 ,90,120 ,100, 80,120,80 ,9999,100,9999,80 ,70 ,70 ,80 ,120,70 ,20 ,50 ,50 ,90 , 40,40 ,50,250,15 ,50,40 ,80,70 ,80,35 ,20 ,0  , 0 ,150,150,75,90 ,120, 80,65 ,0  ,75 , 75, 75, 80,0  , 70, 75, 80, 85,100, 80,90,150, 80,80, 65,100};
	int acc[110]={100,100,100,100, 75,100,100, 80,100,100,80 ,75 ,100,75 ,100,100,100,100,60 , 60, 60,100,75 ,75 ,90,100, 75,100,100,60 ,100,100,70 ,100,100,100,100,100,100,80 ,100, 80,100,100,100,100,75 ,100,100, 80,100,100,90, 80 , 95,100, 75,100,30  ,100,30  ,100,100,100,100,80 ,100,90 ,100,100,100,100,100,90,100,100,95,100,75,100,90,100,100,100,100, 90, 90,90,100,100,100,100,100,100,100,100,100,100,100,100,100,100, 90,100,90, 90,100,90,100,100};
	int spec[110]={0 , 4 , 0 ,  1, 2 , 0 ,  0, 0 , 0 , 3 , 10, 2 , 4 , 4 , 0 , 4 ,  0, 0 ,5  ,  4,  6, 7 , 2 , 0 , 0, 0 , 2 , 0 , 8 , 6 , 7 , 0 , 8 , 4 , 0 , 0 , 0 , 0 , 0 , 5 , 5 , 5 , 0 ,0  , 0 , 9 , 2 , 0 , 7 , 0 , 9 , 0 , 0, 10 , 0 , 0 , 0 , 0 , 0  , 0 , 0  , 0 , 0 , 0 ,  0, 0 , 0 ,11 , 0 , 0 , 0 , 12, 0 ,0 , 13, 5 , 0, 0 ,0 , 0 ,0 , 0 , 7 , 0 ,14 ,  2,  2,0 ,  0, 10, 0 ,	4, 15, 10, 10,  0,  0,16 , 0 , 0 , 0 , 0 , 0 , 5 , 0, 2 , 0 , 0, 0 , 2 };
	int sacc[110]={0 , 25, 0 , 30,100, 0 , 0 , 0 , 0 , 15,20 ,100, 13,25 , 0 ,100, 0 , 0 ,100,100,100,100,100, 0 , 0, 0 ,100, 0 , 15,100,100, 0 ,100,75 , 0 , 0 , 0 , 0 , 0, 100,25 ,30 ,0  , 0 , 0 ,100,100, 0 ,100, 0 ,100, 0 , 0 ,100, 0 , 0 , 0 , 0 , 0  , 0 , 0  , 0 , 0 , 0 ,  0, 0 , 0 ,100, 0 , 0 , 0 ,100, 0 ,0 ,100, 30, 0, 0 , 0, 0 ,0 ,0  ,100, 0 ,100,100,100,0 ,  0,100, 0 , 10,100,  3,  4,  0,  0,100, 0 , 0 , 0 , 0 , 0 , 30, 0,100, 0 , 0, 0 ,100};
	ofstream shata;
	shata.open("moves.txt");
	for(int i=0;i<110;i++)
	{
		mm[i].set(nm[i],type[i],dmg[i],acc[i],spec[i],sacc[i],ID[i]);
		shata.write((char*)&mm[i],sizeof(mm[i]));
	}
}
void pokedex()
{       movedex();
	int ID[48];
	for(int idset=0;idset<48;idset++)
		ID[idset]=idset;
	char name[48][20]={"AERODACTYL","ALAKAZAM","ALTARIA","ARCANINE","BLASTOISE","BLISSEY","CHARIZARD","DEWGONG","DRAGONITE","DUSKNOIR","ELECTIVIRE","ELECTRODE","FLYGON","GARCHOMP","GARDEVOIR","GENGAR","GLISCOR","GYARADOS","HARIYAMA","HERACROSS","HOUNDOOM","KINGDRA","LAPRAS","LUDICOLO","MACHAMP","MAGIKARP","MAGMORTAR","MAGNEZONE","METAGROSS","MILOTIC","MUK","PIKACHU","RAPIDASH","RHYPERIOR","SALAMENCE","SCIZOR","SHIFTRY","SLOWKING","SNORLAX","STARAPTOR","STEELIX","TENTACRUEL","TORKOAL","TYRANITAR","VENASAUR","WALREIN","WEEZING","WHISCASH"};
	int hp[48]=   {364,314,354,384,362,714,360,384,386,294,354,324,364,420,340,324,354,394,492,364,354,354,464,364,384,150,354,344,364,394,414,324,334,434,394,344,384,394,524,374,354,364,344,404,364,424,334,424};
	int speed[48]={359,339,259,289,255,209,299,239,259,189,289,379,299,303,259,319,289,261,199,269,289,269,219,239,209,157,265,219,239,261,199,319,309,179,299,229,259,159,159,299,159,299,139,221,259,229,219,219};
	int attack[48]={309,369,239,319,269,119,317,239,367,299,345,199,299,259,349,359,289,349,339,249,279,289,269,279,359,73 ,349,359,369,299,309,279,299,379,369,359,299,299,319,339,269,259,269,367,299,289,279,255};
	int defense[48]={229,239,279,259,299,369,255,259,299,369,247,239,259,289,329,249,349,299,290,249,199,289,259,299,269,85 ,289,329,359,349,299,279,259,209,259,299,219,319,319,239,499,339,379,319,299,279,339,245};
	int type1[48]={6,14,16,10,11,1,10,15,16,8,13,13,5 ,16,14,8,5,11,2,7,10,11,11,11,2,11,10,13,9 ,11,4,13,10,6,16,9,12,11,1,3,9,11,10,6 ,12,11,4,11};
	int type2[48]={3,0 ,3 ,0 ,0 ,0,3 ,11,3 ,0,0 ,0 ,16,5 ,0 ,4,3,3 ,0,2,17,16,15,12,0,0 ,0 ,9 ,14,0 ,0,0 ,0 ,5,3 ,7,17,14,0,1,5,4 ,0 ,17,4 ,15,0,5 };
	int a,b,c,d;
	ofstream fout;
	fout.open("PokeL.txt");
	int i=0;
	{
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],85,86,87,24);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],27,31,88,85);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],89,59,43,44);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],9,10,90,91);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],4,7,56,89);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],92,89,50,39);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],11,9,44,59);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],56,55,58,7);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],45,56,13,85);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],31,93,94,95);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],93,86,12,13);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],12,13,89,74);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],85,59,43,44);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],43,46,59,96);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		getch();
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],27,31,29,30);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],27,31,40,97);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],91,64,59,98);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],85,59,44,7);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],48,49,93,94);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],99,49,64,65);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],96,9,10,100);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],101,55,54,7);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],7,55,58,89);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],89,88,21,7);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],49,87,99,102);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],0,83,83,83);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],10,89,94,103);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],86,25,12,13);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		getch();
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],27,59,102,104);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],86,55,44,7);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],40,41,86,89);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],86,23,12,13);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],9,10,88,89);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],102,105,65,59);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],59,43,45,9);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],64,86,98,106);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],98,89,70,86);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		getch();
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],107,55,27,7);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],1,84,85,99);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],52,49,53,89);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],59,87,106,23);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],7,55,103,108);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],89,109,10,9);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],59,96,85,99);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],86,109,40,22);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],7,58,89,108);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],97,74,40,89);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
		i++;
		all[i].set(name[i],hp[i],attack[i],defense[i],speed[i],ID[i],type1[i],type2[i],108,60,59,7);
		all[i].check();
		fout.write((char*)&all[i],sizeof(all[i]));
	}
}
void trainerdex()
{
	ifstream fout;
	fout.open("AI.dat",ios::binary);
	for(int i=0;i<13;i++)
		fout.read((char*)&comp[i],sizeof(comp[i]));
}
void ball1(int x,int y)
{
	setfillstyle(1,4);
	setcolor(5);
	pieslice(x,y+50,0,180,50);
	setfillstyle(1,15);
	pieslice(x,y+50,180,360,50);
	setfillstyle(1,8);
	setcolor(3);
	fillellipse(x,y+50,10,10);
	setfillstyle(1,WHITE);
	fillellipse(x,y+50,3,3);
}
void pokeball(int lol)
{
		int x1 = 0;
		int x2 = 639;
		int x=getmaxx()/2;
		int y=getmaxy()/2;
		for(x1=0;x1<589;x1+=10,x2-=10)
		{ 	ball1(x1,0);
			ball1(x2,100);
			ball1(x1,200);
			ball1(x2,300);
			delay(50);
			cleardevice();
		}
		ball1(589,0);
		ball1(50,100);
		ball1(589,200);
		ball1(50,300);
		if(lol==1)
		{	settextstyle(4,0,5);
			outtextxy(x-100,y,"Pok\202mon");
			getch();
			settextstyle(3,0,3);
			setcolor(14);
			outtextxy(x-75,y+50,"XANTHIC VERSION");
			getch();
			cleardevice();
		}
}
void main()
{       clrscr();
	int &gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	pokeball(1);
	trainerdex();
	postint();
	getch();
}