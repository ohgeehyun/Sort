#include "pch.h"

int main()
{
    int32 n = 1000000;  // 100만 개의 요소
    std::vector<int> data(n);

    // 난수 생성기 설정
    std::random_device rd;                  // 하드웨어 기반 난수 생성기
    std::mt19937 gen(rd());                 // Mersenne Twister 알고리즘을 사용하는 난수 생성기
    std::uniform_int_distribution<int> dist(0, n-1);  // 0부터 1000 사이의 랜덤 숫자 생성

    // 벡터에 랜덤 숫자 채우기
    for (int32 i = 0; i < n; ++i) {
        data[i] = dist(gen);  // 랜덤 숫자를 벡터에 삽입
    }

    std::cout << "Hello World!\n";
    system("pause");
}
