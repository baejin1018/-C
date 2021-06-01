////n 까지의 소수 구하기
//#include <stdio.h> 
//
//int isPrime(int n)//소수를 찾는 함수
//{
//	for (int i = 2; i * i <= n; i++) //i*i 하는이유는 시간을 줄이기 위해
//		if (!(n % i)) //나머지가 없다면 소수가 아니라고 판단하여 끝냄
//			return 0;
//	return 1; //1을 보냄 
//}
//
//int main()
//{
//	int n;
//	while (1)
//	{
//		printf("숫자 : ");
//		scanf("%d", &n);
//		if (n < 2) return 0;
//		if (n > 1000)
//		{
//			printf("\n");
//			continue;
//		}
//		int primeVnt = 1;
//		for (int i = 2; i <= n; i++)
//		{
//			if (isPrime(i))// return 1을 받으면 Ture 여서 실행
//			{
//				printf("%5d", i);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//최대 공약수 최대 공배수 구하기
//유클리드 호제법 이용
//#include <stdio.h>
//
//int gcd(int a, int b)
//{
//	if (b == 0)
//	{
//		return a; //b가 0이라면 a를 반환
//	}
//	else
//	{
//		return gcd(b, a % b); //b가 0이 아니라면 gcd(a,b)에 b, a%b를 넣는다
//	}
//}
//int main()
//{
//	int a = 16, b = 4;
//	printf("최대공약수 : %d\n", gcd(a, b));
//	printf("최소공배수 : %d\n", a * b / gcd(a, b));
//	return 0;
//}

// 최대 공약수 최대 공배수구하기 방법 .2
//#include <stdio.h>
//
////GCD 최대공배수, LCM 최소공배수
//
//int main()
//{
//   int x, y, xy, z;
//   int gcd = 0, lcm = 0;
//   do 
//   {
//      x = 0; y = 0;
//      printf("두 수를 입력하세요 : ");
//      scanf("%d %d", &x, &y);
//      xy = x * y;
//      if (x > 0 && y > 0) 
//		{
//         while (1)
//		   {
//            z = x % y;
//            if (z == 0) 
//			  {
//               gcd = y;
//               lcm = xy / y;
//               break;
//            }
//            else 
//			  {
//            x = y;
//            y = z;
//            }
//         }
//         
//         printf("최대공약수 = %d, 최소공배수 : %d\n\n", gcd, lcm);
//      }
//      else if (x != 0 || y != 0) 
//      {
//         printf("\n양의 정수를 입력하세요. Quit(0,0)\n\n");
//      }
//
//   } while (x != 0 || y != 0);
//   return 0;
//}