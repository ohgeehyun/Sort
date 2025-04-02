#pragma once
class QuickSort
{
	static void sort(vector<int> array);


private:
	//파티션함수
	static int partition(std::vector<int> array, int low, int high);
	static void quickSort(std::vector<int> arr, int low, int high);  // 재귀 호출하는 퀵정렬
};

