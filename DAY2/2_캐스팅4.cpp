// const_cast : 

int main()
{
	const int c = 10;

	// 상수성 제거.
//	int* p1 = &c;       // error
	int* p2 = (int*)&c; // ok.. C 스타일 캐스팅은 대부분 성공.
//	int* p2 = static_cast<int*>(&c); // error
//	int* p3 = reinterpret_cast<int*>(&c); // error. 서로 다른 타입 주소 캐스팅되지만
										// 상수성 제거는 안됨.

	int* p3 = const_cast<int*>(&c); // ok.. 상수의 주소를
									// 비상수 포인터에 담을때 사용
								// 같은 타입만 가능

}
