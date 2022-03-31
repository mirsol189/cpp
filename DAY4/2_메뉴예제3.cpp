#include <iostream>
#include <string>
#include <vector>
#include <conio.h>


class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& s, int n) : title(s), id(n) {}

	std::string get_title() const { return title; }

	void command()
	{
		std::cout << get_title() << "�޴� ���õ�" << std::endl;
		_getch();
	}
};

class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;

public:
	PopupMenu(const std::string& s) : title(s) {}

	void add_menu(MenuItem* m) { v.push_back(m); }

	void command()
	{
		while (1)
		{
			system("cls"); // ȭ�� �����..
			int sz = v.size();

			for (int i = 0; i < sz; i++)
			{
				std::cout << i + 1 << ". " << v[i]->get_title() << std::endl;
			}
			std::cout << sz + 1 << ". ����" << std::endl;
			std::cout << "�޴��� �����ϼ��� >> ";
			int cmd;
			std::cin >> cmd;

			if (cmd == sz + 1)
				break;

			if (cmd < 1 || cmd > sz + 1) // �߸��� �Է� 
				continue ; 

			v[cmd - 1]->command();
		}



	}
};

int main()
{
	MenuItem m1("���", 11);
	MenuItem m2("���", 12);

	PopupMenu pm("������ �޴�");
	pm.add_menu(&m1);
	pm.add_menu(&m2);

	pm.command(); 
}
