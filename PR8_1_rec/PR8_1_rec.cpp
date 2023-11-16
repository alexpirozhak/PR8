#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>


using namespace std;

bool Check(char* str, int i)
{
	if (strlen(str) < 2)
		return false;

	if (str[i + 1] != 0)
		if (str[i] == 'n' && str[i + 1] == 'o'
			|| str[i] == 'o' && str[i + 1] == 'n')
			return true + Check(str, i + 1);
		else
			return Check(str, i + 1);
	else
		return false;
}

char* Change(char* bembem, const char* str, char* t, int i)
{
	if (str[i + 1] != 0)
	{
		if (str[i] == 'n' && str[i + 1] == 'o')
		{
			strcat(t, "***");
			return Change(bembem, str, t + 3, i + 2);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(bembem, str, t, i);
		}
	}
	else
	{
		*t++ = str[i++];
		*t = '\0';
		return bembem;
	}
}

int main()
{
	char str[101];

	cout << "Enter string: ";
	cin.getline(str, 100);

	bool res = Check(str, 0);
	cout << "Check result: " << boolalpha << res << endl;

	char* bem1 = new char[151];
	bem1[0] = '\0';
	char* bem2;
	bem2 = Change(bem1, str, bem1, 0);
	cout << "Modified string (param) : " << bem1 << endl;
	cout << "Modified string (result): " <<	bem2 << endl;
	return 0;
}