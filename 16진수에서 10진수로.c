#include<stdio.h>
void main()
{
    int    num = 0;
    char Hex[16];

    // 16진수를 10진수로
	scanf("%s",&Hex);

    num = (int)strtol(Hex, NULL, 16);//Hex[0]부터 NULL까지의 길이를 num변수에 대입 

    printf(" %s -> %d \n", Hex, num);

}

