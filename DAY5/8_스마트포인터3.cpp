#include <iostream>

class Car
{
	int speed;
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car() { std::cout << "~Car" << std::endl; }
};

// �ٽ�. ����Ʈ�����ʹ� "��������"�� �ذ��ؾ� �մϴ�.
//		=> ���� ���簡 �ƴ� "�������"�� �ذ��ؾ� �մϴ�.
//         (�������� ���۹���� ������ ������)
template<typename T>
class Ptr
{
	T* obj;
	int* ref;
public:
	inline Ptr(T* p = 0) : obj(p) 
	{
		ref = new int;
		*ref = 1;
	}
	inline ~Ptr() 
	{
		if (--(*ref) == 0)
		{
			delete obj;
			delete ref;
		}
	}
	Ptr(const Ptr& p) : obj(p.obj), ref(p.ref)
	{
		++(*ref);
	}

	inline T* operator->() { return obj; }
	inline T& operator*() { return *obj; }
};

int main()
{
	Ptr<Car> p1 = new Car;
	Ptr<Car> p2 = p1;

}



