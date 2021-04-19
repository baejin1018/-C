//static 을 사용하는 이유?
//지역변수이지만 전역변수처럼 쓰게 해준다.
//초기화를 한번만 하고 그 값을 유지해준다
//#include <stdio.h>
//int func(int n)
//{
//	static int a = 0;
//	a++;
//	printf("n=%d, a=%d\n", n, a);
//}
//int main()
//{
//	int n = 5;
//	func(n);
//	func(n);
//}

//문자열 저장하는 배열에 대하여
//#include <stdio.h>
//int main()
//{
//	char str[] = "Hellow World\n";
//	printf("str = %s\n", str);
//	printf("str의 크기 : %d \n", sizeof(str));
//	//왜 13이라고 나올까?
//	printf("Hello의 크기 = %d\n", sizeof("Hello"));
//	//왜 6이라고 나올까?
//	//NULL 때문 (문자열의 끝을 알기 위해)
//	char str1[10];
//	str1[0] = 'a';
//	str1[1] = 'b';
//	str1[2] = 'c';
//	str1[3] = '\0';
//	str1[4] = 'd';
//	printf("str1 = %s\n", str1);
//	printf("str1 = %d\n", sizeof(str1));
//	printf("널 문자의 값은 %d\n", str1[3]);
//	return 0;
//}

//문자열로 입력받고 문자 단위로 출력해보자
//#include <stdio.h>
//int main()
//{
//	char str[20];
//	int i = 0;
//	scanf("%s", str);
//	//str앞에 & 안 쓰는 이유 str 자체가 주소이기 때문에
//	//&str[0] == str
//	printf("문자 단위 출력 \n");
//	while (str[i] != '\0')
//	{
//		printf("%c", str[i++]);
//	}
//	printf("\n%s\n", str);
//	return 0;
//}

//문자열을 입력받아 문자열을 뒤집어 출력하는 프로그램을 작성하시오
//입력 Hello
//출력 olleH

//#include <stdio.h>

//int main()
//{
//	char str[100];
//	int null;
//	scanf("%[^\n]", str); // 엔터만 null 값 취급
//	for (null = 0; str[null] != '\0'; null++) {}
//	for (null-1; null >= 0; null--)
//	{
//		printf("%c", str[null]);
//	}
//	return 0;
//}