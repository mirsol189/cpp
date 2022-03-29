#include <iostream>

// reinterpret_cast  : 메모리의 재해석
// 1. 서로 다른 타입의 주소(참조) 캐스팅
// 2. 정수 <=> 주소간 캐스팅

int main()
{
	double d = 3.4;
//	int    n =  d;  // ok
//	int    n = reinterpret_cast<int>(d); // error

	// 1. 서로 다른 타입의 주소 캐스팅
//	int* p = static_cast<int*>(&d); // error
	int* p = reinterpret_cast<int*>(&d); // ok.


	// 2. 정수와 포인터간 캐스팅 - 임베디드에서 많이 사용
//	int* p1 = 1000; // error
	int* p2 = (int*)1000; // ok
//	int* p3 = static_cast<int*>(1000); // error
	int* p4 = reinterpret_cast<int*>(1000); // ok.. 정수 => 주소로

	int n2 = reinterpret_cast<int>(p4); // ok. 주소 => 정수로!	
}

