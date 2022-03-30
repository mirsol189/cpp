

// github.com/codenuri/cpp  에서 "DAY4_사전소스.zip" 받으세요

// codexpert.org 에서 출석해 주세요

#include <iostream>

// 강한 결합(tightly coupling )
// 하나의 클래스가 다른 클래스 사용시 "클래스이름"을 직접 사용하는것

// 교체 불가능한 경직된 디자인.. 

// OCP 를 만족하지 못하는 디자인





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
	void useCamera(Camera* p)   { p->take(); }
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

