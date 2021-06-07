//구조체 복습(기말 시험 문제)
//#include <stdio.h>
//#include<math.h>
//
//struct point
//{
//	int x, y;
//};
//int main()
//{
//	struct point p;
//	p.x = 1;
//	p.y = 2;
//	printf("X 좌표 : %d , y 좌표 : %d\n", p.x, p.y);
//	//3,4 좌표의 점을 하나 더 만들어 보세요.
//	struct point p1;
//	p1.x = 3;
//	p1.y = 4;
//	printf("X 좌표 : %d , y 좌표 : %d\n", p1.x, p1.y);
//	double a, b, c;
//	a = p1.x - p.x;
//	b = p1.y - p.y;
//	c = sqrt(a*a + b*b);
//	printf("빗변의 길이는 : %.2lf\n", c);
//	
//	return 0;
//}

//파일 입출력

//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;//파일 포인터
//	fp = fopen("myfile.txt", "r"); //fopen 파일 오픈, r 읽기, w 쓰기
//	char name[80] = "";
//	int myAge;
//	while (!feof(fp))//feof = end of file = 파일에 끝 ,  while (!feof(fp))  = file 이 끝날때 까지 반복
//	{
//		fscanf(fp, "%s %d", name, &myAge);
//		printf("%s %d\n", name, myAge);
//	}
//	fclose(fp); //파일 닫아주기
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE* fp = fopen("myData.txt", "w");
//	fprintf(fp, "%s %d\n", "홍길동", 34);//myData.txt에 홍길동 34출력
//	fclose(fp);
//	return 0;
//}
//실행하면 모니터 화면에서는 아무것도 나오지않음
//하드디스크 같은 경로에 myData.txt.가 생성

//문제 키보드로 이름과 나이를 3명 입력받아 myData.txt에 기록하는 프로그램 만들기

//#include <stdio.h>
//
//int main()
//{
//	FILE* fp = fopen("myData.txt", "w");//"w" 쓰기
//	char name[50] = "";
//	int age;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%s", name);//이름 입력
//		scanf("%d",&age);//나이 입력
//		fprintf(fp, "%s %d\n", name, age);// myData.txt에 입력받은 나이 , 이름 출력
//	}
//	fclose(fp);
//	return 0;
//}
