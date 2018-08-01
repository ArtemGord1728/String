#include <iostream>

using namespace std;

class String
{
public:
	String()
	{
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

	String operator + (String &first)
	{
		
	}

	~String()
	{
		delete[] str;
		delete[] str_1;
	}

private:
	char *str;
	char *str_1;
};



int main()
{
	char g[] = "Hello";
	String test_1 = g;

	return 0;
}