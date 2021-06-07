//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i;
//	char str[256];//1차원배열
//	printf("Enter a number : ");
//	fgets(str, 256,stdin);// scanf와 비슷하지만 fgets는 한줄을 입력받는것이다.
//	i = atoi(str);//atoi함수 : 문자열을 숫자로 변환
//	printf("입력된 정수의값 : %d, 2배의 값: %d.\n", i, i * 2);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
////2진수를 10,16진수로 변경
//int main()
//{
//	int i;
//	char arr[50];
//	printf("enter a number : ");
//	scanf("%d", &i);
//	_itoa(i, arr, 10);// 10진수로 변경
//	printf("decimal: %s\n", arr);
//	_itoa(i, arr, 16);//16진수로 변경
//	printf("hexadecimal : %s\n", arr);
//	_itoa(i, arr, 2);
//	printf("binary : %s\n", arr);
//	return 0;
//}

//#include <stdio.h>
////소수를 출력하는 것
//int isPrime(int n)
//{
//	for (int i = 2; i*i <= n; i++)
//		if (!(n % i)) //== (같다) if(n%i==0)
//			return 0;
//	return 1;
//}
//
//int main()
//{
//	for (int i = 2; i < 10000; i++)
//		if (isPrime(i))
//			printf("%4d", i);
//	return 0;
//}

////[문제1] 소수를 찾아라.
////입력한 수까지 소수를 모두출력하고 10개마다 줄바꿈을 한다
//
//#include <stdio.h>
//int count = 0;
//
//int isPrime(int n)
//{
//	for (int i = 2; i * i <= n; i++)
//		if (!(n % i))
//			return 0;
//	return 1;
//}
//
//int main()
//{
//	int num;
//	while (1)
//	{
//		count = 0;
//		printf("숫자 : ");
//		scanf("%d", &num);
//		if (num < 2) break;
//		if (num < 1000)
//		{
//			for (int i = 2; i < num; i++)
//			{ 
//				if (isPrime(i)) 
//				{
//					printf("%4d", i);
//					count++;
//					if (count == 10)
//					{
//						printf("\n");
//					}
//				}
//			}
//			printf("\n");
//		}
//	}
//}

////키크기 도수 분포표
//150 - 154 = 2
//155 - 159 = 6
//160 - 164 = 3
//165 - 169 = 5
//170 - 174 = 9
//175 - 179 = 7
//180 - 184 = 4
//
//#include <stdio.h>
//
//int data[] = { 155, 179, 167, 156, 179, 145, 180, 175, 167, 165,
//157, 186, 155, 184, 163, 154, 157, 159, 171, 168, 179, 173, 153, 171, 171,
//175, 172, 174, 173, 179, 164, 167, 172, 176, 174, 181, 181, 161, 190, -99
//};
//
//int histo[7];
//
//int main()
//{
//	int i=0, idx, standard =150;
//	while (data[i] != -99)
//	{
//		if (data[i] >= 150 && data[i] <= 184)
//		{
//			idx = (data[i] - 150) / 5;
//			histo[idx]++;
//		}
//		i++;
//	}
//	for (i = 0; i < 7; i++)
//	{
//		printf("%3d - %3d = %d\n", standard, standard + 4, histo[i]);
//		standard += 5;
//	}
//	return 0;
//}
//
