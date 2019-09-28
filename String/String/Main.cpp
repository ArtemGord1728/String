#include <iostream>

using namespace std;

class String
{
public:
	char *string_buffer;
	unsigned int size_buffer;

	String()
	{
		string_buffer = nullptr;
		size_buffer = 0;
	}

	String(const char* str)
	{
		size_buffer = strlen(str);
		string_buffer = new char[size_buffer + 1];

		for (int i = 0; i < size_buffer; i++)
		{
			string_buffer[i] = str[i];
		}
		string_buffer[size_buffer] = '\0';
	}

	String(const String &val_1)
	{
		size_buffer = strlen(val_1.string_buffer);
		string_buffer = new char[size_buffer + 1];

		for (int i = 0; i < size_buffer; i++)
		{
			this->string_buffer[i] = val_1.string_buffer[i];
		}
		this->string_buffer[size_buffer] = '\0';

	}

	char& operator[] (const int index) {
		if (index < 0) {
			throw new std::bad_exception;
		}
		return string_buffer[index];
	}

	String& operator=(const String &val)
	{
		if (this->string_buffer != nullptr)
		{
			delete[] string_buffer;
		}


		size_buffer = strlen(val.string_buffer);
		this->string_buffer = new char[size_buffer + 1];

		for (int i = 0; i < size_buffer; i++)
		{
			this->string_buffer[i] = val.string_buffer[i];
		}
		this->string_buffer[size_buffer] = '\0';

		return *this;
	}

	friend std::ostream& operator<< (std::ostream& stream, const String& str) {
		stream << str.string_buffer;
		return stream;
	}

	String& operator+(const String &obj_1)
	{
		String newStr;
		int this_Length = strlen(string_buffer);
		int other_Length = strlen(obj_1.string_buffer);

		newStr.string_buffer = new char[this_Length + other_Length + 1]; // хранится динам. массив с длинами строк и в конце добавляется детерминирующий ноль

		int i = 0;
		for (; i < this_Length; i++)
		{
			newStr.string_buffer[i] = this->string_buffer[i];
		}

		int j = 0;
		for (; j < other_Length; j++, i++)
		{
			newStr.string_buffer[i] = obj_1.string_buffer[j];
		}

		newStr.string_buffer[this_Length + other_Length] = '\0';
		return newStr;

	}

	bool operator ==(const String &obj)
	{
		return this->size_buffer == obj.size_buffer;
	}

	bool operator!=(const String &obj)
	{
		return this->size_buffer != obj.size_buffer;
	}


	~String()
	{
		delete[] this->string_buffer;
	}
};



int main()
{
	setlocale(0, "ru");

	String test_1 = "hello";
	String test_2 = " world";

	cout << test_1[4] << endl;

	system("pause");
	return 0;
}