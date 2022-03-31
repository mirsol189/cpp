#include <iostream>
#include <string>
#include <vector>
#include <conio.h>


// 모든 메뉴의 기반 클래스
class BaseMenu
{
	std::string title;
public:
	BaseMenu(const std::string& s) : title(s) {}
	virtual ~BaseMenu() {}
	std::string get_title() const { return title; }

	// 모든 파생 클래스의 공통의 특징은 반드시 기반 클래스에 있어야한다.
	// 모든 메뉴는 선택될수 있다.
	virtual void command() = 0;
};




class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(const std::string& s, int n) : BaseMenu(s), id(n) {}

	void command()
	{
		std::cout << get_title() << "메뉴 선택됨" << std::endl;
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
			std::cout << sz + 1 << ". 종료" << std::endl;
			std::cout << "메뉴를 선택하세요 >> ";
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
	MenuItem k1("참치김밥", 1);
	MenuItem k2("소고기김밥", 2);

	PopupMenu kpm("김밥");
	kpm.add_menu(&k1);
	kpm.add_menu(&k2);


	MenuItem m2("라면", 12);
	MenuItem m3("국수", 13);

	PopupMenu pm("오늘의 메뉴");
	pm.add_menu(&kpm); // 핵심!!!! kpm 은 popup 입니다.
	pm.add_menu(&m2);
	pm.add_menu(&m3);

	pm.command();
}
