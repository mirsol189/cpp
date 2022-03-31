#include <iostream>

// �������̽� : ���Ѿ� �ϴ� ��Ģ�� ���� �ڵ� 
//			  C#, java �� : "interface" ��� Ű���� ����
//            C++         : "interface" ��� Ű���� ����, �߻�Ŭ���� ���

// ����������
// �������̽� : ���Ѿ� �ϴ� ��Ģ(���������Լ�)�� �ִ� ���
// �߻�Ŭ���� : ���Ѿ� �ϴ� ��Ģ(���������Լ�) + �ٸ� �����
//			  ���� ��� "���������⿹���� Shape ( draw()=0 �� int color)"
//------------------------
// ���� ����(loosely coupling)
// �ϳ��� Ŭ������ �ٸ� Ŭ���� ���� "Ŭ�����̸�"�� �ƴ� "��Ģ�� ���� �������̽�"
// �� ���ؼ� ����ϴ°�

// ��ü ������ ������ �������� �ٽ�

//--------------------------------------------------------
// ��Ģ : "��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ��Ǿ�� �Ѵ�." ��� ��������
//			=> ��� ī�޶�� take �Լ��� ������ �Ѵٴ� �ǹ�
//     "��� ī�޶�� ICamera �������̽��� �����ؾ� �Ѵ�." - �Ϲ����� ��ü����
//                  ICamera ���������� �ؼ��ؾ� �Ѵ�"   - swift 

// C++���� �������̽� ���鶧 "class" ���� "struct" �� ��ȣ�ϴ� �������ֽ��ϴ�.
/*
class ICamera
{
public:
	virtual void take() = 0;
};
*/

#define interface struct  // �̷��� �ϴ� ��쵵 �ֽ��ϴ�.

//struct ICamera
interface ICamera
{
	virtual void take() = 0;

	virtual ~ICamera() {}  // �������̽�(�߻�Ŭ����)�� �ᱹ ��� Ŭ�����̹Ƿ�
						// �ݵ�� �Ҹ��ڸ� �������� ���弼��.
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

