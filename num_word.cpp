#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	string	s;
	int 	i = 0;
	int		num = 1;

	getline(cin, s);
	if (s[i] == ' ')
		i++;
	while (s[i])
	{
		if (s[i] == ' ')
			num++;
		i++;	
	}
	if (s[i - 1] == ' ')
		num--;
	cout << num << endl;
	return (0);
}
