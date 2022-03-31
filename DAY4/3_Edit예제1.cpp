#include <iostream>
#include <string>
#include <conio.h>

// 입력도구에는 Validation(입력값의 유효성) 기능을 넣는것이 좋다.

class Edit
{
	std::string data;
public:
	std::string getData()
	{
		while (1)
		{
			char c = _getch(); //한 문자 입력

			if (c == 13)      // enter 키
				break;

			if (isdigit(c))
			{
				std::cout << c;    // 화면 출력후
				data.push_back(c); // 문자열에 추가
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


