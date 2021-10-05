//1. 화씨온도와 섭씨온도

#include <stdio.h>

int solution(int value, char unit) {
	if (unit == 'C') {
		value = (value * 1.8) + 32;
	}
	else {
		value = (value - 32) / 1.8;
	}
	return value;
}

int main() {
	int value;
	char unit;

	scanf("%d %c", &value, &unit);
	printf("%d", solution(value, unit));
	return 0;
}

