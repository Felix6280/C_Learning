#include <stdio.h> 
int main(void) 
{ 
   int binary, copy, binary_result = 0, temp = 1; 
   
   // 2������ �Է��մϴ�.
   printf("2���� �Է� : "); 
   scanf_s("%d", &binary); 

   // �Է��� ���� 0�� �ƴ� ��
   while (binary!=0) 
   { 
      if (binary % 10) 
      	binary_result += temp; 
      binary /= 10; 
      temp *= 2; 
   } 

   // ��� ���
   printf("������ %d�Դϴ�.\n", binary_result); 
} 
