#include <iostream>
#include <string>
#include <conio.h>

// ���ϴ� ���� �и��ϴ� 2���� ���
// 1. ���ϴ� ���� �����Լ��� - Edit2�� ����
// 2. ���ϴ� ���� �ٸ� Ŭ������ - Edit3�� ����


// Validation ��å�� ���� Ŭ������ �����Ѵ�.
// ��ü �����ؾ� �ϹǷ� �������̽��� ���� �����Ѵ�.

// ��� Validation ��å�� �Ʒ� �������̽�(�߻�Ŭ����)�� �����ؾ� �Ѵ�.
struct IValidator
{
	virtual bool validate(const std::string& s, char c) = 0;
	virtual bool iscomplete(const std::string& s) { return true; }
	virtual ~IValidator() {}
};
// �ֹ� ��� ��ȣ : 801   1		Ȯ��

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

			if ( pval == nullptr || pval->validate(data, c) ) // ��ȿ�� ���θ� �ܺο� �����Ѵ�.
			{
				std::cout << c;    
				data.push_back(c); 
			}
		}
		std::cout << std::endl;

		return data;
	}
};
// 1. Edit �� �⺻������ ��� �Է��� ����մϴ�.
// 2. �Է°��� Validatioin ��å�� �����Ϸ��� 
//    Validation ��å�� ���� �پ��� Ŭ������ �����ϸ� �˴ϴ�.

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
// ���� "LimitDigitValidator" �� ���� "�پ��� Validation ��å�� ���� Ŭ������ 
// �����ϸ� �˴ϴ�.
// ex) �̸��� ��ĢȮ��, �ֹι�ȣ Ȯ��, ��������, ��ȭ��ȣ ���ĵ�..



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


