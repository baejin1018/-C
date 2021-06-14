//#include <stdio.h>
//// 구조체를 사용하여 이름과 나이를 입력받아 출력하는 프로그램
////typedef struct data student;
//typedef struct data // = typedef struct data student;
//{
//	char name[20];
//	int age;
//	int Snum;
//}student;
//
//int main()
//{
//	student me;
//	printf("이름입력 : ");
//	scanf("%s", me.name);
//	printf("나이입력 : ");
//	scanf("%d",&me.age);
//	printf("학번입력(학번은 4자리 수) : ");
//	scanf("%d", &me.Snum);
//
//	printf("제이름은 %s, 나이는 %d 학번은 %d 입니다", me.name, me.age,me.Snum);
//	return 0;
//}

//// 국어 영어 수학 점수를 입력받아 출력하는 프로그램, 구조체 험수 리턴
//
//#include <stdio.h>
//
//typedef struct data
//{
//	char name[20];
//	int kor, eng, math;
//}student;
//
//student score(student s1, student s2)//구조체 함수 리턴
//{
//	student sum;
//	strcpy(sum.name, "총합"); 
//	sum.kor = s1.kor + s2.kor;
//	sum.eng = s1.eng + s2.eng;
//	sum.math = s1.math + s2.math;
//	return sum;
//}
//int main()
//{
//	student s1, s2,sum;
//	//1번학생 입력
//	scanf("%s %d %d %d", s1.name, &s1.kor, &s1.eng, &s1.math);
//	//2번학생 입력
//	scanf("%s %d %d %d", s2.name, &s2.kor, &s2.eng, &s2.math);
//	//strcpy(sum.name, "총합"); //C 언어에서는 문자열 복사 함수 사용 , 바로 문자열을 넣지 못하기 때문에 사용 ex) str = "총합"; 하면 안됨
//	//sum.kor = s1.kor + s2.kor;//국어점수 총합
//	//sum.eng = s1.eng + s2.eng;//영어점수 총합
//	//sum.math = s1.math + s2.math;//수학점수 총합
//	sum = score(s1, s2);
//
//	//두명의 학생 이름 각 과목 점수를 출력
//	//두명의 총합 점수를 출력하시오
//
//	printf("%s : 국어 : %d, 영어 : %d, 수학 : %d\n", s1.name, s1.kor, s1.eng, s1.math);
//	printf("%s : 국어 : %d, 영어 : %d, 수학 : %d\n", s2.name, s2.kor, s2.eng, s2.math);
//	printf("총합 : 국어 : %d, 영어 : %d, 수학 : %d\n", sum.kor, sum.eng, sum.math);
//	return 0;
//}

////두 점을 입력받아 두 점의 중앙 위치를 알려주는 프로그램을 만드시오
//
//#include <stdio.h>
//typedef struct _p
//{
//	double x, y;
//}point;
//
//int main()
//{
//	point p1, p2;
//	double centerx = 0, centery = 0;
//	scanf("%lf %lf", &p1.x, &p1.y);
//	scanf("%lf %lf", &p2.x, &p2.y);
//	centerx = (p1.x + p2.x) / 2.0;
//	centery = (p1.y + p2.y) / 2.0;
//	printf("%.1lf %.1lf", centerx, centery);
//	return 0;
//}

////삼각형의 좌표를 입력받아 무게중심의 위치를 출력하는 프로그램
////무게중심 = (x1+x2+x3)/3, (y1+y2+y3)/3
//
//#include <stdio.h>
//typedef struct _p
//{
//	double x, y;
//}point;
//
//int main()
//{
//	point p1, p2, p3;
//	double x=0,y=0;
//	scanf("%lf %lf", &p1.x, &p1.y);
//	scanf("%lf %lf", &p2.x, &p2.y);
//	scanf("%lf %lf", &p3.x, &p3.y);
//	x = (p1.x + p2.x +p3.x) / 3.0;
//	y = (p1.y + p2.y +p3.y) / 3.0;
//	printf("무게중심 : %.1lf ,%.1lf", x,y);
//	return 0;
//}
//
////저축왕을 찾는 프로그램
//
//#include <stdio.h>
//
//typedef struct _m 
//{
//	int num;//계좌번호
//	int money;//입금된돈
//}money;
//
//money maxMoney(money m[], int n)
//{
//	money max = m[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (max.money < m[i].money)//최대값 찾는 고드
//			max = m[i];
//	}
//	return max;
//}
//int main()
//{
//	money m[5], king;//저축왕
//	int i;
//	for (i = 0; i<5; i++)
//	{
//		printf("계좌번호와 금액\n");
//		m[i].num = i;//계죄번호는 자동 입력
//		scanf("%d", &m[i].money);
//	}
//	king = maxMoney(m, 5); // 5명의 계좌번호를 넘김
//	printf("저축왕 %d번 %d원\n", king.num, king.money);
//}