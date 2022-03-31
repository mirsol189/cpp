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
			system("cls"); 
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

			if (cmd < 1 || cmd > sz + 1) 
				continue;

			v[cmd - 1]->command();
		}
	}
};

int main()
{
	MenuItem k1("��ġ���", 1);
	MenuItem k2("�Ұ����", 2);

	PopupMenu kpm("���");
	kpm.add_menu(&k1);
	kpm.add_menu(&k2);


	MenuItem m2("���", 12);
	MenuItem m3("����", 13);

	PopupMenu pm("������ �޴�");
	pm.add_menu(&kpm); // �ٽ�!!!! kpm �� popup �Դϴ�.
	pm.add_menu(&m2);
	pm.add_menu(&m3);

	pm.command();
}
