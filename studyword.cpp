#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
	string s1;
	char arr[26];
	int	i = 0;

	for (int j = 0; j < 26; j++)
		arr[i] = 0;
	cin >> s1;
	while (s1[i])
	{
		if ( 'a' <= s1[i] && s1[i] <= 'z')
			arr[s1[i] - 'a']++;
		else
			arr[s1[i] - 'A']++;
		i++;
	}
	
	int max = -1;
	i = 0;
	int flag = 0;
	char result;
	while (i < 26)
	{
		if (max < arr[i])
		{
			flag = 0;
			max = arr[i];
			result = i + 'A';
		}
		else if (max == arr[i])
			flag = 1;
		i++;
	}
	if (flag == 1)
		cout << '?' <<endl;
	else
		cout << result << endl;
	return (0);
}
