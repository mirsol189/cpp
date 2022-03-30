#include <iostream>



// ī�޶� ���� ������ ����
// ī�޶� �����ڰ� ���Ѿ��ϴ� ��Ģ�� ���� �����Ѵ�.

// ��Ģ : "��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ��Ǿ�� �Ѵ�."
//			=> ��� ī�޶�� take �Լ��� ������ �Ѵٴ� �ǹ�

class ICamera
{
public:
	virtual void take() = 0; 
};

// ��Ģ�� �����Ƿ� ���� ī�޶� ��� ī�޶� ����ϴ� �ڵ带
// ���� �ۼ��ص� �˴ϴ�
// ��Ģ��θ� ����ϸ� �˴ϴ�.
class People
{
public:
	void useCamera(ICamera* p) { p->take(); }
};

// ���� ��� ī�޶�� "��Ģ"�� ���Ѿ� �մϴ�.
// "ICamera" �κ��� �Ļ��Ǿ�� �մϴ�.

class Camera : public ICamera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};


int main()
{
	People p;
	Camera cam;
	p.useCamera(&cam);

	HDCamera hcam;
	p.useCamera(&hcam); // 
}

