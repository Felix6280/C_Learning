#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int dataArr[], int size, int findData)
{
    int low = 0, high = size - 1, mid;
 
    // high�� low���� �۾����ٸ� ã������ �����Ͱ� ������ ���տ� ����.
    while (low <= high)
    {
        // �߾Ӱ��� low�� high�� ���� ���� 2�� ������ �ȴ�.
        mid = (low + high) / 2;
        // ���� ã������ ���� �߾Ӱ����� �۴ٸ� high�� mid - 1�� �д�.
        if (dataArr[mid] > findData) high = mid - 1;
        // ���� ã������ ���� �߾Ӱ����� ũ�ٸ� low�� mid + 1�� �д�.
        else if (dataArr[mid] < findData) low = mid + 1;
        // �߾Ӱ��� ã������ ���� ��ġ�ϸ� mid�� ��ȯ�Ѵ�.
        else return mid;
    }
    // �����͸� ã�� ���ϸ� -1�� ��ȯ�Ѵ�.
    return -2;
}

int main(){
	int count;
	int find;
	int i;
	
	scanf("%d",&count);
	int num[count];
	int findnum[count];
	
	for(i=0;i<count;i++){
		scanf("%d",&num[i]);
	}	
	
	scanf("%d",&find);
	int res[find];
		
	for(i=0;i<find;i++){
		scanf("%d",&findnum[i]); 
	}
	
	for(i=0;i<find;i++)
	{
		res[i] = BinarySearch(num, count, findnum[i]);
	}
	
	for(i=0;i<find;i++)
		printf("%d\n",res[i]+1);
}
