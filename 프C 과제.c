//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	//영어 문장을 입력받아
//	//영어단어의 소문자의 길이(갯수)를 알려주는 프로그램을 만드시오.
//	char word[50];
//	int i, small = 0;;
//	scanf("%s", &word);
//	//예시 Hello 라면 4 출력
//	//I Love you 라면 소문자 개수 6 출력
//	for (i = 0; word[i] != '\0'; i++)
//	{
//		if ((int)word[i] >97)
//		{
//			small++;
//		}
//	}
//	printf("%d", small);
//	return 0;
//}

//=====================================================

//단어(word)를 입력 받아서 그 단어 안에서 가장 큰 아스키 코드 값, 즉 가장 뒤의 알파벳을 출력하는 프로그램을 만드시오
//#include <stdio.h>
//
//int main()
//{
//	char w[100] = { 0, };
//	int i, max = 0, j;
//	scanf("%s", &w);
//	for (i = 0; w[i] != '\0'; i++)
//	{
//		if (w[i] > max)
//			max = w[i];
//	}
//
//	printf("%c", max);
//
//	return 0;
//}
