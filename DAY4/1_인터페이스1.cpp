

// github.com/codenuri/cpp  ���� "DAY4_�����ҽ�.zip" ��������

// codexpert.org ���� �⼮�� �ּ���

#include <iostream>

// ���� ����(tightly coupling )
// �ϳ��� Ŭ������ �ٸ� Ŭ���� ���� "Ŭ�����̸�"�� ���� ����ϴ°�

// ��ü �Ұ����� ������ ������.. 

// OCP �� �������� ���ϴ� ������





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

