//#include <stdio.h>
// 점을 표현하는 구조체
// 1
//typedef struct _p
//{
//	int x, y;
//}point;
//
//int main()
//{
//	point p1,p2;
//}
//
//2
//#include <stdio.h>
//
//int m[9][9] = {
//	{2,2,2,2,2,2,2,2,2},
//	{2,0,0,0,0,0,0,0,2},
//	{2,0,2,2,0,2,2,0,2},
//	{2,0,2,0,0,2,0,0,2},
//	{2,0,2,0,2,0,2,0,2},
//	{2,0,0,0,0,0,2,0,2},
//	{2,2,0,2,2,0,2,2,2},
//	{2,0,0,0,0,0,0,0,2},
//	{2,2,2,2,2,2,2,2,2},
//};
//
//int si, sj, Ei, Ej, succes, idx, path_i[100], path_j[100];
////s 출발점 E 도차점 idx 경로 배열인덱스 
////ri,rj : 지나간 길을 저장함(i는 행 j 는 열)
//
//int visit(int, int);
//
//int main()
//{
//	idx = 0;
//	succes = 0;
//	printf("미로탈출 게임\n");
//	si = 1, sj = 1;
//	Ei = 7, Ej = 7;
//	if (visit(si, sj) == 0)
//		printf("못찾았음\n");
//	else
//		printf("모든 경로를 찾았음 \n");
//	return 0;
//}
//
//int visit(int i, int j)
//{
//	static int path = 1;// 찾은 경로 갯수
//	m[i][j] = 1;
//	path_i[idx] = i, path_j[idx] = j; //경로 path를 저장
//	idx++;
//	//만약 도착점에 도달했다면
//	if (i == Ei && j == Ej)
//	{
//		printf("%d 번째 찾은 경로 \n", path++);
//		for (int k = 0; k < idx; k++)//경로 출력
//			printf("(%d %d)", path_i[k], path_j[k]);
//		printf("\n");
//		succes = 1; //경로찾기 성공
//	}
//
//	//***중요***미로 탐색 코드
//	if (m[i][j + 1] == 0)//오른쪽으로 탐색
//		visit(i, j + 1);
//	if (m[i + 1][j] == 0)//아래쪽으로 탐색
//		visit(i + 1, j);
//	if (m[i][j-1] == 0)//왼쪽으로 탐색
//		visit(i, j-1);
//	if (m[i - 1][j] == 0)//위쪽으로 탐색
//		visit(i - 1, j);
//	//------------------------
// 
//	idx--;//위에 4가지의 탐색이 되지 않으면 뒤로 간다
//	m[i][j] = 0;
//	return succes;
//
//3 효울적인 소수 if(n%i == 0) isprime 부분 깃허브 06 01
//
// 달리기 초 계산 평균 파일 입출력
//홍길동 14.5 13 12.5
//#include <stdio.h>
//int main()
//{
//	FILE* ifp = fopen("run.txt", "r"); // 파일 읽기  r 모드는 읽기 모드여서 무조건 파일을 미리 만들어야 한다
//	FILE* ofp = fopen("result.txt", "w"); // 파일 쓰기 w 모드는 파일이 없다면 생성하고 이미 있다면 초기화한후 출력
//	char name[10];
//	char name2[10];
//	double avg, n1, n2, n3;
//	double avg2, n4, n5, n6;
//
//	fscanf(ifp, "%s %lf %lf %lf", name, &n1, &n2, &n3); //run.txt  에 있는 값을 입력받는다
//	fscanf(ifp, "%s %lf %lf %lf", name2, &n4, &n5, &n6); //run.txt  에 있는 2번째 값을 입력받는다
//	avg = (n1 + n2 + n3) / 3.0;//받은 값으로 평균을 구한다
//	avg2 = (n3 + n4+ n5) / 3.0;//2번쨰 받은 값으로 평균을 구한다
//	fprintf(ofp, "%s %.1f\n %s %1.f\n", name, avg,name2,avg2);// reuslut.txt 에 출력한다
//
//	fclose(ifp);
//	fclose(ofp);
//	return 0;
//}
//
//
//
//1
//#include <stdio.h>
//int main()
//{
//	printf("Hello World!");
//}
//정답 : Hello World!
//
//2
//#include <stdio.h>
//int main()
//{
//	printf("Hello\n World!");
//}
//정답 
//Hello
//World!
//
//3
//#include <stdio.h>
//int main()
//{
//	printf("배진영");
//}
//정답:배진영
//
//4
//#include <stdio.h>
//int main()
//{
//	printf("\"Hello World!\"");
//}
//정답 : "Hello World!"
//
//5
//#include <stdio.h>
//int main()
//{
//	printf("배\n진\n영");
//}
//정답 :
//배
//진
//영
//
//6
//#include <stdio.h>
//int main()
//{
//	printf("안녕!!\n내 이름은 : 홍길동이야.\n나는 17살이야.\n나의 좌우명은 \"최선을 다해 노력하자\"");
//}
//정답 :
//안녕!!
//내 이름은 : 홍길동이야.
//나는 17살이야.
//나의 좌우명은 "최선을 다해 노력하자"
//
//7
//#include <stdio.h>
//int main()
//{
//	int kr, math, e, com;
//	double sum = 0, avg = 0;
//	scanf("%d %d %d %d", &kr, &math, &e, &com);
//	sum = kr + math + e + com;
//	avg = sum / 4.0;
//	printf("sum %.lf\navg %.lf", sum, avg);
//}
//입력 예 70 95 63 100
//출력 예 sum 328
//출력 예 avg 82
//
//8
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d / %d = %d ... %d", a, b, a / b, a % b);
//}
//입력 예 35 10
//출력 예 35 / 10 = 3...5
//
//9
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	int a2=0, b2=0,area = 0;
//	scanf("%d %d", &a, &b);
//	a2 = a + 5;
//	b2 = b * 2;
//	area = a2 * b2;
//	printf("width = %d\nlength = %d\narea=%d", a2, b2, area);
//}
//
//입력 예 20 15
//출력 예 width = 25
//length = 30
//출력 예 area = 750
//
//10
//#include <stdio.h>
//int main()
//{
//	int a,n=1;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		n *= i;
//	}
//	printf("%d", n);
//}
//출력 예 5
//        120
//
//11 
//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//*
//**
//***
//****
//*****
//
//12
//#include <stdio.h>
//int main()
//{
//	char a;
//	while (1)
//	{
//		scanf("%c", &a);
//		if (a == '\n') printf("\"Hello\"\n");
//		else break;
//	}
//	return 0;
//}
//
//13
//
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j || i == n-1 || j == 0) printf("* ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
//}
//
//5
//*
//**
//**
//**
//*****
//
//14
//
//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//int main()
//{
//	int data[3][4] = { 0, };
//	int sum[3] = { 0, }, cnt = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			scanf("%d", &data[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			sum[i] += data[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		if (sum[i] / 4 >= 80) {
//			printf("pass\n");
//			cnt++;
//		}
//		else
//			printf("fail\n");
//	}
//	printf("pass : %d", cnt);
//	return 0;
//}
//
//85 67 95 65
//100 98 67 86
//67 86 90 76
//fail
//pass
//fail
//pass : 1
// 
//
//
//15
//#include <stdio.h>
//int main()
//{
//	for (int i = 5; i > 1; i--)
//	{
//		for (int j = 0; j < 5 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < i * 2 - 3; k++) {
//			if (k == 0 || k == i * 2 - 4) printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//}
//
//*     *
// *   *
//  * *
//   *
//
//16
// 
//#include <stdio.h>
//
//int main()
//{
//	int n,sum =1;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", sum);
//			sum++;
//		}
//		printf("\n");
//	}
//}
//5
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
//
//17
//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i <5; i++)
//	{
//		for (int k = 0; k < i; k++) 
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 9 - i * 2; j++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//*********
// *******
//  *****
//   *** 
//    *
//
//18
//#include <stdio.h>
//
//int main() {
//	int x = 2147483647;
//	char y = 127;
//	printf("%d, ", x);
//	x = x + 1;
//	printf("%d\n", x);
//	printf("%d, ", y);
//	y = y + 1;
//	printf("%d\n", y);
//	return 0;
//}
//
//2147483647, -2147483648
//127, -128
//
//#include <stdio.h>
// 
//typedef struct _p
//{
//	int x, y;
//}point;
//
//int main()
//{
//	point p1,p2;
//	p1.x = 1;
//	p1.y = 2;
//
//	printf("%d", p1.x);
//}
//
// 달리기 초 계산 평균 파일 입출력
//홍길동 14.5 13 12.5
//#include <stdio.h>
//int main()
//{
//	FILE* ifp = fopen("run.txt", "r"); // 파일 읽기  r 모드는 읽기 모드여서 무조건 파일을 미리 만들어야 한다
//	FILE* ofp = fopen("result.txt", "w"); // 파일 쓰기 w 모드는 파일이 없다면 생성하고 이미 있다면 초기화한후 출력
//	char name[10];
//	char name2[10];
//	double avg, n1, n2, n3;
//	double avg2, n4, n5, n6;
//
//	fscanf(ifp, "%s %lf %lf %lf", name, &n1, &n2, &n3); //run.txt  에 있는 값을 입력받는다
//	fscanf(ifp, "%s %lf %lf %lf", name2, &n4, &n5, &n6); //run.txt  에 있는 2번째 값을 입력받는다
//	avg = (n1 + n2 + n3) / 3.0;//받은 값으로 평균을 구한다
//	avg2 = (n3 + n4+ n5) / 3.0;//2번쨰 받은 값으로 평균을 구한다
//	fprintf(ofp, "%s %.1f\n %s %1.f\n", name, avg,name2,avg2);// reuslut.txt 에 출력한다
//
//	fclose(ifp);
//	fclose(ofp);
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	FILE* a = fopen("run.txt", "r");
//	FILE* b = fopen("result.txt", "w");
//	char name[10];
//	double avg = 0, n1 = 0, n2 = 0, n3 = 0;
//	fscanf(a, "%s %lf %lf %lf", name, &n1, &n2, &n3);
//	avg = (n1 + n2 + n3) / 3.0;
//	fprintf(b, "%s %lf %lf %lf", name, n1, n2, n3);
//	fclose(a);
//	fclose(b);
//	return 0;
//}
//
//#include <stdio.h>
//
//typedef struct _p
//{
//	int x, y;
//}point;
//
//int main()
//{
//	point p1;
//	p1.x = 1;
//	p1.y = 2;
//	printf("%d %d", p1.x, p1.y);
//}