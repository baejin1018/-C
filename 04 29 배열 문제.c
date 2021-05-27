//#include <stdio.h>
//
//int main()
//{
//	int s[50];
//	int max = 0, i;
//	for (i = 1; i < 5; i++)
//	{
//		printf("%d 번 학생의 프C성적 : ",i+1);
//		scanf("%d", &s[i]);
//		if (s[i] > max)
//		{
//			max = s[i];
//		}
//	}
//	printf("최고점수 : %d", max);
//	return 0;
//}
////입력
////1 번 학생의 프C성적 : 20
////2 번 학생의 프C성적 : 50
////3 번 학생의 프C성적 : 100
////4 번 학생의 프C성적 : 30
////5 번 학생의 프C성적 : 45
////출력
////최고점수 : 100

//#include <stdio.h>
//
//int main()
//{
//	int n[5];
//	int i,max=0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &n[i]);
//		if (n[i] > max)
//		{
//			max = n[i];
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", n[i]);
//	}
//	printf("\n최대값 : %d", max);
//	return 0;
//}
//입력
//1 2 4 5 2
//출력
//1 2 4 5 2
//최대값 : 5

//#include <stdio.h>
//
//int main()
//{
//	int p=0,i;
//	double s[100], avr = 0;
//
//	scanf("%d", &p);
//	for (i = 0; i < p; i++)
//	{
//		scanf("%lf", &s[i]);
//		avr += s[i];
//	}
//	
//	printf("평균 :%0.2lf", avr / p);
//	return 0;
//}
//입력
//3
//70 85 93
// 출력
//평균 :82.67
