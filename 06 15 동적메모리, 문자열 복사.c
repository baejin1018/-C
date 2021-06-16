////동적 메모리 할당
////정적으로 메모리 할당 : 배열
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[4] = { 1,2,3,4 };
//	//int 4byte : total 16byte
//	int* pArr;
//	int n;
//	scanf("%d", &n);
//	pArr = (int*)malloc(sizeof(int)*n);// malloc : 입력한 n 만큼의 int형 배열을 생성해준다
//	if (pArr == NULL)//메모리 공간이 다 찼을때
//	{
//		printf("메모리 공간 초과");
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		pArr[i] = i * i;
//		printf("pArr[i] = %d\n", pArr[i]);
//	}
//	free(pArr); // malloc를 다 썻다는 것을 알려준다. malloc을 쓰면 무조건 사용해야한다.
//	return 0;
//}

////strcpy : string copy 문자열 복사
//#include <stdio.h>
//#include <string.h>
//
//typedef struct _p
//{
//	char name[20];
//	int x;
//	int y;
//}point;
//
//int main()
//{
//	point p1, p2;
//	strcpy(p1.name, "구조체 복사");//문자열을 초기화할때 말고 문자열을 대입할때 사용
//	p1.x = 10;
//	p1.y = 20;
//	//아래 출력이 되도록 p2에 p1값을 복사해 보세요
//
//	/*strcpy(p2.name, p1.name); //방법 1
//	p2.x = p1.x;
//	p2.y = p1.y;*/
//	//memcpy(&p2, &p1, sizeof(point)); //방법2 p1의 메모리만큼 p2에 복사
//	p2 = p1;//방법 3
//	printf("%s\n", p2.name);
//	printf("%d %d\n", p2.x,p2.y);
//	return 0;
//}

////5명의 이름과 키 몸무게를 입력받아 키가작은 순으로 
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//typedef struct _p
//{
//	char name[20]; //5명 20바이트 미만의 이름 길이
//	int he;//키
//	double we;//몸무게
//}student;
//
//student s[5];
//
//void input()
//{
//	for (int i = 0; i < 5; i++)
//		scanf("%s %d %lf", s[i].name, &s[i].he, &s[i].we);
//}
//
//void sort()
//{
//	student tmp;
//	//char tmp_name[20];// temp tmp temporary = 임시
//	//int tmp_he;
//	//double tmp_we;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if(s[i].he>s[j].he)//키가 작은순으로 정렬
//			{
//				memcpy(&tmp, &s[i], sizeof(student));
//				memcpy(&s[i], &s[j], sizeof(student));
//				memcpy(&s[j], &tmp, sizeof(student));
//			}
//		}
//	}
//}
//
//void output()
//{
//	for (int i = 0; i < 5; i++)
//		printf("%s %d %.1lf\n",s[i].name,s[i].he,s[i].we);
//}
//
//int main()
//{
//	input();
//	sort();
//	output();
//	return 0;
//}