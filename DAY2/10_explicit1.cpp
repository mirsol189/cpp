class Bike
{
	int gear;
public:
	// explicit ������ : ���� �ʱ�ȭ �� �����ϰ�
	//					���� ȣ��ȭ �� ����Ҽ� ����.
	explicit Bike(int n) : gear(n) {}
};

void foo(Bike b) {} // Bike b = �Լ�����(7)
					// ��, �Լ��� ���� ������ "���� �ʱ�ȭ ����"�Դϴ�.

int main()
{
	// ���ڰ� int �Ѱ��� �����ڰ� ������ �Ʒ�ó�� ��ü�� ����� �ֽ��ϴ�.
	// C++98 ���� ���� ����
	Bike b1(7);		// direct initialization
	Bike b2 = 7;	// copy   initialization

	// C++11 ���� ����
	Bike b3{ 7 };	// direct initialization
	Bike b4 = { 7 };// copy   initialization

	foo(7); // ?
}