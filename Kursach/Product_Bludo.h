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

	// ������� ��� ������ ������� Product � �������� ����
	void write(ostream& os)
	{

		size_t len = name.length() + 1;       // ����� � ������� ������
		os.write((char*)&len, sizeof(len)); // ������ �����
		os.write((char*)name.c_str(), len);  // ������ ������
		os.write((char*)&kolvo, sizeof(kolvo)); // ������ POD-�����
	}

	// ������� ��� ������ ������� Product �� ��������� �����
	void read(istream& in)
	{
		size_t len;                         // ���������� ��� �����
		in.read((char*)&len, sizeof(len));  // ������ ����� ���������� ������
		char * buf = new char[len];         // ��������� ������ ��� ������
		in.read(buf, len);                   // ������ (� ������� ������)
		name = buf;                         // ���������� ��������� ������ �����
		in.read((char*)&kolvo, sizeof(kolvo));   // ������ POD-�����
		delete[]buf;                        // ������������ ������
	}
	
	// ���������� public ������ ���
	// �� ����� ������ � ������ ��������
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

	// ������� ��� ������ ������� Bludo � �������� ����
	void write(ostream& os)
	{
		size_t len = name.length() + 1;       // ����� � ������� ������
		os.write((char*)&len, sizeof(len)); // ������ �����
		os.write((char*)name.c_str(), len);  // ������ ������
		os.write((char*)&cooking_time, sizeof(cooking_time));
		int n = list.size();
		os.write((char*)&n, sizeof(n));

		for (int i = 0; i < n; i++)
		{
			string p_name = list[i].get_name();
			int p_kolvo = list[i].get_kolvo();

			size_t len = p_name.length() + 1;// ����� � ������� ������
			os.write((char*)&len, sizeof(len)); // ������ �����
			os.write((char*)p_name.c_str(), len);  // ������ ������
			os.write((char*)&p_kolvo, sizeof(p_kolvo)); // ������ POD-�����
		}
	}

	// ������� ��� ������ ������� Bludo �� ��������� �����
	void read(istream& in)
	{
		size_t len;                         // ���������� ��� �����
		in.read((char*)&len, sizeof(len));  // ������ ����� ���������� ������
		char * buf = new char[len];         // ��������� ������ ��� ������
		in.read(buf, len);                   // ������ (� ������� ������)
		name = buf;                         // ���������� ��������� ������ �����
		in.read((char*)&cooking_time, sizeof(cooking_time));
		int n;
		in.read((char*)&n, sizeof(n));
		delete[]buf;                        // ������������ ������

		for (int i = 0; i < n; i++)
		{
			Product temp;
			list.push_back(temp);
			size_t len;                         // ���������� ��� �����
			in.read((char*)&len, sizeof(len));  // ������ ����� ���������� ������
			char * buf = new char[len];         // ��������� ������ ��� ������
			in.read(buf, len);                   // ������ (� ������� ������)
			list[i].change_name(buf);				 // ���������� ��������� ������ �����
			int k;
			in.read((char*)&k, sizeof(k));   // ������ POD-�����
			list[i].change_kolvo(k);
			delete[]buf;                        // ������������ ������
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

	std::vector <Product> list;	// ������������ ������ ����������� ���������
private:
	string name;				// �������� �����
	int cooking_time;			// ����� ������������� � ��������
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
// ����� ���� ���������� ���������� ������ ��������� � ����//
/////////////////////////////////////////////////////////////

std::vector <Bludo> bluda;
std::vector <Product> products;