int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }

int main()
{
	// QA. 인라인 함수도 함수 포인터 만들수 있나요 ?
	//    => 가능합니다. 이 경우, 함수 포인터로 호출시는 
	//	  => 인라인 치환될수 없습니다. 항상 호출입니다
	int(*f)(int, int) = &add2;

//	if (사용자 입력값 == 1) f = &add1;

	// 1. 인라인 치환은 컴파일 시간에 이루어 집니다.
	// 2. 그런데, f는 실행시 변경가능한 "변수" 입니다.
	// 3. 그래서 아래 코드는 치환될수 없습니다.
	f(1, 2); // 치환될수 없습니다. 호출입니다.
}

