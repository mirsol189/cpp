// �޸� �̾߱�
// C++
class Point
{
	int x;
	int y;
};
int main()
{
	Point pt; // ���ÿ� �����
	Point* p = new Point; // ���� ����� 

}

// C#, java, swift 
// => Ÿ���� �޸� ��ġ�� "Ÿ���� �����ڰ� ����"
// struct : value type, ���ÿ� ����. ����� ���ο� ��ü ����
// class  : reference type, ��������, ����� ����(������ ����)
class CPoint
{
	int x;
	int y;
};
struct SPoint
{
	int x;
	int y;
};
int main()
{
	// C#
	CPoint cp = new CPoint();
	SPoint sp = new SPoint();

	SPoint sp2 = sp;
	CPoint cp2 = cp;
}