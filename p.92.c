#include<stdio.h>

int main(void)
{
	char ch;
	printf("영어 소문자를 입력하세요:");
	scanf("%c",&ch);
	printf("\n\t");	
	
	switch(ch)
	{
		case'a':printf("모음");	break;
		case'e':printf("모음");	break;
		case'i':printf("모음");	break;
		case'o':printf("모음");	break;
		case'u':printf("모음");	break;
		default:printf("자음");
	} 
	printf("\n");
	
	return 0;
}
