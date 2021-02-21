#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, M;
	int plus[101];

	scanf("%d %d\n", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", &plus[i]);
	}

	int min = 900000;
	int rn;
	for (int i = 0; i < N; i++) { // 삼중 for문으로 합의 차 구하기
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				int result = plus[i] + plus[j] + plus[k];
				if (result == M) { // 합이 M 이랑 같으면 끝
					printf("%d", M);
					return 0;
				}
				else if (abs(M - result) < min) { // 합과 차이가 가장 적은 수 저장
					min = result - M;
					rn = min;
					min = abs(min);
				}
			}
		}
	}

	printf("%d", M + rn);

}