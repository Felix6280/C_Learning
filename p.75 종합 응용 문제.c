#include<stdio.h>

int main(void){
	
	int age;
	char name[10];
	char code;
	float secret_code;
	
	printf("�̸� �Է�: ");
	scanf("%s",&name);
	
	printf("���� �Է�: ");
	scanf("%d",&age);
	
	
	printf("�μ��ڵ� �Է�: ");
	scanf("%c",&code);

	
	printf("����Ű: ");
	scanf("%f",&secret_code);

	
	printf("\n********************\n");
	printf("�̸�: %s\n",name);
	printf("����: %d\n",age);
	printf("�μ��ڵ�:%c\n",code);
	printf("����Ű: %.3f\n",secret_code);
	printf("********************"); 
	
	return 0;
}
