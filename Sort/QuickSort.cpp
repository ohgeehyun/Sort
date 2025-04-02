#include "pch.h"
#include "QuickSort.h"

void QuickSort::sort(vector<int> array)
{
	quickSort(array, 0, array.size() - 1);
}

int QuickSort::partition(std::vector<int> arr, int low, int high)
{
	int pivotIndex = low + rand() % (high - low + 1); //low와 hight사이에서 랜덤 피벗 
	std::swap(arr[pivotIndex],arr[high]); //피벗을 배열의 끝으로 이동

	int pivot = arr[high]; //배열의 끝부분
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
		// 분할을 하고, 피벗 인덱스를 얻음
		int pivotIndex = partition(arr, low, high);

		// 피벗 인덱스를 기준으로 두 부분 배열을 재귀적으로 정렬
		quickSort(arr, low, pivotIndex - 1);  // 피벗 왼쪽 부분
		quickSort(arr, pivotIndex + 1, high);  // 피벗 오른쪽 부분
	}
}
