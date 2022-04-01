#include <iostream>

#include <vector>
#include <list>
#include <deque> 

#include <set>	
#include <unordered_set> 

#include <map>			
#include <unordered_map>

#include <string>

int main()
{
	// set 한개의 값(키)를 여러개 보관
	std::set<std::string> s = { "mon", "tue", "wed" };

	// map : key-value 의 쌍을 보관
	std::map<std::string, std::string> m = { {"mon","월요일"},
											 {"tue","화요일"} };

	// 1. [] 로 접근
	m["mon"] = "월요일";

	// 2. 반복자로 접근

	// 3. 요소가 있는지 확인 => 멤버함수가 없었습니다.
	//    C++20에서 추가되었습니다.
//	if ( m.contains("mon") ) // set에도 있습니다.
//	{
//	}


	
}

