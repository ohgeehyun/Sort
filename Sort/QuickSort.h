#pragma once
class QuickSort
{
	static void sort(vector<int> array);


private:
	//��Ƽ���Լ�
	static int partition(std::vector<int> array, int low, int high);
	static void quickSort(std::vector<int> arr, int low, int high);  // ��� ȣ���ϴ� ������
};

