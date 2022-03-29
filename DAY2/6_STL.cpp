// 6_STL
#include <iostream>
#include <stack>
#include <vector>
#include <string>  

int main()
{
	int x[5] = { 1,2,3,4,5 }; // 배열은 크기를 변경할수 없습니다.
	
	// vector : 크기 변경이 가능한 동적 배열
	//          사용법은 배열과 동일합니다
	std::vector<int> v = { 1,2,3,4,5 };

	v[0] = 10;
	std::cout << v[3] << std::endl;

	v.resize(20);
	std::cout << v.size() << std::endl; // 20
}

