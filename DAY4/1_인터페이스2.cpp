#include <iostream>



// 카메라를 먼저 만들지 말고
// 카메라 제작자가 지켜야하는 규칙을 먼저 설계한다.

// 규칙 : "모든 카메라는 아래 클래스로 부터 파생되어야 한다."

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

