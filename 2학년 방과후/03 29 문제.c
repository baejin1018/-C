//#define _CRT_NO_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("교환전 : %d %d\n교환후 : %d %d",a,b, b, a);
//}
//
//#define _CRT_NO_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int rnum[100] = {0,};
//	int a=0,b=0;
//	printf("임의로 생성된 1~100 사이의 수 10개\n");
//	for (int i = 0; i <= 10; i++) {
//		rnum[i] = rand() % 100+1;
//		printf("%d ", rnum[i]);
//	}
//	printf("\n");
//	printf("찾고자 하는 수를 입력하세요. : ");
//	scanf("%d", &a);
//	for (int i = 0; i <= 10; i++) {
//		if (rnum[i] == a) {
//			b = 1;
//			printf("%d는 배열의 %d번째에 존재하는 수입니다.", a, i);
//		}
//	}
//	if (b==0){
//		printf("%d를 찾지 못하였습니다.", a);
//	}
//}


//#define _CRT_NO_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int rnum[5][5] = {0,};
//	int a=1;
//	printf("임의로 생성된 1~100 사이의 수 25개\n");
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			rnum[i][j] = rand() % 100+1;
//			printf("%d		", rnum[i][j]);
//			if (a == 5) {
//				printf("\n");
//				a = 0;
//			}
//			a++;
//		}
//	}
//}
//
//#define _CRT_NO_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void main() {
//	int len, a = 0;
//
//	char c[100];
//
//	printf("문장을 입력하세요 : ");
//	//gets(c);
//	scanf("%[^\n]s", c);
//
//
//	len = strlen(c);
//	for (int i = 0; i < len + 1; i++) {
//		if (c[i] == ' ') {
//			a++;
//		}
//	}
//	printf("문장의개수는 %d", a + 1);
//	return 0;
//}

//#define _CRT_NO_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int a=0, b=0,c=0;
//	scanf("%d %d", &a, &b);
//	for(int i = a; i <= b; i++){
//		if (i % 4 == 0) {
//			c++;
//			if (i % 100 == 0) {
//				c--;
//				if (i % 400 == 0) {
//					c++;
//				}
//			}
//		}
//	}
//	printf("%d", c);
//}