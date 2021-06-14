// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Drod
{
public:
	Drod()
	{
		this->znamenatel1 = this->chislitel1 = 0;
	}
	Drod(int chislitel1, int znamenatel1)
	{
		this->chislitel1 = chislitel1;
		this->znamenatel1 = znamenatel1;
	}

	// static
	/*Drod operator +(Drod& other)
	{
		return Drod
		(
			other.get_chislitel1() + this->get_chislitel1(),
			other.get_znamenatel1() + this->get_znamenatel1()
		);
	}*/
	// dynamic
	inline Drod* operator +(Drod& other)
	{
		return new Drod
		(
			//other.get_chislitel1() + this->get_chislitel1(),
			//other.get_znamenatel1() + this->get_znamenatel1()

			this->get_znamenatel1() + this->get_chislitel1(),
			other.get_chislitel1() + other.get_znamenatel1()
		);
	}
	int get_chislitel1()
	{
		return this->chislitel1;
	}
	int get_znamenatel1()
	{
		return this->znamenatel1;
	}
	void show()
	{
		std::cout << this->get_chislitel1() << " : " << this->get_znamenatel1() << "\n";
	}

private:
	int chislitel1, znamenatel1;
};

int main()
{
	/*int chislitel1 = 7;
	int znamenatel1 = 8;
	int c = chislitel1 + znamenatel1;
	std::cout << chislitel1 + znamenatel1;*/
	Drod test_1(3, 2);
	Drod test_2(5, 4);

	// static
	//Drod test_res = test_1 + test_2;
	//test_res.show();

	// dynamic
	Drod* test_res = test_1 + test_2;
	test_res->show();

	// error
	//std::cout << *test_res;
}