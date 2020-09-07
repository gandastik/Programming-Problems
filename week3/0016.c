#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char adrian[4] = "ABC";
	char bruno[5] = "BABC";
	char goran[7] = "CCAABB";
	int n;
	int adrianCorrect = 0;
	int brunoCorrect = 0;
	int goranCorrect = 0;
	scanf("%d\n", &n);
	char answer[100] = "";
	for (int i = 0; i < n ; i++) {
		scanf("%c", &answer[i]);
	}
	for (int i = 0; i < n; i++) {
		if (answer[i] == adrian[i%3]) {
			adrianCorrect++;
		}
		if (answer[i] == bruno[i%4]) {
			brunoCorrect++;
		}
		if (answer[i] == goran[i%6]) {
			goranCorrect++;
		}
	}
	if (adrianCorrect > brunoCorrect && adrianCorrect > goranCorrect) {
		printf("%d\nAdrian", adrianCorrect);
	}
	else if (brunoCorrect > adrianCorrect && brunoCorrect > goranCorrect) {
		printf("%d\nBruno", brunoCorrect);
	}
	else if (goranCorrect > adrianCorrect && goranCorrect > brunoCorrect) {
		printf("%d\nGoran", goranCorrect);
	}
	if (adrianCorrect == brunoCorrect && adrianCorrect == goranCorrect && brunoCorrect == goranCorrect) {
		printf("%d\nAdrian\nBruno\nGoran", adrianCorrect);
	}
	else if (adrianCorrect == brunoCorrect) {
		printf("%d\nAdrian\nBruno", adrianCorrect);
	}
	else if (brunoCorrect == goranCorrect) {
		printf("%d\nBruno\nGoran", brunoCorrect);
	}
	else if (adrianCorrect == goranCorrect) {
		printf("%d\nAdrian\nGoran", adrianCorrect);
	}
	return 0;
}