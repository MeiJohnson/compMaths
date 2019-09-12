#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>


void rectL();
void rectR();
void trap();
void simpson();
void secondMenu();
void thirdMenu();
void firstAlg();
void secondAlg();

void mainMenu() {
	system("cls");
	printf("Main menu\n");
	printf("1. Constant step's methods\n");
	printf("2. Variable step's methods\n");
	printf("3. Exit\n");


	int value = getValue(3);

	switch (value)
	{
		case 1:
		{
			secondMenu();
			break;
		}
		case 2:
		{
			thirdMenu();
			break;
		}
		case 3:
		{
			exit(0);
			break;
		}
	}
}

void secondMenu() {
	system("cls");
	printf("Constant step's methods menu\n");
	printf("1. Left rectangle\n");
	printf("2. Right rectangle\n");
	printf("3. Trapezi\n");
	printf("4. Simpson's method\n");
	printf("5. Return to main menu\n");

	int value = getValue(5);

	switch (value)
	{
	case 1:
	{
		rectL();
		break;
	}
	case 2:
	{
		rectR();
		break;
	}
	case 3:
	{
		trap();
		break;
	}
	case 4:
	{
		simpson();
		break;
	}
	case 5:
	{
		mainMenu();
		break;
	}
	}
}

void thirdMenu() {
	system("cls");
	printf("Main menu\n");
	printf("1. First algorithm\n");
	printf("2. Second algorithm\n");
	printf("3. Return to main menu\n");

	int value = getValue(3);

	switch (value)
	{
	case 1:
	{
		firstAlg();
		break;
	}
	case 2:
	{
		secondAlg();
		break;
	}
	case 3:
	{
		mainMenu();
		break;
	}
	}
}

int getValue(int count) {
	int value;

	while (scanf_s("%d", &value) != 1 || value < 1 || value > count) {
		printf("Incorrect input. Try again: ");
		scanf_s("%d", &value);
	}

	return value;
}

void rectL() {
	int a = 2, b = 7, n = 10000;

	//for (; n < 1000; n+=100){ }

	float h = (float)(b - a) / n;
	float s = 0, x;
	x = a;
	while (x <= (b - h)) {
		s += 1 / (x + 5);
		x += h;
	}
	float I = h * s;
	printf("Definite integral %f\n", I);
	printf("1. Back to main menu\n");
	printf("2. Exit\n");
	int value = getValue(2);
	switch (value)
	{
	case 1:
		mainMenu();
		break;

	case 2:
		exit(0);
		break;
	}
}
	

void rectR() {
	int a = 2, b = 7, n = 10000;
	
	float h = (float)(b - a) / n;
	float s = 0, x;
	
	x = a + h;
	
	while (x <= b)
	{
		s += 1/(x + 5);
		x += h;
	}
	float I = h * s;
	printf("Definite integral %f\n", I);
	printf("1. Back to main menu\n");
	printf("2. Exit\n");
	int value = getValue(2);
	switch (value)
	{
	case 1:
		mainMenu();
		break;

	case 2:
		exit(0);
		break;
	}
}

void trap() {
	int a = 2, b = 7, n = 10000;
	float h = (float)(b - a) / n;
	float s = (1/(a + 5) + 1/(b + 5))/2;
	float x = a + h;
	while (x <= (b - h))
	{
		s += 1/(x + 5);
		x = x + h;
	};
	
	float I = h * s;
	printf("Definite integral %f\n", I);
	printf("1. Back to main menu\n");
	printf("2. Exit\n");
	int value = getValue(2);
	switch (value)
	{
	case 1:
		mainMenu();
		break;

	case 2:
		exit(0);
		break;
	}
}

void simpson() {
	int a = 2, b = 7, n = 10000;
	float h = (float)(b - a) / n;
	float s = (1 / (a + 5) + 1 / (b + 5)), s1 = 0, s2 = 0;
	float x = a + h;

	while (x <= (b - h))
	{
		s1 += 1 / (x + 5);
		x = x + 2*h;
	};
	
	x = a + 2*h;
	
	while (x <= (b - 2*h))
	{
		s2 += 1 / (x + 5);
		x = x + 2 * h;
	};

	float I = h/3 * (s + 4*s1+2*s2);
	printf("Definite integral %f\n", I);
	printf("1. Back to main menu\n");
	printf("2. Exit\n");
	int value = getValue(2);
	switch (value)
	{
	case 1:
		mainMenu();
		break;

	case 2:
		exit(0);
		break;
	}
}
void firstAlg() {
}
void secondAlg() {
}

int main() {
	//freopen("a.in", "r", stdin);
	//freopen("a.out", "w", stdout);
	char *locale = setlocale(LC_ALL, "");

	int a, b;
	double eps = 0.1, x, n, I, h;
	//scanf("%d %d", &a, &b);
	
	mainMenu();
	
	return 0;
	
}