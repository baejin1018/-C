//
//입력
//4 3
//
//출력
//1  3  6
//2  5  9
//4  8 11
//7 10 12
//
//#include<stdio.h>
//
//int main() {
//    int arr[100][100] = { 0 };
//    int a, b;
//    int value = 1;
//    int j = 0;
//    int k = 0;
//    scanf("%d %d", &a, &b);
//    while (1) {
//        for (int i = 0; i < b; i++) {
//            for (int j = 0; j < a; j++) {
//                if (i + j == k) {
//                    arr[j][i] = value++;
//                }
//            }
//        }
//        k++;
//        if (value - 1 == a * b) {
//            break;
//        }
//    }
//    for (int i = 0; i < a; i++) {
//        for (int j = 0; j < b; j++) {
//            printf("%3d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//입력
//10
//출력 ( 1부터 입력한 값까지 모두 더하기)
//55
//
//
//#include <stdio.h>
//
//int n;
//
//int f(int n)
//{
//	int i, add = 0;
//    for (i = 1; i <= n; i++)
//    { 
//		add += i;
//	}
//	return add;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	printf("%d\n", f(n));
//	return 0;
//}


//5//입력할숫자 입력
//1 4 5 2 6//숫자입력
//5//가장 큰수의 index 출력
//
//#include <stdio.h>
//
//int n, d[110];
//
//int f()
//{
//    int max = 0;
//    int a = 0;
//    for (int i = 0; i < n; i++) {
//        if (max < d[i]) {
//            max = d[i];
//            a = i + 1;
//        }
//    }
//    return a;
//}
//
//int main()
//{
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &d[i]);
//    }
//    printf("%d", f());
//
//    return 0;
//}


//6 입력
// 입력한 숫자의 층인 삼각형 출력
//*
//**
//* *
//*  *
//*   *
//******
//#include <stdio.h>
//
//int main()
//{
//	
//	int i, j,a;
//	int arr[100][100];
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		for(j=0; j<a ;j++)
//			if (i == a - 1 || j == 0 || i ==j)
//			{
//				arr[i][j] = '*';
//			}
//			else
//			{
//				arr[i][j]=' ';
//			}
//	}
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
