////입력6
////출력
////******
////*    *
////*    *
////*    *
////*    *
////******
//
//for문으로 만들기
//#include <stdio.h>
//
//int main()
//{	
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == n - 1 || i == 0 || j == 0 || j == n - 1)
//			{
//				printf("*");
//			}
//			else printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//배열으로 만들기
//#include <stdio.h>
//
//int main()
//{
//	int i, j;
//	int n;
//	int arr[100][100];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//				arr[i][j] = '*';
//			else
//				arr[i][j] = ' ';
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//

//
//입력
// 100 30 90 90
//80 20 80 80
//100 100 80 80
// 출력
//fail
//fail
//pass
//합격 : 1
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[100][100];
//	int s,i,j;
//	int	count=0;
//	double add[3] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			add[i] += arr[i][j];
//
//		}
//	}
//	
//	for (i = 0; i < 3; i++)
//	{
//		if ((add[i] / 4) >= 80)
//		{
//			printf("pass\n");
//			count++;
//		}
//		else
//			printf("fail\n");
//	}
//		printf("합격: %d", count);
//	return 0;
//		
//}
//
