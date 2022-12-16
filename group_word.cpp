#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int	check_groupword(string s)
{
	int len = s.size();
	int alpha[26];

	for (int i = 0; i < 26; i++)
		alpha[i] = 0;
	for (int i = 0; i < len; i++)
	{
		alpha[s[i] - 'a']++;
		while (s[i] == s[i + 1])
			i++;
		if (alpha[s[i] - 'a'] > 1)
			return (0);
	}
	return (1);
}

int main()
{
	string	s;
	int		n = 0;
	int		result = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (check_groupword(s))
			result++;		
	}
	cout << result;
	return (0);
}