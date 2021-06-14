#include <iostream>

class Drob
{
public:
	Drob()
	{
		chislitel1 = 1;
		chislitel2 = 1;
		znamenatel1 = 1;
		znamenatel2 = 1;
	}
	Drob(int _chislitel1, int _chislitel2, int _znamenatel1, int _znamenatel2)
	{
		chislitel1 = _chislitel1;
		chislitel2 = _chislitel2;
		znamenatel1 = _znamenatel1;
		znamenatel2 = _znamenatel2;
	}
	int c;
	void metod_sumirovania(int chislitel1, int chislitel2, int znamenatel1, int znamenatel2)
	{
		if (znamenatel1 != znamenatel2)
		{
			std::cout << "err";
		}
		c = chislitel1 + chislitel2;
	}
	int get1()
	{
		return c;
	}

private:
	int chislitel1;
	int chislitel2;
	int znamenatel1;
	int znamenatel2;
};

int main()
{
	Drob drob1;
	drob1.metod_sumirovania(35, 35, 3, 3);
	std::cout << drob1.get1();
}