#include <iostream>

// Step 7. 자료구조의 변경 
//		   Stack 사용자가 버퍼 크기 변경가능하게
//         배열 => 동적 메모리 할당
//		   소멸자 도입, 객체 파괴시 객체가 사용하던 자원 반납

class Stack
{
private:
	int* buff;
	int  idx;

public:
	Stack(int size = 10) 
	{
		idx = 0; 
		buff = new int[size];
	}

	// 소멸자 : "~클래스이름" 모양의 함수
	//		   객체가 파괴 될때 자동으로 호출된다.
	//		   반드시 만들 필요는 없고 필요할때만 만들면 된다.
	~Stack()
	{
		// 생성자에서 획득한 자원이 있으면 여기서 반납한다.
		delete[] buff;
	}


	void push(int value) { buff[idx++] = value; }
	int pop() { return buff[--idx]; }
};

int main()
{
//	Stack s1;		// 이렇게 생성하면 size 는 디폴트값 10
	Stack s1(20);	// 이렇게 하면 생성자인자에 20이 전달됩니다.

	s1.push(10);
	s1.push(20);


	std::cout << s1.pop() << std::endl;
}







