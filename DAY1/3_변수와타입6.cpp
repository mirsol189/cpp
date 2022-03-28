// github.com/codenuri/cpp "DAY1_오후.zip" 파일 받으세요

// 28 page 이야기.

#include <iostream>
#include <cstring> // C 언어의 문자열 함수. <string.h> 의 C++버전
#include <string>  // C++ 의 std::string 타입

int main()
{
	char s1[] = "ABCD";
	char s2[10];

//	s2 = s1; // 의도 : 문자열 복사.. 하지만 error. 배열의 이름은 상수
			 // strcpy(s2, s1)
			 // strcpy_s(s2, sizeof(s2), s1)

	if ( s1 == s2 ) {} // 의도 : 문자열 비교.
					   // 하지만, 배열 주소 비교, 항상 false 
					   // strcmp(s2, s1) == 0

	// C++에서는 문자열이 필요하면 std::string 사용하세요
	// 문자열 변수를 정수형 변수처러 생각하고 사용하면 됩니다.
	std::string s3 = "ABCD";
	std::string s4;

	s4 = s3; 
	s3 = s3 + s4;

	if (s3 == s4) {}   

	std::cout << s3 << std::endl;
}


