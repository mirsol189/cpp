#include <iostream>

class Counter
{
	int count = 0;
public:
//	Counter increment()
	Counter& increment()
	{
		++count;
		return *this;
	}
	int get() { return count; }

	~Counter() {std::cout << "~Counter" << std::endl;	}
};

int main()
{
	Counter c;
//	c.increment();
//	c.increment();
//	c.increment();
	c.increment().increment().increment();

	std::cout << c.get() << std::endl; // ?
}
