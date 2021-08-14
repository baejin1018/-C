//연속하는 3수의 곱이 가장 큰 결과를 찾는 문제

//#include <stdio.h>
//
//int main()
//{
//	int t, i, j, k, q = 1,x = 1;
//	double n[100], max = 0;
//	
//
//	scanf("%d", &t);
//	for (i = 0; i < t; i++)
//	{
//		scanf("%lf", &n[i]);
//	}
//	for (j = 0; j < t - 2; j++)
//	{
//		for (k = 0; k < 3; k++)
//		{
//			x *= n[q];
//			q++;
//		}
//		if (x > max)
//		{
//			max = x;
//		}
//		q -= 2;
//      x=1;
//	}
//	printf("%0.4lf", max);
//	return 0;
//}

//포인터 : 주소값을 저장하는 변수

//#include <stdio.h>
//
//int main()
//{
//	int a[5] = { 0,1,2,3,4 };
//	printf("%d %d\n", a[0], a[1]);
//	printf("%p %p\n", &a[0], &a[1]); // &a[1] - &a[0] =4
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* pArr = arr;
//	printf("%d \n", *pArr);//1000
//	printf("%d \n", *(++pArr));//1004
//	printf("%d \n", *(++pArr));//1008
//	printf("%d \n", *(pArr+1));//1012 pArr이 바뀌지 않는다 pArr = 1008	
//	printf("%d \n", *(pArr+2));//1016 pArr = 1008 / 1008(pArr)+8(2)=1016(5)
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 2, c = 3;
//	int* pArr[3] = { &a,&b,&c };//포인터 배열 / a의주소 b의주소 c의주소가 들어있는데 그 주소를 따라가면 정수가 있다
//	printf("%d \n", *pArr[0]); //1
//	printf("%d \n", *pArr[1]); //2
//	printf("%d \n", *pArr[2]); //3
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char Arr[3][10] = { "Kim","Hong","Lee" }; //2차원배열
//	//char* pArr[3] = { "Kim","Hong","Lee" };//포인터 배열
//	char* pArr[3] = { Arr[0],Arr[1],Arr[2] };//포인터 배열
//	printf("%s \n", pArr[0]);
//	printf("%s \n", pArr[1]);
//	printf("%s \n", pArr[2]);
//	//arr[i] == * (arr+i)
// 
//	printf("%s \n", *pArr);
//	printf("%s \n", *pArr+1);
//	printf("%s \n", *pArr+2);
//
//	printf("%s \n", *pArr);
//	printf("%s \n", *(pArr + 1));
//	printf("%s \n", *(pArr + 2));
//
//	return 0;
//}
//
//Kim
//Hong
//Lee
//Kim
//im
//m
//Kim
//Hong
//Lee
