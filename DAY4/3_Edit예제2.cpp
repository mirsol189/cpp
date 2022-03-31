#include <iostream>
#include <string>
#include <conio.h>

// Validation ��å�� ��ü �����ؾ� �Ѵ�.

// ���뼺�� �������� �и�
// => ������ ���� �ڵ� ���ο� �ִ� ���ؾ� �ϴ� �κ��� ã�´�.
// => ���ؾ� �ϴ� �κ��� �и��Ѵ�.

// ���ϴ� ���� �и��ϴ� ��� 1. ���ϴ� ���� �����Լ��� �и��Ѵ�.
//							==> �����ϰ� �ʹٸ� �Ļ� Ŭ������ �����϶�°�

class Edit
{
	std::string data;
public:

	// ���ϴ� ���� ���� �����Լ�
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

			if (validate(c)) // �����Լ� ȣ��
			{
				std::cout << c;    
				data.push_back(c); 
			}
		}
		std::cout << std::endl;

		return data;
	}
};

// validation ��å�� �����Ϸ���
// �Ļ� Ŭ������ ���� �����Լ��� ������ �϶�� �ǵ�!
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


