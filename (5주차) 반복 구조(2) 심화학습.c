#include<stdio.h>
int main()
{
	int country,i;
	for(i=0;i<=100;i++)
	{	
		printf("1.일본\n2.미국\n3.중국\n4.한국\n5.끝내기\n수도를 알고 싶은 나라는? ");

		scanf("%d",&country);
		switch(country)
		{
			case 1: printf("일본의 수도는 도쿄입니다.\n"); continue;
			case 2: printf("미국의 수도는 워싱턴 D.C입니다.\n"); continue;
			case 3: printf("중국의 수도는 차이나입니다.\n"); continue;
			case 4: printf("한국의 수도는 서울입니다.\n");continue;
			default: printf("끝내기를 선택하셨습니다.\n");return 0;
		}
	}
}
