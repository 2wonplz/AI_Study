#include <stdio.h>

int main() {

	// 두 수 사이의 소수(Prime Number) 구하기
	int n1, n2, count = 0;

	printf("두 개의 숫자 입력 : ");
	scanf_s("%d %d", &n1, &n2);

	for (int i = n1; i <= n2; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				count++;
		}
		if (count == 2)
			printf("%d ", i);
		count = 0;
	}

	return 0;

}