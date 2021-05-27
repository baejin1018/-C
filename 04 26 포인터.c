//포인터
//포인터란? 
//pointer 메모리 주소값을 저장하는 변수
//i = 변수
//&i 변수의 주소
////int *p; p는 정수형 변수의 주소저장
////int *p = p=&i;
//
////포인터 예제 
//#include <stdio.h>
//int main()
//{
//	int n1 = 100;
//	int* p;//포인터 선언
//	//p =n1; 안됨
//	p = &n1;
//	printf("%p\n", p);//0075FBC4 %p는 포인터 주소 찍을때 사용
//	printf("%d\n", *p);//100 *p : p가 가리키는 곳의 값
//	printf("%d\n", n1);//100
//	(*p) = 300;
//	printf("%d\n", *p);//300
//	pritnf("%d\n", n1);//300
// return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n1 = 100;
//	int* p;
//	p = &n1;
//	printf("주소 (Address) : %p, %p\n", p, &n1);
//	printf("내용 ,값 :%d, %d\n", *p, n1);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%4d", (*p)++);//100 101 102 103 104
//	}
//	printf("\n%d\n", n1); //105
//	return 0;
//}
////
////주소(Address) : 012FFE94, 012FFE94 *p와 n1은 같은 것을 가르킴
////내용, 값 : 100, 100 

//#include <stdio.h>
//
//int main()
//{
//	int a[5] = { 0,1,2,3,4, };
//	printf("%d %d\n", a[0], a[1]);
//	printf("%d %d\n", &a[0], &a[1]);
//	printf("a 주소 = %d a[0] 주소 = %d\n", &a, &a[0]);
//	int* p = a;
//	printf("a주소 = %d\n",p);
//	printf("a주소 = %d\n", a);
//	printf("a주소 = %d\n",&a[0]);
//	printf("a[1]주소 = %d\n",&a[1]);
//	printf("a[1]주소 = %d\n",a+1);//a 1000, a+1 =1004  int형은 4바이트여서 1더하면 4늘어남
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a[5] = { 0,1,2,3,4 };
//	int* p;
//	int b = 10;
//	a = &b; //error 식이 수정할 수 있는 lvalue 입니다 a가 상수여서 
//	p = &b;
//	return 0;
//}
