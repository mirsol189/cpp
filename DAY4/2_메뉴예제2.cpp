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
		std::cout << get_title() << "메뉴 선택됨" << std::endl;
		_getch();
	}
};

// MenuItem 을 여러개 보관하는 PopupMenu 클래스 설계
class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;

public:
	PopupMenu(const std::string& s) : title(s) {}

	void add_menu(MenuItem* m) { v.push_back(m); }

	// 팝업메뉴를 선택했을때 해야하는 동작
	void command()
	{

	}
};





int main()
{
	MenuItem m1("김밥", 11);
	MenuItem m2("라면", 12);
	m1.command(); // 김밥 선택.
}
