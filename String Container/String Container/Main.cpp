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
		symbols = str;
	}

private:
	char *symbols;
};



int main()
{


	return 0;
}