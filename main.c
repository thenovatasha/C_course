// 29th Aug -- Mid sem test
#include <stdio.h>

int main(void) {
	
	double lenA, lenB, lenC, lenD;
	printf("Please enter the 4 variables\n");
	scanf("%lf %lf %lf %lf", &lenA, &lenB, &lenC, &lenD);
	
	double perimeter = lenA + lenB + lenC + lenD;
	float area = lenA * lenB;
	printf("Perimeter is %.2lf\n", perimeter);
	printf("Area is %.2f\n", area);
	return 0;
	}