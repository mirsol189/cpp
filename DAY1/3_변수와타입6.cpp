// github.com/codenuri/cpp "DAY1_����.zip" ���� ��������

// 28 page �̾߱�.

#include <iostream>
#include <cstring> // C ����� ���ڿ� �Լ�. <string.h> �� C++����
#include <string>  // C++ �� std::string Ÿ��

int main()
{
	char s1[] = "ABCD";
	char s2[10];

//	s2 = s1; // �ǵ� : ���ڿ� ����.. ������ error. �迭�� �̸��� ���
			 // strcpy(s2, s1)
			 // strcpy_s(s2, sizeof(s2), s1)

	if ( s1 == s2 ) {} // �ǵ� : ���ڿ� ��.
					   // ������, �迭 �ּ� ��, �׻� false 
					   // strcmp(s2, s1) == 0

	// C++������ ���ڿ��� �ʿ��ϸ� std::string ����ϼ���
	// ���ڿ� ������ ������ ����ó�� �����ϰ� ����ϸ� �˴ϴ�.
	std::string s3 = "ABCD";
	std::string s4;

	s4 = s3; 
	s3 = s3 + s4;

	if (s3 == s4) {}   

	std::cout << s3 << std::endl;
}


