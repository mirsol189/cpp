#include <iostream>
#include <string>
#include <conio.h>

// �Էµ������� Validation(�Է°��� ��ȿ��) ����� �ִ°��� ����.

class Edit
{
	std::string data;
public:
	std::string getData()
	{
		while (1)
		{
			char c = _getch(); //�� ���� �Է�

			if (c == 13)      // enter Ű
				break;

			if (isdigit(c))
			{
				std::cout << c;    // ȭ�� �����
				data.push_back(c); // ���ڿ��� �߰�
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


