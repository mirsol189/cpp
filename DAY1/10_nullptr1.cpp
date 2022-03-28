// 11_nullptr1.cpp    54 page
int* foo() { return nullptr; }
int main()
{
	// 0의 정체 : 0은 정수지만 포인터로 암시적 형변환된다.
	int  n1 = 0; // ok
	int* p1 = 0; // ok. 컴파일러가 0을 특별하게 처리.

//	int* p2 = 10; // error. 10은 정수(int) 이므로
					// 포인터 변수에 담을수 없다.

	// NULL Pointer 가 필요할때 0을 사용하지 말자.
	// C++11에서 새로나온 nullptr을 사용하자.
	int* p3 = nullptr; // ok..
	int  n2 = nullptr; // error

	auto ret = foo();
	if (ret == 0) {} // 코드를 읽는 개발자가 ret 의 타입을 예측하기 어렵습니다.
	if (ret == nullptr) {} // ret가 포인터 타입이라고 예측가능합니다.
}
