#include <cstdio>
#include <math.h>
#include <conio.h>
#include <iostream>
using namespace std;

#define PI 3.14159265 

int main()
{
	float x = 0, y = 0;
	cout << "Введите x: ";
	cin >> x;
	y = cos(x * PI / 180);
	cout << "y = " << y;
	getch();
}