#include <iostream>

class Car
{
	int speed;
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car() { std::cout << "~Car" << std::endl; }
};

// 핵심. 스마트포인터는 "얕은복사"를 해결해야 합니다.
//		=> 깊은 복사가 아닌 "참조계수"로 해결해야 합니다.
//         (포인터의 동작방식을 생각해 보세요)
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



