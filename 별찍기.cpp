#include <stdio.h>


main(){
	// true�� ���� ����, false�� ���� ���� 
	bool state = true;
	// ���� ���� 
	int length;
	
	// �� ���� �Է� 
	scanf("%d", &length);
	
	for(int a = 1; a != 0; ){
		if(state){
			// �� ���� �κ�
			for(int i = 0; i<a; i++)
				printf("��");
			printf("\n");
			a++;
			
			if(a == length)
				state = false;
		}else{
			// �� ���� �κ� 
			for(int i = 0; i<a; i++)
				printf("��");
			printf("\n");
			a--;
		}
	}
	
	printf("\n\n�� %d�� ��� �Ϸ��Ͽ����ϴ�.", length); 
}

