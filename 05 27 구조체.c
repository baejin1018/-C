//구조체
//#include <stdio.h>
////구조체 structure, struct
////int x, y;
//
//struct Point  //구조체로 점을 정의
//{
//	int x, y; 
//};
//int main()
//{
//	struct Point p = { 4,5 }; // struct 이름 은 int 이름 , char 이름과 비슷하다
//	printf("x = %d, y = %d \n", p.x, p.y); // p.x 면 struct Point x 에 접근한다.
//	p.x = 10; //struct x 값을 10으로 변경
//	p.y = 20; //struct y 값을 20으로 변경
//	printf("x = %d, y = %d \n", p.x, p.y);
//	struct Point PP[100];
//	PP[0].x = 10;
//	PP[0].y = 20;
//	return 0;
//}
//
// 


//학생 정보 구조체 만들기
//#include <stdio.h>
//#include <string.h>
//struct Student
//{
//	char name[20]; // 학생이름
//	int stuNum;//학생번호
//	int age;//학생나이
//	char address[100];// 집 주소
//};
//int main()
//{
//	struct Student class13[20]; // 1 학년 3반 20명 관리용
//	strcpy(class13[0].name,"배진영");
//	class13[0].age = 17;
//	class13[0].stuNum = 1313;
//	strcpy(class13[0].address, "대구");
//	printf("1학년 3반 학생정보 \n");
//	printf("이름 : %s\n", class13[0].name);//class13중 name 을 출력
//	printf("나이 : %d\n", class13[0].age);//class13중 age 을 출력
//	printf("학번 : %d\n", class13[0].stuNum);//class13중 stuNum 을 출력
//	printf("주소 : %s\n", class13[0].address);//class13중 address 을 출력
//	return 0;
//}

//학생 5명의 정보를 입력받는 프로그램
//#include <stdio.h>
//
//struct Student
//{
//	char name[20]; // 학생이름
//	int stuNum;//학생번호
//	int age;//학생나이
//	char address[100];// 집 주소
//};
//
//int main()
//{
//	struct Student class13[20];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("이름 : ");
//		scanf("%s", class13[i].name);
//		printf("주소 : ");
//		scanf(" %[^\n]", class13[i].address);  // %[^\n] 엔터키까지 입력받게 해준다
//		printf("번호 : ");
//		scanf("%d", &class13[i].stuNum);
//		printf("나이 : ");
//		scanf("%d", &class13[i].age);
//		printf("\n");
//	}
//	printf("=========== 1- 3 학생정보 ===========\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("이름 : %s\n", class13[i].name);
//		printf("나이 : %d\n", class13[i].age);	
//		printf("학번 : %d\n", class13[i].stuNum);
//		printf("주소 : %s\n", class13[i].address);
//		printf("\n");
//	}
//	return 0;
//}

//게임 캐릭터를 저장하는 구조체를 만ㄷ릉어 입력받아 출력하세요
//#include <stdio.h>
//
//typedef struct gameC //typedef 를 쓰면 옆에서 쓴것처럼 strct gameC 를 치지 않고 myGame으로 쓸수 있다.
//{
//	char name[20];
//	char Weapon[20];
//	int stat;
//}myGame;
//
//int main()
//{
//	myGame gc[10];
//	printf("이름 : ");
//	scanf("%s", gc[0].name);
//	printf("무기 이름 : ");
//	scanf(" %[^\n]", gc[0].Weapon);  // %[^\n] 엔터키까지 입력받게 해준다
//	printf("스탯 : ");
//	scanf("%d", &gc[0].stat);
//	printf("\n");
//	printf("이름 : %s\n", gc[0].name);
//	printf("무기 이름 : %s\n", gc[0].Weapon);
//	printf("스탯 : %d\n", gc[0].stat);
//	return 0;
//}