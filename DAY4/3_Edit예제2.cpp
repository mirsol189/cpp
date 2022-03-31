#include <iostream>
#include <string>
#include <conio.h>

// Validation 정책은 교체 가능해야 한다.

// 공통성과 가변성의 분리
// => 변하지 않은 코드 내부에 있는 변해야 하는 부분을 찾는다.
// => 변해야 하는 부분을 분리한다.

// 변하는 것을 분리하는 방법 1. 변하는 것을 가상함수로 분리한다.
//							==> 변경하고 싶다면 파생 클래스를 설계하라는것

class Edit
{
	std::string data;
public:

	// 변하는 것을 담은 가상함수
	virtual bool validate(char c)
	{
		return true;
	}

	std::string getData()
	{
		data.clear();

		while (1)
		{
			char c = _getch(); 

			if (c == 13)      
				break;

			if (validate(c)) // 가상함수 호출
			{
				std::cout << c;    
				data.push_back(c); 
			}
		}
		std::cout << std::endl;

		return data;
	}
};

// validation 정책을 변경하려면
// 파생 클래스를 만들어서 가상함수를 재정의 하라는 의도!
class NumEdit : public Edit
{
public:
	bool validate(char c) override
	{
		return isdigit(c);
	}
};

int main()
{
	//Edit e;
	NumEdit e;
	while (1)
	{
		std::cout << e.getData() << std::endl;
	}
}


