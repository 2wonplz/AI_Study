#include <stdio.h>

int main(void) {

	double kg, ms, m, ke, pe;

	printf("��ü�� ����(kg), �ӷ�(m/s), ����(m)�� �Է��Ͻÿ�\n");
	scanf_s("%lf %lf %lf", &kg, &ms, &m);

	ke = 0.5 * kg * ms * ms;
	pe = 9.8 * m * kg;

	printf("��ü�� ��������� %.3lf J\n", ke);
	printf("��ü�� ��ġ�������� %.3lf J\n", pe);

	return 0;

}