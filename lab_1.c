// Программа проверяет, попала ли точка в заданную область
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include "assert.h"
void is_hit(float x, float y);
int main()
{	
	printf("Hello, my friend!\nTo start the programm please write 1.\nFor exit write 0.\n");
	for (;;) {
		int k;
		assert(scanf("%d", &k));// проверяем корректность ввода данных, если пользователем ввел не 0 или 1, то программа завершается
		if (k == 1) {
			float x, y;
			printf("Lets start. Please enter x and y coordinates:");
			assert(scanf("%f%f", &x, &y));
			is_hit(x, y);
			printf("\nRepeat?\t1-YES\t0-NO\n");
			continue;
		}
		if (k == 0) break;
		else printf("Something was wrong. Please, re-enter:\n");
	}
    return 0;
}
void is_hit(float x, float y) {
	if ((y - x + 1 <= 0 )&&((x - 0.5)*(x - 0.5) + (y - 0.5)*(y - 0.5) >= 2.25)) printf("YES,dot is in the field");
	else printf("NO, dot is not in the field");
}
