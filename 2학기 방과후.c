////1. 세 숫자의 평균을 소수점 둘째 자리까지 표현해보자
//#include <stdio.h>
//
//int main() {
//	int a, b, c;
//	double avr;
//	scanf("%d %d %d", &a, &b, &c);
//	avr = (a + b + c) / 3.0;
//	printf("%.2lf", avr);
//	return 0;
//}
//

////2. 1에서 10까지의 정수를 출력해보자
//
//#include <stdio.h>
//
//int main() {
//	int i;
//	for (i = 0; i < 10; i++) {
//		printf("%d\n", i + 1);
//	}
//	return 0;
//}

//// 3.덧셈 뺄셈 계산기
//
//#include <stdio.h>
//
//int main() {
//	int an,num1,num2,c=0;
//	printf("메뉴를 선택하세요.\n1. 덧셈\n2. 뺄셈\n선택 : ");
//	scanf("%d", &an);
//	printf("두 수를 입력하세요 : ");
//	scanf("%d %d", &num1, &num2);
//	if (an == 1) {
//		c = num1 + num2;
//		printf("%d + %d = %d", num1, num2, c);
//	}
//	else {
//		c = num1 - num2;
//		printf("%d - %d = %d", num1, num2, c);
//	}
//	
//}

////4. 윤년 평년 계산기
//
//#include <stdio.h>
//
//int main() {
//	int year;
//	printf("연도 : ");
//	scanf("%d", &year);
//	if ((year % 4) == 0) {
//		printf("%d 년은 윤년입니다.", year);
//	}
//	else {
//		printf("%d 년은 평년입니다.", year);
//	}
//}

////5. 1부터 n 까지 합
//
//#include <stdio.h>
//
//int main() {
//	int num, add = 0;
//	printf("수를 입력하세요 :");
//	scanf("%d", &num);
//	for (int i = 0; i < num; i++) {
//		add += i+1;
//	}
//	printf("합 %d", add);
//}
//
////6. 구구단 출력
//
//#include <stdio.h>
//
//int main() {
//	int dan;
//	printf("단을 입력하세요 : ");
//	scanf("%d", &dan);
//	for (int i = 1; i <= 9; i++) {
//		printf("%d X %d = %d\n", dan, i, dan * i);
//	}
//	return 0;
//}

//7. n을 입력받아 1에서 n 까지의 수중에서 홀수는 덧셈 짝수는 뺄셈하여 값을 구하자

//#include <stdio.h>
//
//int main() {
//	int num,add =0;
//	printf("N 입력 : ");
//	scanf("%d", &num);
//	for (int i = 1; i <= num; i++) {
//		if (i % 2 == 0) {
//			add -= i;
//		}
//		else {
//			add += i;
//		}
//	}
//	printf("결과 : %d",add);
//}

////10. 5개의 양수를 배열에 입력받은후 입력받은 모든 수와 최댓값을 출력하는 프로그램
//
//#include <stdio.h>
//
//int main() {
//	int a[6];
//	int max = 0;
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < 5; i++) {
//		if (max < a[i]) {
//			max = a[i];
//		}
//	}
//	printf("%d", max);
//}





