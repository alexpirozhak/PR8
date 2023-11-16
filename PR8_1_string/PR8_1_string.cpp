#include <iostream>
#include <string>

using namespace std;

bool Check(const string str)
{
	size_t pos = 0;
	while ((pos = str.find('n', pos)) != -1)
	{
		pos++;
		if (str[pos] == 'o')
			return true;
	}

	pos = 0;
	while ((pos = str.find('o', pos)) != -1)
	{
		pos++;
		if (str[pos] == 'n')
			return true;
	}
	return false;
}

string Change(string& str)
{
	size_t pos = 0;
	while ((pos = str.find('n', pos)) != -1)
		if (str[pos + 1] == 'o')
			str.replace(pos, 2, "***");
		else
			pos++;
	return str;
}

int main()
{
	string str;
	cout << "Enter string: ";
	getline(cin, str);

	bool res = Check(str);
	cout << "Check result: " << boolalpha << res << endl;

	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

	return 0;
}