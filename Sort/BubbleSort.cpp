#include "pch.h"
#include "BubbleSort.h"
/*
	버블 정렬
*/

void BubbleSort::sort(vector<int> array)
{
    int n = array.size();
    bool swapped;

    // 배열을 n-1번 반복하며 정렬
    for (int i = 0; i < n - 1; ++i) 
    {
        swapped = false;  // 스왑 여부 확인

        // 마지막 i개의 요소는 이미 정렬된 상태이므로 제외하고 반복
        for (int j = 0; j < n - 1 - i; ++j) 
        {
            // 인접한 두 요소 비교
            if (array[j] > array[j + 1]) 
            {
                // 요소 교환
                std::swap(array[j], array[j + 1]);
                swapped = true;
            }
        }

        // 한 번의 전체 패스에서 교환이 없으면 이미 정렬된 상태
        if (!swapped) {
            break;
        }
    }
}
