#include <stdio.h>

int main(void) {

	double kg, ms, m, ke, pe;

	printf("물체의 질량(kg), 속력(m/s), 높이(m)를 입력하시오\n");
	scanf_s("%lf %lf %lf", &kg, &ms, &m);

	ke = 0.5 * kg * ms * ms;
	pe = 9.8 * m * kg;

	printf("물체의 운동에너지는 %.3lf J\n", ke);
	printf("물체의 위치에너지는 %.3lf J\n", pe);

	return 0;

}