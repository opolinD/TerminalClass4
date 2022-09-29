#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
int main() {
	setlocale(LC_ALL, "rus");
	int size;
	srand(time(0));
	printf("¬ведите размер массива (до 10000): ");
	scanf_s("%d", &size);
	int mass[10000];
	for (int i = 0; i < size; i++) {
		mass[i] = -10 + rand() % 21;
		printf("%d ", mass[i]);
	}
	system("pause");
	return 0;
}