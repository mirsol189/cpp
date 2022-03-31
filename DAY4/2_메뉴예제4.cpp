#include <iostream>
#include <string>
#include <vector>
#include <conio.h>


// ��� �޴��� ��� Ŭ����
class BaseMenu
{
	std::string title;
public:
	BaseMenu(const std::string& s) : title(s) {}
	virtual ~BaseMenu() {}
	std::string get_title() const { return title; }

	// ��� �Ļ� Ŭ������ ������ Ư¡�� �ݵ�� ��� Ŭ������ �־���Ѵ�.
	// ��� �޴��� ���õɼ� �ִ�.
	virtual void command() = 0;
};




class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(const std::string& s, int n) : BaseMenu(s), id(n) {}

	void command()
	{
		std::cout << get_title() << "�޴� ���õ�" << std::endl;
		_getch();
	}
};
class PopupMenu : public BaseMenu
{
	std::string title;
	std::vector<BaseMenu*> v;
public:
	PopupMenu(const std::string& s) : BaseMenu(s) {}

	void add_menu(BaseMenu* m) { v.push_back(m); }

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
