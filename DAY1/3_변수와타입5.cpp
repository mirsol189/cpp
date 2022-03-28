// 3_변수와타입5.cpp
// 26 page 아래 부분

struct Point
{
	int x = 0; 
	int y = 0;
};
int main()
{
	Point pt = { 1,2 };

	int x = pt.x;
	int y = pt.y;

	// C++17 부터 구조체(배열)의 모든 요소를 한줄로 꺼낼수 있습니다.
	auto[a1, a2] = pt; 
}