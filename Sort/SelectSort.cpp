#include "pch.h"
#include "SelectSort.h"

/*
	선택정렬
*/
void SelectSort::sort(vector<int> array)
{
	//결국 주어진 배열을 이중 for문으로 n^n으로 전형적인 O(n^n)
	for (int i = 0; i < array.size()-1; i++)
	{
		int min = i;

		for (int j = min+1; j < array.size()-1; i++)
		{
			if (array[min] > array[j])
				min = j;
		}

		//최소값이 자기자신이 아니라면 최소값을 swap
		if (i != min)
		{
			int temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}

	}

}
