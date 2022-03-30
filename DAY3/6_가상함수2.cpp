// 7_가상함수2.cpp  147 page ~

class Shape
{
public:
	virtual void Draw() {};
	virtual void Clone() const {};
	virtual void Move() {};
};

class Rect : public Shape
{
public:
	// 1. 가상함수 재정의시 virtual 은 빼도 되는데, 붙이는 것이 좋습니다.(?)
	// 2. C++98 시절에 가상함수 재정의시 오타가 있어서 에러가 나지 않았습니다.
	// 3. 그래서 C++11 에서 override 키워드를 만들었습니다.

	// 결론, 가상함수 재정의시 꼭 override 붙이세요.(문법상 없어도 되지만, 안전하게 하기위해)
	virtual void draw()  override {};
	virtual void Clone() override {};
	virtual void Move(int n) override {};
};

int main()
{

}
