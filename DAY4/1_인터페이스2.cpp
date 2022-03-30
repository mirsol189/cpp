#include <iostream>



// ī�޶� ���� ������ ����
// ī�޶� �����ڰ� ���Ѿ��ϴ� ��Ģ�� ���� �����Ѵ�.

// ��Ģ : "��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ��Ǿ�� �Ѵ�."

class ICamera
{
public:
	virtual void take() = 0; 
};











class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};



class People
{
public:
	void useCamera(Camera* p) { p->take(); }
	void useCamera(HDCamera* p) { p->take(); }
};

int main()
{
	People p;
	Camera cam;
	p.useCamera(&cam);

	HDCamera hcam;
	p.useCamera(&hcam); // 
}

