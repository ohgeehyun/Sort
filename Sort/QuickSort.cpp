#include "pch.h"
#include "QuickSort.h"

void QuickSort::sort(vector<int> array)
{
	quickSort(array, 0, array.size() - 1);
}

int QuickSort::partition(std::vector<int> arr, int low, int high)
{
	int pivotIndex = low + rand() % (high - low + 1); //low�� hight���̿��� ���� �ǹ� 
	std::swap(arr[pivotIndex],arr[high]); //�ǹ��� �迭�� ������ �̵�

	int pivot = arr[high]; //�迭�� ���κ�
	int i = low - 1;

	for (int j = low; j < high; j++)
	{
		if (arr[j] < pivot)
		{
			++i;
			std::swap(arr[i], arr[j]);
		}
	}
	
	std::swap(arr[i+1],arr[high]);

	return i+1;
}

void QuickSort::quickSort(std::vector<int> arr, int low, int high)
{
	if (low < high) {
		// ������ �ϰ�, �ǹ� �ε����� ����
		int pivotIndex = partition(arr, low, high);

		// �ǹ� �ε����� �������� �� �κ� �迭�� ��������� ����
		quickSort(arr, low, pivotIndex - 1);  // �ǹ� ���� �κ�
		quickSort(arr, pivotIndex + 1, high);  // �ǹ� ������ �κ�
	}
}
