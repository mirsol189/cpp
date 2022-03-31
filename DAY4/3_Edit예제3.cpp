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
// 주민 등록 번호 : 801   1		확인

class Edit
{
	std::string data;
	//--------------------------------
	IValidator* pval = nullptr;
public:
	void setValidator(IValidator* p) { pval = p; }
	//--------------------------------
	std::string getData()
	{
		data.clear();

		while (1)
		{
			char c = _getch(); 

			if (c == 13 && (pval == nullptr || pval->iscomplete(data))  )
				break;

			if ( pval == nullptr || pval->validate(data, c) ) // 유효성 여부를 외부에 위임한다.
			{
				std::cout << c;    
				data.push_back(c); 
			}
		}
		std::cout << std::endl;

		return data;
	}
};
// 1. Edit 는 기본적으로 모든 입력을 허용합니다.
// 2. 입력값의 Validatioin 정책을 변경하려면 
//    Validation 정책을 담은 다양한 클래스를 설계하면 됩니다.

class LimitDigitValidator : public IValidator
{
	int value;
public:
	LimitDigitValidator(int n) : value(n) {}

	bool validate(const std::string& s, char c) override
	{
		if (s.size() < value && isdigit(c))
			return true;

		return false;
	}
	bool iscomplete(const std::string& s) override
	{
		return s.size() == value;
	}
};
// 이제 "LimitDigitValidator" 와 같이 "다양한 Validation 정책을 담은 클래스를 
// 제공하면 됩니다.
// ex) 이메일 규칙확인, 주민번호 확인, 나이제한, 전화번호 형식등..



int main()
{
	Edit e;
	LimitDigitValidator v(5);
	e.setValidator(&v);
	while (1)
	{
		std::cout << e.getData() << std::endl;
	}
}


