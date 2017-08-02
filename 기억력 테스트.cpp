#include<stdio.h>

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
	int n,m;
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	scanf("%d",&m);
	int find[m];
	int result[m];
	
	for(int i=0;i<m;i++)
		scanf("%d",&find[i]);

	for(int i=0;i<m;i++)
		result[i] = BinarySearch(arr, n, find[i]);
	
	for(int i=0;i<m;i++){
		printf("%d ", result[i]+1);
	}
}
