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

// MenuItem �� ������ �����ϴ� PopupMenu Ŭ���� ����
class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;

public:
	PopupMenu(const std::string& s) : title(s) {}

	void add_menu(MenuItem* m) { v.push_back(m); }

	// �˾��޴��� ���������� �ؾ��ϴ� ����
	void command()
	{

	}
};





int main()
{
	MenuItem m1("���", 11);
	MenuItem m2("���", 12);
	m1.command(); // ��� ����.
}
