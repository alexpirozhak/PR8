#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

bool Check(char* str) 
{
	int pos = 0; 
	char* t;
	while (t = strchr(str + pos, 'n')) 
	{
		pos = t - str + 1; 
		if (str[pos] == 'o')
		    return true;
	}

    pos = 0;
    while (t = strchr(str + pos, 'o'))
    {
        pos = t - str + 1;
        if (str[pos] == 'n')
            return true;
    }

	return false;
}

char* Change(char* str)
{
    char* tmp = new char[strlen(str) * 3 / 2 + 1];
    char* t;
    int pos1 = 0,
        pos2 = 0;
    *tmp = 0;
    while (t = strchr(str + pos1, 'n'))
    {
        if (str[t - str + 1] == 'o')
        {
            pos2 = t - str + 2;
            strncat(tmp, str + pos1, pos2 - pos1 - 2);
            strcat(tmp, "***");
            pos1 = pos2;
        }
        else
        {
            pos2 = t - str + 1;
            strncat(tmp, str + pos1, pos2 - pos1);
            pos1 = pos2;
        }
    }
    strcat(tmp, str + pos1);
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



    return 0;
}