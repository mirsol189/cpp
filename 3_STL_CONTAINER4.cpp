#include <iostream>

#include <vector>
#include <list>
#include <deque> 

#include <set>	
#include <unordered_set> 

#include <map>			
#include <unordered_map>

#include <string>

int main()
{
	// set �Ѱ��� ��(Ű)�� ������ ����
	std::set<std::string> s = { "mon", "tue", "wed" };

	// map : key-value �� ���� ����
	std::map<std::string, std::string> m = { {"mon","������"},
											 {"tue","ȭ����"} };

	// 1. [] �� ����
	m["mon"] = "������";

	// 2. �ݺ��ڷ� ����

	// 3. ��Ұ� �ִ��� Ȯ�� => ����Լ��� �������ϴ�.
	//    C++20���� �߰��Ǿ����ϴ�.
//	if ( m.contains("mon") ) // set���� �ֽ��ϴ�.
//	{
//	}


	
}

