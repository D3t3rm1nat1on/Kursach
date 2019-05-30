#pragma once
#include <vector>
#include <string>
#include <fstream>

using std::ofstream;
using std::ifstream;
using std::string;
using std::ostream;
using std::istream;
using std::ios;

class Product
{
public:

	string get_name();
	int get_kolvo();
	void add_kolvo(int);
	void change_name(string);
	void change_kolvo(int);

	Product();
	Product(string, int);
	~Product();

	// функция для записи объекта Product в бинарный файл
	void write(ostream& os)
	{

		size_t len = name.length() + 1;       // Длина с нулевым байтом
		os.write((char*)&len, sizeof(len)); // Запись длины
		os.write((char*)name.c_str(), len);  // Запись данных
		os.write((char*)&kolvo, sizeof(kolvo)); // Запись POD-члена
	}

	// функция для чтения объекта Product из бинарного файла
	void read(istream& in)
	{
		size_t len;                         // Переменная для длины
		in.read((char*)&len, sizeof(len));  // Чтение длины записанной строки
		char * buf = new char[len];         // Выделение буфера для чтения
		in.read(buf, len);                   // Чтение (с нулевым байтом)
		name = buf;                         // Присвоение считанной строки члену
		in.read((char*)&kolvo, sizeof(kolvo));   // Чтение POD-члена
		delete[]buf;                        // Освобождение памяти
	}
	
	// Переменные public потому что
	// их нужно менять в других функциях
private:
	string name;
	int kolvo;
};

string Product::get_name()
{
	return name;
}

int Product::get_kolvo()
{
	return kolvo;
}

void Product::add_kolvo(int kolvo)
{
	this->kolvo += kolvo;
}

void Product::change_name(string name)
{
	this->name = name;
}

void Product::change_kolvo(int kolvo)
{
	this->kolvo = kolvo;
}


Product::Product(string name, int kolvo)
{
	this->name = name;
	this->kolvo = kolvo;
}

Product::Product()
{
	name = "???";
	kolvo = 0;
}

Product::~Product()
{
}

class Bludo
{
public:
	Bludo();
	Bludo(int, string);
	~Bludo();

	std::vector <Product> get_list()
	{
		return list;
	}

	void add(Product prod)
	{
		int n = list.size();
		string name = prod.get_name();
		for (int i = 0; i < n; i++)
		{
			if (list[i].get_name() == name)
			{
				list[i].add_kolvo(prod.get_kolvo());
				return;
			}
		}
		list.push_back(prod);
	}

	// функция для записи объекта Bludo в бинарный файл
	void write(ostream& os)
	{
		size_t len = name.length() + 1;       // Длина с нулевым байтом
		os.write((char*)&len, sizeof(len)); // Запись длины
		os.write((char*)name.c_str(), len);  // Запись данных
		os.write((char*)&cooking_time, sizeof(cooking_time));
		int n = list.size();
		os.write((char*)&n, sizeof(n));

		for (int i = 0; i < n; i++)
		{
			string p_name = list[i].get_name();
			int p_kolvo = list[i].get_kolvo();

			size_t len = p_name.length() + 1;// Длина с нулевым байтом
			os.write((char*)&len, sizeof(len)); // Запись длины
			os.write((char*)p_name.c_str(), len);  // Запись данных
			os.write((char*)&p_kolvo, sizeof(p_kolvo)); // Запись POD-члена
		}
	}

	// функция для чтения объекта Bludo из бинарного файла
	void read(istream& in)
	{
		size_t len;                         // Переменная для длины
		in.read((char*)&len, sizeof(len));  // Чтение длины записанной строки
		char * buf = new char[len];         // Выделение буфера для чтения
		in.read(buf, len);                   // Чтение (с нулевым байтом)
		name = buf;                         // Присвоение считанной строки члену
		in.read((char*)&cooking_time, sizeof(cooking_time));
		int n;
		in.read((char*)&n, sizeof(n));
		delete[]buf;                        // Освобождение памяти

		for (int i = 0; i < n; i++)
		{
			Product temp;
			list.push_back(temp);
			size_t len;                         // Переменная для длины
			in.read((char*)&len, sizeof(len));  // Чтение длины записанной строки
			char * buf = new char[len];         // Выделение буфера для чтения
			in.read(buf, len);                   // Чтение (с нулевым байтом)
			list[i].change_name(buf);				 // Присвоение считанной строки члену
			int k;
			in.read((char*)&k, sizeof(k));   // Чтение POD-члена
			list[i].change_kolvo(k);
			delete[]buf;                        // Освобождение памяти
		}
	}

	int get_time()
	{
		return cooking_time;
	}

	string get_name()
	{
		return name;
	}

	std::vector <Product> list;	// динамический список необходимых продуктов
private:
	string name;				// название блюда
	int cooking_time;			// время приготовления в секундах
};

Bludo::Bludo(int cooking_time, string name)
{
	this->cooking_time = cooking_time;
	this->name = name;
}

Bludo::Bludo()
{
	cooking_time = 0;
}

Bludo::~Bludo()
{
	cooking_time = 0;
	list.clear();
}

/////////////////////////////////////////////////////////////
// Далее идет добавления первичного набора продуктов и блюд//
/////////////////////////////////////////////////////////////

std::vector <Bludo> bluda;
std::vector <Product> products;