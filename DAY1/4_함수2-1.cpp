#include <iostream>

//void fn(short n)  { std::cout << "short" << std::endl; }    // 0
//void fn(int n)    { std::cout << "int" << std::endl; }    // 1
//void fn(double n) { std::cout << "double" << std::endl; } // 2
//void fn(float n)  { std::cout << "float" << std::endl; }  // 3
void fn(... )     { std::cout << "..." << std::endl; }    // 4

int main()
{
	fn( 3.4f ); // 3�� ��� - exactly matching
				// 2�� ��� - promotion. ����Ÿ �ս��� ���� ��ȯ
				// 1�� ��� - standard conversion 
				//				(ǥ�� Ÿ���� �Ͻ��� ����ȯ �ɼ� �ִ�)
				//				����Ÿ �ս� ���ɼ� �ִ�.
				// 4�� ��� - �������� �Լ�..
	// ���� �̸��� �Լ��� ������ ������..
	// �Լ� ã�� ��� - "overloading resolution" �̶�� �մϴ�.
	//				  ��� ��츦 ����ϸ� ���� �����մϴ�.

	// 1. �Ͻ������� �߻��ϴ� ĳ������ ������ ������ ?? 
	//    => ����� ����Ÿ��(Ŭ������ �����)�� ����. primitive Ÿ���� �ȵ�
	//	  => �� int n = 3.4; �� �ǰ� �ϴ°� ?? ��� ��ü�� �߸� �����ߴ�.
	//	     �ٸ� ���� �Ͻ��� ��ȯ �ȵ�.

	// �����Ͽ����� ���ٴ� ���� ��� �Լ��� ȣ�������� ������ �ð��� �����ȴٴ°�
	// ���ڿ� ? ==>��... ��, 3���� �����Լ��� ����ð��� �����˴ϴ�.
	//		   ==>���� �߿��մϴ�.(static binding, dynamic binding)
}