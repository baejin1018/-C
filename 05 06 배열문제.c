//
//#include <stdio.h>
//
//int main()
//{
//	int n[10] = { 0 }, num, i;
//	for (i = 0; ; i++)
//	{
//		scanf("%d", &num);
//		if (num <= 0 || num >10)
//		{
//			break;
//		}
//		n[num]++;
//	}
//	for (i = 1; i < 10; i++)
//	{
//		if (n[i] == 0)
//		{
//			continue;
//		}
//		printf("%d : %d\n", i, n[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//    int score[4][4] = { {0} };
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d번 점수", i + 1);
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &score[i][j]);
//            score[i][3] += score[i][j];
//            score[3][j] += score[i][j];
//            score[3][3] += score[i][j];
//        }
//    }
//    printf("   컴일 프C 수학  총점\n");
//    for (i = 0; i < 4; i++)
//    {
//        if (i < 3)
//        {
//            printf("%d번", i + 1);
//        }
//        else
//        {
//            printf("합계");
//        }
//        for (j = 0; j < 4; j++)
//        {
//            printf("%4d", score[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
