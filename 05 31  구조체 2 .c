// 내가 만든 구조체 예제

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//typedef struct personal_information // typedef를 사용하여 struct personal_information 대신 PI로 서용하게 하였다
//{
//	char name[30];
//	int age;
//	char school[50];
//	char gender[20];
//}PI;
//
//int main()
//{
//	int count = 1, i;
//	char answer='n';
//	PI PI1[100];
//	while (1)
//	{ 
//		printf("======== %d 번의 정보 ========\n", count);
//		printf("이름 : ");
//		scanf(" %[^\n]", PI1[count].name); //PI1[count]의 name 에 입력
//		printf("나이 : ");
//		scanf("%d", &PI1[count].age); //PI1[count]의 age 에 입력
//		printf("학교 : ");
//		scanf(" %[^\n]", PI1[count].school); //PI1[count]의 school 에 입력
//		printf("성별 : ");
//		scanf(" %[^\n]", PI1[count].gender); //PI1[count]의 gender 에 입력
//		printf("\n");
//		printf("계속 입력 ? (y/n) : ");
//		scanf(" %c", &answer);
//		count++;
//		if (answer == 'n')
//		{
//			break;
//		}
//		printf("\n");
//	}
//	printf("\n");
//	for (i = 1; i < count; i++) //이때까지 입력한 정보를 모두 출력
//	{
//		printf("======== %d 번의 정보 ========\n",i);
//		printf("이름 : %s\n", PI1[i].name);
//		printf("나이 : %d\n", PI1[i].age);
//		printf("학교 : %s\n", PI1[i].school);
//		printf("성별 : %s\n", PI1[i].gender);
//		printf("\n");
//	}
//	return 0;
//}

// 구조체 문제 .1 피타고라스

//#include <stdio.h>
//#include<math.h>
//
//typedef struct Point
//{
//	int x;
//	int y;
//}point;
//
//int main()
//{
//	point p1;//점 1
//	point p2;//점 2
//	p1.x = 30; p1.y = 20;
//	p2.x = 60; p2.y = 50;
//	double sol;
//	int a = p2.x - p1.x;
//	int b = p2.y - p1.y;
//	sol = sqrt((pow(a,2)) +(pow(b,2)));
//	printf("%f\n", sol);
//	return 0;
//}