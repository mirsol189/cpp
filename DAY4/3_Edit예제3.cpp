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




int main()
{
	Edit e;
	while (1)
	{
		std::cout << e.getData() << std::endl;
	}
}


