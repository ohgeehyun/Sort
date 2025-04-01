#include "pch.h"
#include "InsertSort.h"
/*
	���� ����
*/

void InsertSort::sort(vector<int> array)
{
	//�ε��� 1���� ����
	for (int i = 1; i < array.size(); i++)
	{
        int key = array[i];  // ���� ���
        int j = i - 1;

        // key�� ���Ե� ��ġ�� ã�� ����, ���ĵ� �κ��� ���ʺ��� Ȯ��
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];  // ��Ҹ� ���������� �̵�
            --j;
        }

        // key�� ������ ��ġ�� ����
        array[j + 1] = key;

	}
}
