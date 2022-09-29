#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int size, num;
	float stepen;
	srand(time(0));
	printf("Введите размер массива (до 10000): ");
	scanf_s("%d", &size);
	int mass[10000];
	for (int i = 0; i < size; i++) {
		mass[i] = -10 + rand() % 21;
		printf("%d ", mass[i]);
	}
	printf("Введите число, кратные которому числа в массиве будут возведены в заданную вами степень(от 2 до 5) : \n");
	printf("Число: ");
	scanf_s("%d", &num);
	printf("Степень: ");
	scanf_s("%f", &stepen);
	for (int i = size - 1; i >= 0; i--) {
		if (mass[i] % num == 0) {
			mass[i] = pow(mass[i], stepen);
		}
		printf("%d ", mass[i]);
	}
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", mass[rand()%size]);
	}
	system("pause");
	return 0;
}