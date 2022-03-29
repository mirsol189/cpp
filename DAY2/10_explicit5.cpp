#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v1(10);			// 10개짜리 동적 배열
	std::vector<int> v2 = { 1,2,3,4 };	// 4개짜리 동적배열

	// 아래 2줄의 차이점은 ?
	std::vector<int> v3(10, 3);
	std::vector<int> v4{ 10, 3 };

	std::cout << v3.size() << std::endl; // ?
	std::cout << v4.size() << std::endl; // ?
}
