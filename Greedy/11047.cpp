#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#pragma warning(disable:4996)

int main()
{
	int N;	//동전의 종류 개수
	int K;	//값
	int Count = 0; //코인 개수

	scanf("%d %d", &N, &K);

	vector<int> Coins(N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &Coins[i]);	//동전을 입력
	}

	sort(Coins.begin(), Coins.end()); //오름차순 정렬

	for (int i = N - 1; i >= 0; i--)
	{
		Count += K / Coins[i];
		K %= Coins[i];
	}

	printf("%d\n", Count);

	return 0;
}
