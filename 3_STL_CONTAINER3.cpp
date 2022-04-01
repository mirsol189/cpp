#include <iostream>

// 선형 컨테이너 3개
#include <vector>
#include <list>
#include <deque> 

// 연관 컨테이너

// set : 집합 관련 연산(합집합, 차집합, 교집합등) 을 제공하는 타입
//       C++ 에서는 "tree" 로 구현되어 있음. - 균형잡힌 2진트리(주로 RBTree 사용)

#include <set>	  // tree 로 구현한 set
				  // C++98

#include <unordered_set>  // hash 로 구현한 set
						  // C++11 부터

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	std::set<int> s = { 50, 30, 80, 40, 70, 20, 90, 10 };


	std::unordered_set<int> us = { 50, 30, 80, 40, 70, 20, 90, 10 };
}

