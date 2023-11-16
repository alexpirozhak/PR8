#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

bool Check(char* str)
{
	if (strlen(str) < 2)
		return false;

	for (int i = 0; str[i + 1] != '\0'; i++)
	{
		if (str[i] == 'n' && str[i + 1] == 'o'
			|| str[i] == 'o' && str[i + 1] == 'n')
			return true;
	}
	return false;
}

char* Change(char* str)
{
	size_t len = strlen(str);

	if (len < 2)
		return str;

	char* tmp = new char[len * 3 / 2 + 1];
	char* t = tmp;
	tmp[0] = '\0';


	size_t i = 0;
	while(i < len && str[i+1] != 0)
	{
		if (str[i] == 'n' && str[i + 1] == 'o')
		{
			strcat(t, "***");
			t += 3;
			i += 2;
		}
		else
		{
			*(t++) = str[i++];
			*t = '\0';
		}
	}

	*t++ = str[i++];
	*t = '\0';

	strcpy(str, tmp);
	return tmp;
}

int main()
{
	char str[101];

	cout << "Enter string: ";
	cin.getline(str, 100);
	
	bool res = Check(str);
	cout << "Check result: " << boolalpha << res << endl;

	char* dest = new char[151];
	dest = Change(str);

	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

	//cin >> str;

	return 0;
}