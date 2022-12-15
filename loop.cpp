#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	string	s;
	int t = 0, r = 0;
	int	j = 0;
	cin >> t;

	while (t--)
	{
		cin >> r >> s;
		while (s[j])
		{
			for (int i = 0; i < r; i++)
				cout << s[j];
			j++;
		}
		cout << endl;
	}
	return (0);
}
