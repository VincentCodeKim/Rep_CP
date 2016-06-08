#include <stdio.h> //표준입출력 선행처리기

int xyz(int);         // int(정수)형 매개변수를 받아 int(정수)형 값을 리턴하는 xyz 함수 원형 선언
int abc(void);        // int(정수)형 값을 리턴하는 abc 함수 원형 선언

int main() {         //메인함수 시작
	int n, result;   //정수형 n, result 변수 선언
	n = abc();       //n 변수에 abc함수의 리턴값을 저장
	result = xyz(n); //xyz함수에 n을 매개변수로 넘겨 리턴되는 결과값을 result 변수에 저장

	if (result == 1) //result가 1이면..
		printf("%d은 소수입니다. \n", n); //(n변수값) 은 소수입니다. 출력
	else
		//위 if 조건에 해당되지 않으면..
		printf("%d은 소수가 아닙니다. \n", n);  //(n변수값) 은 소수가 아닙니다. 출력

	return 0; //메인함수 종료
}


int abc(void) {   // int(정수)형 값을 리턴하는 abc 함수 정의
	int n;  //정수형 n변수 선언
	printf("정수를 입력하시오. : ");
	scanf_s("%d", &n); //정수형 값을 입력받아 n변수에 저장

	return n;  //n 변수 반환
}

int xyz(int n) {     //int형 매개변수 n을 입력받아 int형 값을 리턴하는 xyz 함수 정의
	int d = 0, i; //정수형 d, i 변수를 선언후 d변수를 0으로 초기화

	// i를 1로 초기화,  i가 n과 같거나 작으면 for문 내용 실행 후 i값 증가
	for(i = 1; i <= n; i++){

		if (n % i == 0) //만약 n을 i로 나눈 나머지가 0이면..
			d++;  //d 값 증가
	}
	return (d == 2); //d가 2이면 1(참) 2가 아니면 0(거짓) 값 반환
}
