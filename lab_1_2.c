// Программа записывает в файл результат проверки, попала ли точка в заданную область,считывая данные из исходного файла
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include "assert.h"
void is_hit(float x, float y,FILE *output);
int main()
{
	FILE *input,*output;
	printf("Programm is running...\n");
		if ((input = fopen("dots_coordinates.txt", "r")) == NULL) printf("File could not be opened\n");
		else {
			output = fopen("are_hit_dots.txt", "w");
			while (!feof(input)) {
				float x, y;
				assert(fscanf(input, "%f %f", &x, &y));// если в файле есть не только числа - вылетим с сообщением об ошибке
				is_hit(x, y, output);
			}
		}
		printf("Thats all. Please, check out output file are_hit_dots.txt\n");
	return 0;
}
void is_hit(float x, float y, FILE *output) {
	if ((y - x + 1 <= 0) && ((x - 0.5)*(x - 0.5) + (y - 0.5)*(y - 0.5) >= 2.25)) fprintf(output,"YES\n");
	else fprintf(output,"NO\n");
}