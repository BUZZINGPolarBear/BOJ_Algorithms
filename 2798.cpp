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
	for (int i = 0; i < N; i++) { // ���� for������ ���� �� ���ϱ�
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				int result = plus[i] + plus[j] + plus[k];
				if (result == M) { // ���� M �̶� ������ ��
					printf("%d", M);
					return 0;
				}
				else if (abs(M - result) < min) { // �հ� ���̰� ���� ���� �� ����
					min = result - M;
					rn = min;
					min = abs(min);
				}
			}
		}
	}

	printf("%d", M + rn);

}