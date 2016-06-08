#include <stdio.h> //표준입출력선행처리기

int main(void) { // 메인함수호출

	char op;              // 문자형op 변수선언
	int x, y, result;     // 정수형x, y, result변수선언

	printf(" 수식을입력하시오\n ( ex : 2 + 5)  \n  >>>>  ");
	scanf_s("%d %c %d", &x, &op, sizeof(op), &y);

	//정수형문자형정수형자료를입력받아각각x,op,y변수에저장
	if (op == '+') {     //만약op값이+이면..

		result = x + y; //result 변수에x+ y값(합)을대입

	} else if (op == '-') { //만약op값이-이면..

		result = x - y; //result 변수에x- y값(빼기)을대입

	} else if (op == '*') { //만약op값이*이면..

		result = x * y;  //result변수에x * y값(곱하기)을대입

	} else if (op == '/') {  //만약op값이/이면..

		result = x / y;  //result변수에x / y값(나누기)을대입

	} else if (op == '%') {  //만약op값이%이면..

		result = x % y;  //result변수에x - y값(나머지값)을대입

	} else {  //위의if나else if 조건에해당되지않으면..

		printf("지원되지않는연산자입니다. \n");

	}  //end else

	printf("%d%c %d =%d \n", x, op, y, result);

	//x(정수형) op(문자형) y(정수형) = result(정수형)값출력
	return0; //메인함수종료
}
