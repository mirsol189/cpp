// 3_������Ÿ��5.cpp
// 26 page �Ʒ� �κ�

struct Point
{
	int x = 0; 
	int y = 0;
};
int main()
{
	Point pt = { 1,2 };

	int x = pt.x;
	int y = pt.y;

	// C++17 ���� ����ü(�迭)�� ��� ��Ҹ� ���ٷ� ������ �ֽ��ϴ�.
	auto[a1, a2] = pt; 
}