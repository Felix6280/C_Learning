#include<stdio.h>
void main()
{
    int    num = 0;
    char Hex[16];

    // 16������ 10������
	scanf("%s",&Hex);

    num = (int)strtol(Hex, NULL, 16);//Hex[0]���� NULL������ ���̸� num������ ���� 

    printf(" %s -> %d \n", Hex, num);

}

