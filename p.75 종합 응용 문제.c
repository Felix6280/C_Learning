#include<stdio.h>

int main(void){
	
	int age;
	char name[10];
	char code;
	float secret_code;
	
	printf("이름 입력: ");
	scanf("%s",&name);
	
	printf("나이 입력: ");
	scanf("%d",&age);
	
	
	printf("부서코드 입력: ");
	scanf("%c",&code);

	
	printf("보안키: ");
	scanf("%f",&secret_code);

	
	printf("\n********************\n");
	printf("이름: %s\n",name);
	printf("나이: %d\n",age);
	printf("부서코드:%c\n",code);
	printf("보안키: %.3f\n",secret_code);
	printf("********************"); 
	
	return 0;
}
