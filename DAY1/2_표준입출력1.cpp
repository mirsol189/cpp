// 2_ǥ�������1.cpp - 12 page
#include <cstdio>	// C ǥ�� ������� C++���
#include <iostream> // C++ ǥ�� �����

int main()
{
	int n = 10;
	
	// printf : �Լ� �Դϴ�.
	// cout   : ��ü��� ���� �Դϴ�. - 5������ ���� cout�� ����� ���ڽ��ϴ�.
	printf("%d\n", n);

	std::cout << "n = " << n << std::endl;	// std::endl �� ����
											// "\n" �� ��밡��
	double d = 3.4;
	std::cout << d << std::endl; // �Ǽ��� ���
	std::cout << (int)d << std::endl; // 


//	scanf("%d", &n); // C��� ǥ�� �Է�, ������ scanf_s()
	std::cin >> n;   // "&n" �� �ƴ϶� "n" �Դϴ�.

	n << 10; // n�� int Ÿ���̶�� ���� C++�����Ϸ��� �˰� �ֽ��ϴ�.
	         // => ����Ʈ �����ڷ� �ؼ��� �ݴϴ�.

	std::cout << 10; // cout�� ��ü�� �����Ϸ��� �˰� �ֽ��ϴ�.
					// << �����ڷ� �򰥸����� �ʽ��ϴ�.
					// cout.operator<<()
}
