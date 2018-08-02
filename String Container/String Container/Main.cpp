#include <iostream>

using namespace std;

class String
{
public:
	char *str;
	char *str_1;

	String()
	{
		this->str = str;
		str = nullptr;
	}


	String (char *str)
	{
		char length = strlen(str);
		this->str = new char[length + 1];

		for (int i = 0; i < length; i++)
		{
			this->str[i] = str[i];
		}
		this->str[length] = '\0';
	}


	~String()
	{
		delete[] str;
		delete[] str_1;
	}
};

String operator+(String val, String v)
{

}

int main()
{
	char g[] = "Hello";
	char q[] = "World";
	String test_1 = g;
	String test_2 = q;
	

	return 0;
}