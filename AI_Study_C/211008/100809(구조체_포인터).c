#include <stdio.h>

struct person {
	char name[10];
	int age;
	double hei;
};

typedef struct person Person;
// type definition
// struct person -> Person

int main() {

	struct person p = { "�̹�ȣ", 20, 176.4 };
	struct person* ptr = &p;
	// Person p = { "�̹�ȣ", 20, 176.4 };
	// Person* ptr = &p;
	
	printf("�̸� : %s", p.name);
	printf("�̸� : %s", (*ptr).name);
	// ptr�� ����Ű�� ���� name
	printf("�̸� : %s", ptr->name);
	// ȭ��ǥ ������ ����ؼ� ����
	// (*ptr).name == ptr->name

	return 0;

}