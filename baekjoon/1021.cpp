#include<iostream>
#include<deque>
using namespace std;

int main()
{
	int N, M,num,count=0; //N : 큐의 크기 / M : 뽑아내려고 하는 수의 개수 / num : 뽑아내려고 하는 수의 위치 / count : 총 이동횟수
	int location=0,move; //location : 현재 커서의 위치 / move : 이동 횟수
	cin >> N >> M;

	deque<int>dq; //자료형이 int형인 덱 dq 생성 

	for (int i = 1; i <= N; i++) //dq에 1~N 삽입
	{
		dq.push_back(i); //dq의 맨 뒤에 i 삽입
	}

	for (int j = 0; j < M; j++)
	{
		move = 0; //이동 횟수 초기화
		cin >> num;
		while (dq[(location + move) % dq.size()] != num) // 입력받은 수와 같을 때 까지 이동 시킴
		{
			move++;
		}
		if (move <= dq.size() / 2) //왼쪽으로 이동시키는게 최소일 경우
		{
			count += move;
			dq.erase(dq.begin() + (location + move) % dq.size()); //mod 연산을 이용하여 location+move 값이 덱의 크기를 넘지 않도록 함
		}
		else //오른쪽으로 이동시키는게 최소일 경우
		{
			count += (dq.size() - move);
			dq.erase(dq.begin() + (location + move) % dq.size());
		}
		location = (location + move) % (dq.size() + 1); // 현재 커서 위치 재설정
	}
	cout << count << '\n';

	return 0;
}