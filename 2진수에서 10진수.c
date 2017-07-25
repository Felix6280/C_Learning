#include <stdio.h> 
int main(void) 
{ 
   int binary, copy, binary_result = 0, temp = 1; 
   
   // 2진수를 입력합니다.
   printf("2진수 입력 : "); 
   scanf_s("%d", &binary); 

   // 입력한 수가 0이 아닐 때
   while (binary!=0) 
   { 
      if (binary % 10) 
      	binary_result += temp; 
      binary /= 10; 
      temp *= 2; 
   } 

   // 결과 출력
   printf("십진수 %d입니다.\n", binary_result); 
} 
