#include <iostream>

// �����Ϸ��� Animal �� ��� �����Լ��� �ּҸ� ��� �迭 ����

�Լ��ּ�ũ��Ÿ��(void*��) animal_vtable[] = { RTTI����, 
										  &Animal::Cry, 
										  &Animal::Run };
class Animal
{
	void* vtptr = animal_vtable; // �����Ϸ��� �߰��� ���.
	int age;
public:
	virtual void Cry() {} 
	virtual void Run() {}
};
//--------------------
// Dog �����Լ� ������ ���� �迭(�����Լ� ���̺��̶�� �մϴ�.)
�Լ��ּ�ũ��Ÿ��(void*��) dog_vtable[] = { RTTI����,
									&Dog::Cry,
									&Animal::Run };
class Dog : public Animal
{
	vtable = dog_vtable; // �����Ϸ��� �߰��� �ڵ�
	int color;
public:
	virtual void Cry() {} 
};

int main()
{
	Animal a1;
	Animal a2;
	Dog    d;
	Animal* p = &d;

	p->Cry(); // �����Լ� �̹Ƿ� 2�� ȣ�� 
			  // p�� ����Ű�� ���� �����Ŀ� ȣ��

			  // Cry �����Լ��� Animal ���� ���° ����
			// ������ �߿� �մϴ�.
	// p->vtable[1]() ��� ���� �ڵ� ����
}


