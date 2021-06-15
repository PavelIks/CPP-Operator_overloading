#include <iostream>

class C_Test
{
public:
	C_Test()
	{
		this->a = 0;
		this->b = 0;
	}
	C_Test(int a, int b)
	{
		this->a = new int(a);
		this->b = new int(b);
	}
	inline C_Test* operator +(C_Test& other)
	{
		return new C_Test(*other.getA() + *this->getA(), *other.getB() + *this->getB());
	}
	int* getA()
	{
		return this->a;
	}
	int* getB()
	{
		return this->b;
	}
	void show()
	{
		std::cout << *this->getA() << " : " << *this->getB() << "\n";
	}
private:
	int* a;
	int* b;
};

int main()
{
	/*int a = 7;
	int b = 8;
	int c = a + b;
	std::cout << a + b;*/

	C_Test test_1(9, 9);
	C_Test test_2(7, 7);

	C_Test* test_res = test_1 + test_2;
	test_res->show();

	//		error
	//std::cout << *test_res;
}