// ���ٺ�����2
#include <list>

// STL �� stack �� ������..
// list�� ��ӹ޾Ƽ� ����� ���ô�.
/*
template<typename T>
class Stack : private std::list<T>
{
public:
	void push(const T& a) { std::list<T>::push_back(a); }
};
*/
// ������ ��� Ŭ���� �Լ��� �������� �ʴ´ٸ�..
// �� ����� �ϳ��� ??
// ������ �ϸ� �Ǵµ�..
template<typename T>
class Stack 
{
	std::list<T> c;
public:
	void push(const T& a) { c.push_back(a); }
};

// �� �������� ���� �翬�� "����"�� �����ϴ�. �׷���

// private ��� : ��� Ŭ������ �����Լ��� ������ �Ҽ� �ִ� ��ȸ�� �ִ�.
// ����         : ��� Ŭ������ �����Լ��� ������ �Ҽ� ����.


int main()
{
	Stack<int> s;
	s.push(10);
	s.push(20);

	
//	s.push_front(30); // ����ڰ� �ǵ�ġ �ʰ� 
					  // ��� Ŭ������ �Լ��� ����ߴ�.
					  // error. private ����̹Ƿ�
					  // ��� Ŭ������ ��� ����� private ��ȣ�Ӽ�!
}
