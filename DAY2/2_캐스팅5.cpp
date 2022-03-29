int main()
{
	const int c = 10;

	// c의 주소를 double* 에 담고 싶습니다.
//	double* p = (double*)&c; // ok.. C 스타일 캐스팅은 아주 쉽게 해결


	// C++ 스타일
//	double* p = static_cast<double*>(&c); // error
//	double* p = reinterpret_cast<double*>(&c); // error
//	double* p = const_cast<double*>(&c); // error. 타입이 다르다.

	double* p = reinterpret_cast<double*>( const_cast<int*>(&c)); 
								// ok..
}
// static_cast
// reinterpret_cast
// const_cast

// dynamic_cast => 상속 배워야 합니다. 위 3개와 동작 방식 다릅니다





