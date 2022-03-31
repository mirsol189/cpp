#include <iostream>
#include <string>
#include <conio.h>

// 변하는 것을 분리하는 2가지 방법
// 1. 변하는 것을 가상함수로 - Edit2번 예제
// 2. 변하는 것을 다른 클래스로 - Edit3번 예제


// Validation 정책을 담은 클래스를 설계한다.
// 교체 가능해야 하므로 인터페이스를 먼저 설계한다.

// 모든 Validation 정책은 아래 인터페이스(추상클래스)를 구현해야 한다.
struct IValidator
{
	virtual bool validate(const std::string& s, char c) = 0;

	virtual bool iscomplete(const std::string& s) { return true; }

	virtual ~IValidator() {}
};

// 주민 등록  번호 : 801   1		확인





class Edit
{
	std::string data;
public:
	std::string getData()
	{
		data.clear();

		while (1)
		{
			char c = _getch(); 

			if (c == 13)      
				break;

			if (isdigit(c))
			{
				std::cout << c;    
				data.push_back(c); 
			}
		}
		std::cout << std::endl;

		return data;
	}
};




int main()
{
	Edit e;
	while (1)
	{
		std::cout << e.getData() << std::endl;
	}
}


