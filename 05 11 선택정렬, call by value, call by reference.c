// 선택정렬

//#include <stdio.h>
//#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
//void printArr(int value[], int n)
//{
//	for (int i = 0; i < n; i++)
//	    printf("%3d", value[i]);
//	printf("\n");
//	
//}
//
//void selectionSort(int* value, int n)
//{
//	int i, j, min = 0, temp = 0;
//	for (i = 0; i < n - 1; i++) // 1개는 하지 않기위해 -1을 빼준다
//	{
//		min = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (value[min] > value[j]) //value i가 value j 보다 작으면
//				min = j;//min에 j 값을 넣는다.
//		}
//		/*temp = value[i]; 
//		value[i] = value[min]; 
//		value[min] = temp;*/
//		SWAP(value[i], value[min], temp);
//	}
//}
//
//int main()
//{
//	int value[] = { 4,7,9,11,3,7,6 };
//	int n = sizeof(value) / sizeof(int);
//	printArr(value, n);
//	selectionSort(value, n);
//	printArr(value, n);
//	return 0;
//}
//


//call by value, call by reference

//#include <stdio.h>
//
//void swap1(int, int);//call by value 값
//void swap2(int*, int*);//call  by reference 참조
////함수 호출 후애도 변수의 값이 여전히 변경되어 있는가?
//
//int main()
//{
//	int a = 5,b = 8;
//	printf("a = %d , b = %d\n", a, b);
//	swap1(a, b);//값의 의한 호출
//	printf("a = %d , b = %d\n", a, b);
//	swap2(&a, &b);//참조 의한 호출
//	printf("a = %d , b = %d\n", a, b);
//	return 0;
//
//}
//
//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void swap2(int *a, int *b)
//{
//	int temp = *a; //temp에 a 주소의 값을 넣는다
//	*a = *b;  //a주소가 가리키는곳에 b 주소의 값을 넣는다
//	*b = temp;//temp에 b주소가 가르키는 곳 값을 넣는다
//}
