#include <stdio.h>

int main() {

	// �迭 �̸� ��ü�� �ּ�
	// �迭�� �̸��� �迭�� �����ּ�
	// arr == &arr[0]
	// �迭 �̸��� ����� ������
	// �ڡڡ��ٽ� arr[i] == *(arr + i)


	char str[10] = "hello";

	printf("%s\n", str); // hello
	// str�� �迭�� �����ּ�
	// str�� &str[0]
	// ���� h�� ����ִ� �����ּ�
	// %s - ���ڿ� �����ּҸ� ���޹޾� �ű⼭���� �ι��� ���ö�����
	printf("%s\n", str + 1); // ello
	printf("%s\n", str + 2); // llo
	printf("%s\n", str + 3); // lo
	printf("%s\n", str + 4); // o

	return 0;

}