#include<stdio.h>

int main(void)
{
	char ch;
	printf("���� �ҹ��ڸ� �Է��ϼ���:");
	scanf("%c",&ch);
	printf("\n\t");	
	
	switch(ch)
	{
		case'a':printf("����");	break;
		case'e':printf("����");	break;
		case'i':printf("����");	break;
		case'o':printf("����");	break;
		case'u':printf("����");	break;
		default:printf("����");
	} 
	printf("\n");
	
	return 0;
}
