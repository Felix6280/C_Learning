#include<stdio.h>

int main(void)
{
	int a;
	char s;
	scanf("%d %c",&a,&s);
	
	if(a<=19)
		printf("미성년"); 
	else if(a<=200) 
		printf("성인");
	else
		printf("젤나가 맙소사 ");
	if(s=='F')
		printf("여자입니다.");
	else if (s=='M')
		printf("남자입니다.");
	else
		printf("혼종입니다.");
	return 0; 
}
