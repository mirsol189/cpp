// 2_this2-1
struct Point   // class 로 해도 됩니다.
{
	int x;
	int y;
};

// 핵심 1. f1, f2 의 차이점을 정확히 알아 두세요
void f1(Point  p1) {}
void f2(Point& p2) {}

int main()
{
	Point pt;
	f1(pt);
	f2(pt);
}