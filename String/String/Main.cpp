#include <iostream>

using namespace std;

class String
{
public:
	char *str;

	String()
	{
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

	String operator+(const String &obj_1)
	{
		String newStr;
		int this_Length = strlen(obj_1.str) + strlen(obj_1.str);
	}

	void Print()
	{
		cout << str << endl;
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

	test_1.Print();

	system("pause");
	return 0;
}