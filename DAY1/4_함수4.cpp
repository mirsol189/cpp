// 4_함수4 - 38 page
// C++ 함수의 특징 4. 함수 템플릿

/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/

// 구현이 유사(동일)한 함수가 여러개 필요 하다면
// 여러개 함수를 만들지 말고
// 함수를 만들때 사용할 "틀(템플릿)"을 만드는 것이 좋습니다.

template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
	// 정확한 표기법
	square<int>(3); // 1. 컴파일러가 "int square(int)" 함수생성
					// 2. 그리고 이 위치에 "call square(int)" 로 컴파일
	square<double>(3.4); // double square(double) 함수 생성

	// 템플릿 사용시 "타입 인자"를 생략하면 
	// 컴파일러가 "함수 인자"를 보고 추론합니다.
	square(3);  // == square<int>(3) 과 동일
	square(3.4);
}