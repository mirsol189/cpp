﻿// 6_함수5
// C++ 함수 특징 5. 함수 삭제. C++11에서 추가된 기능
// 35 page

// gcd(int, int) 가 있을때, gcd(실수, 실수)처럼 사용했다.
// gcd(실수, 실수) 함수가 
// 1. 없으면       : gcd(int, int) 사용
// 2. 선언만 있으면 : 사용시 링크 에러
// 3. 삭제하면     : 사용시 컴파일 에러 
// 41 page 아래 박스 참고..

// 그런데, 실전에서는 일반 함수를 삭제 하기 보다는 
// 컴파일러가 자동으로 만드는 멤버 함수를 삭제하는 코드가 훨씬 널리 사용됩니다.


// 최대 공약수를 구한다고 생각해 보세요
int gcd(int a, int b)
{
	return 0; // 구현생략(구현방법은 책 참고)
}

//double gcd(double a, double b); // 구현이 없는 게 핵심. 의도적으로 선언만
								// gcd(실수, 실수)로 사용시 "링크에러"
							   
double gcd(double a, double b) = delete; // C++11에서 나온 함수삭제
										// 라는 문법
										// 삭제된 함수 사용시
										// 컴파일 에러!

int main()
{
	gcd(1, 2);
	gcd(2.3, 3.2); // 실수는 최대 공약수 개념이 없는데.. 이코드가 에러가 아닙니다.
}
