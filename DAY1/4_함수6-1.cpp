// 4_�Լ�6-1
void foo(int n)
{
}

// �Լ��� ��ȯ�ϴ� �Լ� => ��ȯŸ��ǥ�Ⱑ ������ ���Դϴ�.
// void(*f)(int) �� ��翡�� "f" �ڸ��� "goo()" ������ �˴ϴ�.
//void(* goo())(int)
auto goo() -> void(*)(int)  // ������ ��ȯ ǥ���ϸ� ���մϴ�.
{
	return &foo;
}

int main()
{
	goo();
}