#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	char word[50][20000] = {};
	for (int i = 0; i < N; i++)
		cin >> word[50][i];

	sort(word[50], word[50] + N);

	for (int i = 0; i < N; i++)
	{
		if (word[50][i]== word[50][i+1])
			continue;
		else
			cout << word[50][i] << '\n';
	}

	return 0;
}