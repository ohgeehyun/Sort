#include "pch.h"
#include "InsertSort.h"
/*
	삽입 정렬
*/

void InsertSort::sort(vector<int> array)
{
	//인덱스 1부터 시작
	for (int i = 1; i < array.size(); i++)
	{
        int key = array[i];  // 현재 요소
        int j = i - 1;

        // key가 삽입될 위치를 찾기 위해, 정렬된 부분을 왼쪽부터 확인
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];  // 요소를 오른쪽으로 이동
            --j;
        }

        // key를 적절한 위치에 삽입
        array[j + 1] = key;

	}
}
