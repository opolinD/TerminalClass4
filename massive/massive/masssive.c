#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
int main() {
	setlocale(LC_ALL, "rus");
	int size, num, stepen;
	srand(time(0));
	printf("Введите размер массива (до 10000): ");
	scanf_s("%d", &size);
	int mass[10000];
	for (int i = 0; i < size; i++) {
		mass[i] = -10 + rand() % 21;
	}
	printf("Введите число, кратные которому числа в массиве будут возведены в заданную вами степень(от 2 до 5) : \n");
	printf("Число: ");
	scanf_s("%d", &num);
	printf("Степень: ");
	scanf_s("%d", &stepen);
	for (int i = size, i > 0, i--) {
		if (mass[i] % num == 0) {
			mass[i] = pow(mass[i], stepen);
		}
		printf("%d ", mass[i]);
	}
	system("pause");
	return 0;
}