// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Drob
{
public:
	Drob()
	{
		this->znamenatel1 = this->chislitel1 = 0;
	}
	Drob(int chislitel1, int znamenatel1)
	{
		this->chislitel1 = new int(chislitel1);
		this->znamenatel1 = new int(znamenatel1);
	}

	// static
	/*Drob operator +(Drob& other)
	{
		return Drob
		(
			other.get_chislitel1() + this->get_chislitel1(),
			other.get_znamenatel1() + this->get_znamenatel1()
		);
	}*/
	// dynamic
	inline Drob* operator +(Drob& other)
	{
		if (other.get_chislitel1() == other.get_znamenatel1())
		{
			return new Drob
			(
				other.get_chislitel1() /*+ this->get_chislitel1()*/, other.get_znamenatel1()
				//other.get_chislitel1() + this->get_chislitel1(),
					//other.get_znamenatel1() + this->get_znamenatel1()

			);
		}
	}
	int get_chislitel1()
	{
		return *this->chislitel1;
	}
	int get_znamenatel1()
	{
		return *this->znamenatel1;
	}
	void show()
	{
		std::cout << this->get_chislitel1() << "\n" << "---" << "\n" << this->get_znamenatel1() << "\n";
	}

	~Drob()
	{

	}

private:
	int* chislitel1, * znamenatel1;
};

int main()
{
	/*int chislitel1 = 7;
	int znamenatel1 = 8;
	int c = chislitel1 + znamenatel1;
	std::cout << chislitel1 + znamenatel1;*/
	Drob drob1(3, 2);
	Drob drob2(5, 4);

	drob1.show();
	// static
	//Drob test_res = drob1 + drob2;
	//test_res.show();

	// dynamic
	Drob* test_res = drob1 + drob2;
	//test_res->show();

	// error
	//std::cout << *test_res;
}