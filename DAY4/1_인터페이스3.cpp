#include <iostream>

// 인터페이스 : 지켜야 하는 규칙을 담은 코드 
//			  C#, java 등 : "interface" 라는 키워드 있음
//            C++         : "interface" 라는 키워드 없고, 추상클래스 사용

// 관례적으로
// 인터페이스 : 지켜야 하는 규칙(순수가상함수)만 있는 경우
// 추상클래스 : 지켜야 하는 규칙(순수가상함수) + 다른 멤버들
//			  어제 배운 "도형편집기예제의 Shape ( draw()=0 와 int color)"
//------------------------
// 약한 결합(loosely coupling)
// 하나의 클래스가 다른 클래스 사용시 "클래스이름"이 아닌 "규칙을 담은 인터페이스"
// 를 통해서 사용하는것

// 교체 가능한 유연한 디자인의 핵심

//--------------------------------------------------------
// 규칙 : "모든 카메라는 아래 클래스로 부터 파생되어야 한다." 라고 하지말고
//			=> 모든 카메라는 take 함수를 만들어야 한다는 의미
//     "모든 카메라는 ICamera 인터페이스를 구현해야 한다." - 일반적인 객체지향
//                  ICamera 프로토콜을 준수해야 한다"   - swift 

// C++에서 인터페이스 만들때 "class" 보다 "struct" 를 선호하는 경향이있습니다.
/*
class ICamera
{
public:
	virtual void take() = 0;
};
*/

#define interface struct  // 이렇게 하는 경우도 있습니다.

//struct ICamera
interface ICamera
{
	virtual void take() = 0;

	virtual ~ICamera() {}  // 인터페이스(추상클래스)도 결국 기반 클래스이므로
						// 반드시 소멸자를 가상으로 만드세요.
};




class People
{
public:
	void useCamera(ICamera* p) { p->take(); }
};

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

class UHDCamera : public ICamera
{
public:
	void take() { std::cout << "take UHD picture" << std::endl; }
};

int main()
{
	People p;
	Camera cam;
	p.useCamera(&cam);

	HDCamera hcam;
	p.useCamera(&hcam); // 

	UHDCamera uhcam;
	p.useCamera(&uhcam); // 
}

