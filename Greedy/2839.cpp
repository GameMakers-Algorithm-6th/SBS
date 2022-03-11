#include <iostream>

using namespace std;
#pragma warning(disable:4996)

int main() {
	int N;
	int count = 0;

	scanf("%d", &N);

	while (N >= 0)
	{
		if (N % 5 == 0)
		{
			count += N / 5;
			printf("%d\n", count);
			return 0;
		}

		N -= 3;
		count++;
	}

	printf("-1\n");
}
