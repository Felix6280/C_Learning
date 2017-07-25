#include<stdio.h>

int main(void)
{
	char name1[4],name2[4],name3[4],subject1[5],subject2[5],subject3[5];
	int grade1,grade2,grade3;
	
	scanf("%s %s %d",&name1,&subject1,&grade1);
	scanf("%s %s %d",&name2,&subject2,&grade2);
	scanf("%s %s %d",&name3,&subject3,&grade3);
	
	printf("이 름    전공학과        학년\n");
	printf("---------------------------------\n"); 
	printf("%3s   %5s        %d\n",name1,subject1,grade1);
	printf("%3s   %5s        %d\n",name2,subject2,grade2);
	printf("%3s   %5s         %d\n",name3,subject3,grade3);
	
	return 0;
}
