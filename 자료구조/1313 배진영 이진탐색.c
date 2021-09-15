#include <stdio.h>
#include <stdlib.h>
//이진탐색,이분탐색 : 정렬된 배열속 데이터 찾기

int arr[100] = { 5,7,33,66,67,88,99,120,134,156,201 };
int n, k;//k는 내가 찾을숫자
int count = 0;

int binarysearch(int s, int e) {//s는 시작 e는 끝
	while (s<=e){
		count++;
		int m = (s + e) / 2;//m은 middle
		if (arr[m] == k)
			return m;//찾은 배열의 인덱스(위치)
		if (arr[m] > k)//배열의 가운데 보다 내가 찾을 k의 값이 큰경우
			e = m - 1;
		else//배열의 가운데 보다 내가 찾을 k 값이 작은 경우
			s = m + 1;
	}
	return -1;//결국 숫자를 못찾음
}

int main() {
	printf("찾을 숫자 입력 :");
	scanf("%d", &k);
	printf("%d 번째에서 발견\n", binarysearch(0, 10));
	printf("%d 번만에 찾았습니다.\n", count);
	return 0;
}