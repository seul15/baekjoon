#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int K,ans=0;
	stack<int>sum;
	cin >> K;
	for (int i = 0; i < K; i++) //K번 반복
	{
		int num=0;//입력 받는 값
		cin >> num;
		if (num == 0)//0입력 받을 경우
		{
			ans -= sum.top();//ans에서 스택의 top을 지운다
			sum.pop();//스택의 top부분을 비움
		}
		else//0 이외의 숫자를 입력 받는 경우
		{
			sum.push(num);//스택에 num을 푸쉬
			ans += num;//ans에 num값을 더함
		}
	}

	cout << ans << '\n';

	return 0;
	
}