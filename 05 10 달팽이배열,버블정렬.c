////달팽이 배열
//#define SIDE 100
//
//#include <stdio.h>
//int arr[SIDE][SIDE]; //arr [100][100];
//
//void printarr(int n)
//{
//    int i, j;
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            printf("%3d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    //return 0;
//}
//
//void makearr(int n)
//{
//    int value = 1;
//    int row = 0, col = -1;
//    int inc = 1; //증가 감소 처리, 1, -1
//    int i, j;
//    while (n > 0) {
//        for (i = 0; i < n; i++) {
//            col += inc;
//            arr[row][col] = value++; //value는 배열에 넣을 값
//        }
//        n--;
//        if (n == 0)
//            break; //n이 0이 되면 끝
//        for (i = 0; i < n; i++) {
//            row += inc;
//            arr[row][col] = value++; //value는 배열에 넣을 값
//        }
//        inc *= -1; //-1을 곱해서 방향을 정해준다
//    }
//}
//int main()
//{
//    int side = 0;
//    printf("달팽이 배열의 길이 : ");
//    scanf("%d", &side); //몇줄인지 입력
//    makearr(side); //달팽이 배열 만들기
//    printarr(side);
//    return 0;
//}

////버블 정렬
//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//void BubbleSort(int arr[], int len);
//int main()
//{
//    int arr[5] = { 4,6,1,3,9 };
//    int i;
//    BubbleSort(arr, 5);
//    //정렬된 후 출력
//    for (i = 0; i < 5; i++) { //출력
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//void BubbleSort(int arr[], int len) {
//    int temp;
//    for (int i = 0; i < len - 1; i++) {
//        for (int j = 0; j < len - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) { //앞에 있는 수가 뒤에 있는 수보다 크면 두 수를 바꿔줌
//                temp = arr[j];   //스왑
//                arr[j] = arr[j + 1]; //스왑
//                arr[j + 1] = temp; //스왑
//            }
//        }
//    }
//}
