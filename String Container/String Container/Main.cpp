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