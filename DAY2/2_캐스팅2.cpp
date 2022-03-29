#include <iostream>

// static_cast : 논리적으로 맞고 위험하지 않은 경우만 허용
//          void*=> 다른 타입*,
//			상속관계의 캐스팅 등.
//          반드시 연관성이 있어야 한다

int main()
{
	double d = 3.4;
//	int    n = d; // ok.. 캐스팅이 없어도 가능한 코드
	int    n = static_cast<int>(d); // double => int
								// 캐스팅이 없어도 되는 코드.
								// static_cast 도 허용

	
//	int* p1 = malloc(100);     // C언어 : ok. C++ : 에러
//	int* p1 = (int*)malloc(100); // C 스타일 캐스팅은 당연히 ok
	int* p1 = static_cast<int*>( malloc(100) ); // ok..
								// void* => 다른 타입* 변환은 개발시 필요하다.

	// int* => double* 로 변경하는 캐스팅
//	double* p2 = static_cast<double*>(&n); // error. void* 가 아닌
											// 서로 다른 타입의 주소 변환은 허용안함

	// 실수가 아니라 의도적으로 꼭 필요 했다면, 다른 캐스팅 사용
	double* p2 = reinterpret_cast<double*>(&n);

	*p2 = 3.4;  // 하지만 캐스팅 되었어도.. 이런 작업은 하면 안됩니다.

}

