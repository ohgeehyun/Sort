#include "pch.h"
#include "BubbleSort.h"
/*
	���� ����
*/

void BubbleSort::sort(vector<int> array)
{
    int n = array.size();
    bool swapped;

    // �迭�� n-1�� �ݺ��ϸ� ����
    for (int i = 0; i < n - 1; ++i) 
    {
        swapped = false;  // ���� ���� Ȯ��

        // ������ i���� ��Ҵ� �̹� ���ĵ� �����̹Ƿ� �����ϰ� �ݺ�
        for (int j = 0; j < n - 1 - i; ++j) 
        {
            // ������ �� ��� ��
            if (array[j] > array[j + 1]) 
            {
                // ��� ��ȯ
                std::swap(array[j], array[j + 1]);
                swapped = true;
            }
        }

        // �� ���� ��ü �н����� ��ȯ�� ������ �̹� ���ĵ� ����
        if (!swapped) {
            break;
        }
    }
}
