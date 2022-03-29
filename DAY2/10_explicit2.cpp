#include <string>
#include <vector>

void f1(std::string s) {} // std::string s = "hello",
						  // 즉, 복사 초기화 코드 입니다 
						  // 에러가 없다는 것은
						  // string(const char* ) 생성자가 explicit 
						  // 가 아니라는 의미.
void f2(std::vector<int> v) {} // std::vector<int> v = 10 이 error
							  // vector(int) 생성자가  explicit 라는의미

int main()
{
	f1("hello"); // ok

	std::string s1("hello");  // ok
	std::string s2 = "hello"; // ok

	f2(10); // error

	std::vector<int> v1(10);  // ok
	std::vector<int> v2 = 10; // error 

	
	std::vector<int> v3 = 10; //이건 안되는데 ??  error
	std::vector<int> v4 = { 10 }; //이건 왜 되나요 ? ok
}

