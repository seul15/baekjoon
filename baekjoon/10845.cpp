#include<iostream>
using namespace std;


int main(){
	int N;
	cin >> N;
	int arr[10000];
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		string order;
		cin >> order;
		if (order == "push")
		{
			int num;
			cin >> num;
			arr[max] = num;
			max++;
		}
		else if (order == "pop")
		{
			int ans=0;
			if (max == 0)
				cout<<"-1"<<'\n';
			else
			{
				ans = arr[0];
				for (int i = 0; i < max; i++)
				{
					arr[i] = arr[i + 1];
					if (i == max - 1)
						arr[max] = 0, max--;
				}
				cout << ans << '\n';
			}
		}
		else if (order == "size")
		{
			cout<< max<<'\n';
		}
		else if (order == "empty")
		{
			if (max == 0)
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (order == "front")
		{
			if (max == 0)
				cout << "-1"<<'\n';
			else
				cout << arr[0] << '\n';
		}
		else if (order == "back")
		{
			if (max == 0)
				cout << "-1" << '\n';
			else
				cout<<arr[max-1]<<'\n';
		}
	}
}