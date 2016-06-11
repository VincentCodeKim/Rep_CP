#include <stdio.h> //표준입출력 선행처리기

int xyz(int);
int abc(void);

int main() {
	int n, result;
	n = abc();
	result = xyz(n);

	if (result == 1)
		printf("%d은 소수입니다. \n", n);
	else
		printf("%d은 소수가 아닙니다. \n", n);

	return 0;
}//메인함수 종료


int abc(void) {
	int n;
	printf("정수를 입력하시오. : ");
	scanf_s("%d", &n);

	return n;
}

int xyz(int n) {
	int d = 0, i;

	for(i = 1; i <= n; i++){

		if (n % i == 0)
			d++;
	}
	return (d == 2);
}
