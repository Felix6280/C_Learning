#include<stdio.h>

int main(void)
{
	int a;
	char s;
	scanf("%d %c",&a,&s);
	
	if(a<=19)
		printf("�̼���"); 
	else if(a<=200) 
		printf("����");
	else
		printf("������ ���һ� ");
	if(s=='F')
		printf("�����Դϴ�.");
	else if (s=='M')
		printf("�����Դϴ�.");
	else
		printf("ȥ���Դϴ�.");
	return 0; 
}
