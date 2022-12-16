#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;

	cin >> s;
	int sum = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'c')
		{
			if (s[i + 1] == '=')
				i++;
			if (s[i + 1] == '-')
				i++;
			sum++;
		}
		else if (s[i] == 'd')
		{
			if (s[i + 1] == 'z')
				if (s[i + 2] == '=')
					i += 2;
			if (s[i + 1] == '-')
				i++;
			sum++;
		}
		else if (s[i] == 'l')
		{
			if (s[i + 1] == 'j')
				i++;
			sum++;
		}
		else if (s[i] == 'n')
		{
			if (s[i + 1] == 'j')
				i++;
			sum++;
		}
		else if (s[i] == 's')
		{
			if (s[i + 1] == '=')
				i++;
			sum++;
		}
		else if (s[i] == 'z')
		{
			if (s[i + 1] == '=')
				i++;
			sum++;
		}
		else
			sum++;
	}
	cout << sum;
	return (0);
}