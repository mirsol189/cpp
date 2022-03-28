// 2_메모리할당 - 43 page
#include <iostream>

int main()
{
	// C 스타일
	int* p = (int*)malloc(sizeof(int) * 20);
	free(p);

	// C++ 스타일
	int* p1 = new int;
	delete p1;

	int* p2 = new int[10];
	delete[] p2; // 주의 배열 할당한 경우.  배열 모양 delete 사용
}

//				malloc				new
// 정체			함수					연산자(키워드)
// 인자			메모리 크기			타입
// 반환타입		void*				인자로 전달한 타입*
//				받을때 캐스팅 필요		캐스팅 필요 없음.
// 결정적 차이	생성자 호출안됨		생성자 호출됨 - 내일 주제