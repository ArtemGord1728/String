#include <iostream>

using namespace std;

class string
{
public:
	string()
	{
		symbols = nullptr;
	}


	string(char *str)
	{
		int length = strlen(str);
		this->symbols = new char[length + 1];

		for (int i = 0; i < length; i++)
		{
			symbols[i] = str[i];
		}
		symbols[length] = '\0';
	}


private:
	char *symbols;
	/*char *str_1;
	char *str_2;*/
};



int main()
{


	return 0;
}