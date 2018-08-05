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
		int this_Length = strlen(str);
		int other_Length = strlen(obj_1.str);

		newStr.str = new char[this_Length + other_Length + 1]; // хранится динам. массив с длинами строк и в конце добавляется детерминирующий ноль

		int i = 0;
		for (; i < this_Length; i++)
		{
			newStr.str[i] = this->str[i];
		}

		int j = 0;
		for (; j < other_Length; j++, i++)
		{
			newStr.str[i] = obj_1.str[j];
		}

		newStr.str[this_Length + other_Length] = '\0';
		return newStr;

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



int main()
{
	setlocale(0, "ru");

	char g[] = "Hello";
	char q[] = "World";
	String test_1(g);
	String test_2(q);
	String res;
	res = test_1 + test_2;

	system("pause");
	return 0;
}