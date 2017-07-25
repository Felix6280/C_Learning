#include<stdio.h>

int main()
{
	typedef struct
	{
		char Name[10];
		int HP;
		int MP;
		int Level;
		int AP;
		float Exp;
		char Class[10];
		int Age;
		int ATK;
		int DEF;
		int Speed;
		float CRT;
		int LUX;//member¶ó°í ÇÔ 
		int Tired;
		char Gender;
		char Kind[10];
	}RPG;
	
	RPG jjbb = {"Genji", 100000, 0, 5, 0, 12.5, "JJBB", 17, 100, 100, 10, 0.5, 1, 70, "M", "Babo"};
	RPG ssy;
	RPG jjw;
	
	jjbb.HP = 100000;
	jjbb.MP = 0;
	
	int input;
	while(1){
	scanf("%d",&input);
	if(input==0)
	{
		jjbb.Exp+=10;
		if(jjbb.Exp>=100)
		{
			printf("==========Level Up!=============\n");
			jjbb.Level+=1;
			jjbb.Exp-=100;
		}
	printf("Exp: %.1f Lv: %d\n",jjbb.Exp,jjbb.Level);
	}
	
	}
} 
