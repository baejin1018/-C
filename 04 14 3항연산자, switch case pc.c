
//if (조건 1)
//{
//	조건 1이 참일경우
//}
//else if (조건 2)
//{
//	조건 2가 참일 경우
//}
//
//else
//{
//	위에 조건이 맞지 않을 경우
//}


// 3항 연사자를 이용한 프로그램 조건 ? 명령A(참) : 명령B(거짓)
//#include <stdio.h>
//int main()
//{
//	int score, pass;
//	printf("점수를 입력하세요 : ");
//	scanf("%d", &score);
//	printf("합격점을 입력하세요");
//	scanf("%d", &pass);
//	score > pass ? printf("합격") : printf("불합격"); // = printf("%s",score >pass ? "합격" : "불합격");
//}
//switch case 문
//
//조건 : 조건식의 결과가 정수나 문자가 될 수 있는 조건 또는 변수
//case n 값 조건의 결과가 값 n 일때 해당 명령을 실행(값 n 은 반드시 정수형 상수여야하며 변수는 올수 X)
//break 문을 종료하는 명령
//default case에 없는 그 외의 모든 경우에 실행되는 명령문

//#include <stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1: printf("1st"); break;
//	case 2: printf("2st"); break;
//	case 3: printf("3st"); break;
//	default: printf("%dth", a); 
//	}
//}

//입력 5
//출력
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
//↓

//#include <stdio.h>
//
//int main()
//{
//	int l, num, j,sum=0;
//	scanf("%d", &l);
//	for (num = 0; num <= l; num++)
//	{
//		for (j = 1; j <= num; j++)
//		{
//			sum ++;
//			printf("%d ", sum);
//		}
//		printf("\n");
//	}
//	return 0;
//}
