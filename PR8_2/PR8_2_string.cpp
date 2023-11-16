#include <iostream>
#include <string>
using namespace std;

size_t MaxLength(const string s)
{
	int k = 0;
	size_t len = 0,
		max;
	size_t start = 0,
		end;
	while ((start = s.find_first_of("0123456789", start)) != -1)
	{
		end = s.find_first_not_of("0123456789", start + 1);
		if (end == -1)
			end = s.length();
		len = end - start;
		if (k == 0)
			max = len;
		k++;
		if (len > max)
			max = len;
		start = end + 1;
	}
	return max;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "Length of max groups of digits: " << MaxLength(str) << endl;
	return 0;
}