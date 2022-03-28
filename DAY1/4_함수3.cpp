// C++ 함수 특징 3. inline   .. 32page


       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }

// 장점 ; 빠르다.
// 단점 : 여러번 치환되면 목적 코드(.obj, .exe)가 커질수 있다.

int main()
{
	int n1 = add1(1, 2);	// 1) 1, 2를 약속된 장소(레지스터)에 넣고
							// 2) call add1
		
	int n2 = add2(1, 2);	// 1) mov eax, 1
							// 2) add eax, 2   즉 더하는 기계어코드
}
