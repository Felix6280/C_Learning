#include <stdio.h>

int input_data;
void print_data(double);
int cnt = 0;

static int tot = 0;

int main(void) {
	double avg;
	
	tot = input_data;
	avg = average();
	print_data(avg);
	
	return 0;
}

void print_data(double avg){
	printf("�Է��� ����� ����: %d\n",cnt);
	printf("��ü �հ� ���: %d %.1lf\n", tot, avg);
}
