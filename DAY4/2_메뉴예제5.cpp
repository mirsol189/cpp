#include <iostream>
#include <string>
#include <vector>
#include <conio.h>


// C �� ���α׷��� �ٷκ��� ����
// => ���α׷��̶� main �Լ� ���� ���ʴ�� ����Ǵ� �����帧�̴�.

// => �����帧�� �����Ϸ��� ����� ����ϸ� �ȴ�.

// => ���α׷��� ��ɺ��� �и��Ϸ��� �Լ��� ����� �ȴ�.


// ��ü���� �� ���α׷��� �ٶ� ���� ���� 

// => ���α׷��� "��ü�� ����" �ϰ� "��ü�� ���踦 ����" �ϰ�
//    ��ü�� �޼����� �ְ� �޴�(����Լ��� ȣ���Ѵٴ� �ǹ�) ���̴�








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
	// ���� ���α׷����� �޴��� �ʿ��ϸ� �Ʒ�ó�� ����ϼ���
	PopupMenu* root = new PopupMenu("root");
	PopupMenu* p1 = new PopupMenu("�ػ� ����");
	PopupMenu* p2 = new PopupMenu("���� ����");

	root->add_menu(p1);
	root->add_menu(p2);
//	p1->add_menu(p2);	

	p1->add_menu(new MenuItem("HD",  11));
	p1->add_menu(new MenuItem("FHD", 12));
	p1->add_menu(new MenuItem("UHD", 13));

	p2->add_menu(new MenuItem("RED",   21));
	p2->add_menu(new MenuItem("GREEN", 22));
	p2->add_menu(new MenuItem("BLUE",  23));

	// ���� ��� �޴��� �ᱹ root �޴��� �پ� �ֽ��ϴ�.
	// root�� �����ϸ� ���۵˴ϴ�.
	root->command();
}
