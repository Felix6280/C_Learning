#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    int a[6];
    int i, j;
    int bFound;
	int input[6]; 
    srand((unsigned int)time(NULL));
    int count = 0;
 	   
 	printf("������ �ζ� ��ȣ: ");
 	for ( i = 0; i < 6; i++)
 	   	scanf("%d",&input[i]);
 
    for ( i = 0; i < 6; i++ ){
        while ( 1 ){
            a[i] = rand() % 45 + 1;
            bFound = 0;
            for ( j = 0; j < i; j++ ){
                if ( a[j] == a[i] ){
                    bFound = 1;
                    break;
                }
        	}
            	if ( !bFound )
                    break;
    	}
       }
       
       printf("��÷�� �ζ� ���� ��ȣ:");
       for( i = 0; i < 6; i++)
       		printf("%3d",a[i]);
       	printf("\n"); 
       for ( i = 0; i < 6; i++ ){
       		for ( j = 0; j < 6; j++){
       			if(a[i]==input[j]){
       					count++;
       					break;
				   }
			   }
	   }
       printf("��ġ�ϴ� ������ ����: %d",count);
       return 0;
}
