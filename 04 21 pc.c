//1번
//
//#include <stdio.h>
//
//int main()
//{
//	double  add = 0 ,avr;
//	double arr[100];
//	for(int i = 0; i < 6; i++ )
//	{
//	scanf("%lf", &arr[i]);
//	add += arr[i];
//	}
//	avr= add / 6.0;
//	printf("평균체중 : %0.1lf\n", avr);
//  return 0;
//}
//2번
//#include <stdio.h>
//
//int main()
//{
//	int arr[100],odd=0,even=0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i % 2 == 0)
//		{
//			odd += arr[i];
//		}
//		else
//		{
//			even += arr[i];
//		}
//	}
//	printf("odd : %d\n", odd);
//	printf("even : %d\n", even);
//	return 0;
//}

////3번
//
//#include <stdio.h>
//int main()
//{
//    int arr[100];
//    int a, b, max = 0, min = 0;
//    for(int i = 0; i < 100; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] == 999)
//            break;
//        else if (arr[i] > max)
//            max = arr[i];
//        else if (arr[i] < min)
//            min = arr[i];
//           
//
//    }
//    printf("max : %d\nmin : %d\n", max, min);
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int i = -1, n[100], sum1 = 0, sum2 = 0;
//    printf("입력정수 :");
//    do {
//        i++;
//        scnaf("%d", &n[i]);
//        if (n[i] < 999)
//            sum1 = n[i];
//        if (n[i] < sum2)
//            sum2 = n[i];
//    } while (i < 100 && n[i] != 999);
//    printf("max : %d\nmin : %d\n", sum1, sum2);
//}

////4번
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i, j, a, all;
//	scanf("%d %d", &a, &all);
//	for (i = 1; i < all; i++)
//	{
//		for (j = 1; j < all; j++)
//		{
//			if (4 * i + 2*j == a)
//			{
//				printf("토끼 : %d, 닭 : %d", i, j);
//			}
//		}
//	}
//}