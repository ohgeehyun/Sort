#include "pch.h"
#include "SelectSort.h"

/*
	��������
*/
void SelectSort::sort(vector<int> array)
{
	//�ᱹ �־��� �迭�� ���� for������ n^n���� �������� O(n^n)
	for (int i = 0; i < array.size()-1; i++)
	{
		int min = i;

		for (int j = min+1; j < array.size()-1; i++)
		{
			if (array[min] > array[j])
				min = j;
		}

		//�ּҰ��� �ڱ��ڽ��� �ƴ϶�� �ּҰ��� swap
		if (i != min)
		{
			int temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}

	}

}
