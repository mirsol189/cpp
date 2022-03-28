// 4_함수6. 후위 반환 타입 - 41page 제일 아래 부분

// 일반적인 함수 모양
/*
int square(int a)
{
	return a * a;
}
*/

// C++11 에서 새로 나온 함수 모양
// 후위 반환 타입(suffix return type)이라는 문법
// 요즘 나오는 대부분의 언어가 반환 타입을 뒷쪽에 표기합니다.
auto square(int a) -> int
{
	return a * a;
}


int main()
{
	square(3);
}
