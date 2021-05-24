//#include <stdio.h>
//
//int n; //전역 변수는 0으로 초기화 된다
//void add(int);//함수선언
//int main() 
//{
//    printf("n=%d\n", n);
//    add(3);
//    printf("n=%d\n", n);
//    n++; 
//    printf("n=%d\n", n);
//    return 0;
//}
//
//void add(int x)//함수 정의
//{
//    n += x;
//}

//#include <stdio.h>
////재귀함수
//int recur(int n)
//{
//	if (n < 0)
//	{
//		return 1;
//	}
//	printf("함수안의 함수 호출 : %d\n", n);
//	recur(n-1);
//}
//
//int main()
//{
//	recur(5);
//	return 0;
//}
//
//#include <stdio.h>
////재귀함수란 무엇인지 찾아보기,펙토리얼
//int fact(int n)
//{
//	if (n == 0 || n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fact(n - 1);
//	}
//}
//
//int main()
//{
//	printf("%d\n", fact(5));
//	return 0;
//}

//#include <stdio.h>
////배열을 사용하는이유 : 많은정보를 효과적으로 처리하기 위해
//
//int main()
//{
//	int a, b, c, d, e;
//	int arr[5] = { 1,2,3,4,5 }; //	{ 1,2,3,4,5 } = arr[0] = 1, arr[1] = 2, arr[2] = 3, arr[3] = 4, arr[4] = 5; 둘다 같다
//	int sum1 = 0, sum2 = 0;
//	a = 1, b = 2, c = 3, d = 4, e = 5;
//	sum1 = a + b + c + d + e;
//	arr[0] = 1, arr[1] = 2, arr[2] = 3, arr[3] = 4, arr[4] = 5;
//	for (int i = 0; i < 5; i++)
//	{
//		sum2 += arr[i];
//	}
//	printf("sum1 = %d, sum2 =%d \n", sum1, sum2);
//	return 0;
//}
//내가 만든 배열 예제
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int i=0;
//	char arr[4] = { 'a','b','c','d' };
//	printf("0~3 중에 숫자 한개를 입력하세요 : ");
//	scanf("%d",&i);
//	printf("%d 에 있는 글자는 : %c", i, arr[i]);
//	return 0;
//
//}
