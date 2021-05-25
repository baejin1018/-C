
//주사위 게임
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	
//	srand((unsigned int)time(NULL));
//	//주사위 : 1~6 범위
//	int n1,n2,n3,n4;
//	char yn;
//	int add = 0;
//	while (1)
//	{
//		printf("주사위게임을 하시겠습니까(y/n) :");
//		scanf("%c", &yn);
//		getchar();
//		if (yn == 'n')
//			break;
//		n1 = rand() % 6 + 1; // %6 하면 0 ~ 5 까지 나오는데 주사위는 1 ~ 6 까지기 때문에 1을 더해준다
//		n2 = rand() % 6 + 1;
//		printf("주사위 :%d , %d\n", n1,n2);
//		if (n1 == n2)
//		{
//			printf("더블입니다 \n");
//			n3 = rand() % 6 + 1;
//			n4 = rand() % 6 + 1;
//			printf("주사위 :%d , %d\n", n3, n4);
//			add = n1 + n2 + n3 + n4;
//		}
//		else
//			add = n1 + n2;
//		printf("%d 칸 전진하세요\n", add);
//		printf("\n");
//	}
//	return 0;
//}

//가위바위보 게임

//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	int num;
//	int rsp, rsp2;
//	int w=0, l=0, d=0;
//	srand((unsigned int)time(NULL));
//	printf("가위바위보 게임을 몇번 실행하겠습니까? : ");
//	scanf("%d", &num);
//	for (int i = 0; i < num; i++)
//	{
//		printf("1.가위 2. 바위 3. 보 : ");
//		scanf("%d", &rsp);
//		getchar();
//		rsp2 = rand() % 3 + 1;
//		if (rsp == 1)
//		{
//			if (rsp2 == 3)
//			{
//				w++;
//				printf("당신이 이겼습니다 (%d 승 %d 무 %d 패)\n", w, d, l);
//			}
//			else if (rsp2 == 2)
//			{
//				l++;
//				printf("당신이 졌습니다 (%d 승 %d 무 %d 패)\n", w, d, l);
//			}
//			else if (rsp2 == 1)
//			{
//				d++;
//				printf("당신이 비겼습니다 (%d 승 %d 무 %d 패)\n", w, d, l);
//			}
//		}
//		if (rsp == 2)
//		{
//			if (rsp2 == 1)
//			{
//				w++;
//				printf("당신이 이겼습니다 (%d 승 %d 무 %d 패)\n", w, d, l);
//			}
//			else if (rsp2 == 3)
//			{
//				l++;
//				printf("당신이 졌습니다 (%d 승 %d 무 %d 패)\n", w, d, l);
//			}
//			else if (rsp2 == 2)
//			{
//				d++;
//				printf("당신이 비겼습니다 (%d 승 %d 무 %d 패)\n", w, d, l);
//			}
//		}
//		if (rsp == 3)
//		{
//			if (rsp2 == 2)
//			{
//				w++;
//				printf("당신이 이겼습니다 (%d 승 %d 무 %d 패)\n", w, d, l);
//			}
//			else if (rsp2 == 1)
//			{
//				l++;
//				printf("당신이 졌습니다 (%d 승 %d 무 %d 패)\n", w, d, l);
//			}
//			else if (rsp2 == 3)
//			{
//				d++;
//				printf("당신이 비겼습니다 (%d 승 %d 무 %d 패)\n", w, d, l);
//			}
//		}
//	}
//	return 0;
//}

//야구게임

//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	int num,num2,num3,num1,num10,num100;
//	char yn;
//	srand((unsigned)time(NULL));
//	do {
//
//		printf("야구게임을 하시겠습니까? (y/n) : ");
//		scanf("%c", &yn);
//		getchar();
//		num100 = rand() % 10;
//		num10 = rand() % 10;
//	    num1 = rand() % 10;
//	} 	while (yn == 'y');
//	{
//	
//		printf("세 자리 숫자를 입력하세요 : ");
//		scanf("%d %d %d", &num,&num2,&num3);
//		getchar();
//		if num
//	}
//
//}