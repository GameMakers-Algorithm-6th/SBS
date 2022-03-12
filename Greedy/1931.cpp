#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#pragma warning(disable:4996)

int main() {
	int N;
	scanf("%d", &N);	//개수 입력

	vector<pair<int, int>> times(N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &times[i].second, &times[i].first); 
	}

	sort(times.begin(), times.end());

	int time = 0;
	int count = 0;

	for (int i = 0; i < N; i++) {
		if (time <= times[i].second) { //시작시간보다 작거나 같다면
			time = times[i].first;	//해당 회의의 끝나는 시간으로 저장
			count++;
		}
	}
	printf("%d", count);

}
