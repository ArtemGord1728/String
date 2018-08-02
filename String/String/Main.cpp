#include <iostream>

using namespace std;

class String
{
public:
	char *str;
	char *str_1;

	String()
	{
		str_1 = nullptr;
		str = nullptr;
	}


	String(char *str)
	{
		int length = strlen(str);
		this->str = new char[length + 1];

		for (int i = 0; i < length; i++)
		{
			this->str[i] = str[i];
		}
		this->str[length] = '\0';
	}

	String operator=(const String &val)
	{
		if (this->str != nullptr)
		{
			delete[] str;
		}

		int length = strlen(val.str);
		this->str = new char[length + 1];

		for (int i = 0; i < length; i++)
		{
			this->str[i] = val.str[i];
		}
		this->str[length] = '\0';

		return *this;
	}

	void Print()
	{
		cout << str_1 << endl;
	}


	~String()
	{
		delete[] this->str;
	}
};


//String operator+(const String& val, const String& v)
//{
//
//}


int main()
{
	setlocale(0, "ru");

	char g[] = "Hello";
	char q[] = "World";
	String test_1(g);
	String test_2(q);

	test_1 = test_2;

	return 0;
}