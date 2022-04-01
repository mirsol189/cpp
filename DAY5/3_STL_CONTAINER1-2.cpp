// 3_STL_CONTAINER1-2
#include <iostream>
#include <array> // �Ʒ� ���� ������ Ŭ���� ���ø�
				 // C++11���� ����
template<typename T, int N> 
struct array
{
	T x[N];

	inline int size() const { return N; }
};

int main()
{
	std::array<int, 10> a = { 1,2,3,4,5,6,7,8,9,10 };

	std::cout << a.size() << std::endl;

	// std::array �� ũ�������� �Ҽ� �����ϴ�. 
	// resize ��� �Լ� ����.
}