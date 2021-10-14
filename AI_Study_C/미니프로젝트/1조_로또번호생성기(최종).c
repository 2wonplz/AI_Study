#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* �ٽû̱� ����

1. ���ӵ� ���ڰ� 4�� �̻��� ���
2. �� ������ (1 ~ 10, 11 ~ 20, ... , 41 ~ 45) ���ڰ� 4�� �̻��� ���
3. ���� ¦���̰ų� ���� Ȧ���� ���
4. 1�� �ڸ����� �ߺ��� ���ڰ� 3�� �̻��� ���

*/

int main(void) {

    int lotto[6] = { 0, };      // �ζ� ��ȣ �����
    int chk[6] = { 0, };        // 1�� �ڸ��� �ߺ� üũ��
    int i, j, temp, check, reset;

    srand(time(NULL));

    while (1) {
        
        for (i = 0; i < 6; i++) {
            
            // �������� ���� �� ����
            lotto[i] = rand() % 45 + 1;

            // �ߺ��� üũ �� �ش� �迭�� �� �����
            for (j = 0; j < i; j++) {
                if (lotto[i] == lotto[j]) {
                    i--;
                    break;
                }
            }

        }

        // �������� ����
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 5; j++)
                if (lotto[j] > lotto[j + 1]) {
                    temp = lotto[j];
                    lotto[j] = lotto[j + 1];
                    lotto[j + 1] = temp;
                }
        }

        // ���ӵ� ���ڰ� 4�� �̻��� ��� �ٽ� �̱�
        check = 0;
        for (i = 0; i < 6; i++)
            if (lotto[i] + 1 == lotto[i + 1])
                check++;

        if (check >= 4)
            continue;

        // �� ������ ���ڰ� 4�� �̻��� ��� �ٽ� �̱�
        temp = 0;
        for (i = 1; i <= 45; i += 10) {
            check = 0;
            for (j = 0; j < 6; j++)
                if (lotto[j] >= i && lotto[j] <= (i + 9))
                    check++;
            if (check >= 4) {
                temp = 1;
                break;
            }
        }

        if (temp == 1)
            continue;

        // ���� ¦���� ��� �ٽ� �̱�
        check = 0;
        for (i = 0; i < 6; i++)
            if (lotto[i] % 2 == 0)
                check++;
        
        if (check == 6)
            continue;

        // ���� Ȧ���� ��� �ٽ� �̱�
        check = 0;
        for (i = 0; i < 6; i++)
            if (lotto[i] % 2 == 1)
                check++;

        if (check == 6)
            continue;

        // 1�� �ڸ����� �ߺ��� ���ڰ� 3�� �̻��� ��� �ٽ� �̱�
        for (i = 0; i < 6; i++)
            chk[i] = lotto[i] % 10;

        temp = 0;
        for (i = 0; i <= 9; i++) {
            check = 0;
            for (j = 0; j < 6; j++)
                if (chk[j] == i)
                    check++;
            if (check >= 3) {
                temp = 1;
                break;
            }
        }

        if (temp == 1)
            continue;

        // ȭ�� ���
        printf("Lotto ���� ��ȣ ���� : ");
        for (i = 0; i < 6; i++)
            printf("%d ", lotto[i]);

        // ����� ����
        printf("\n\n�ٽ� �����Ͻðڽ��ϱ�?\n 1. ��  2. �ƴϿ� : ");
        scanf_s("%d", &reset);

        if (reset == 1) {
            printf("\n");
            continue;
        }
        else
            break;

    }  //  while���� ��

    printf("\nLotto ���� ��ȣ ������ ����.\n");

    return 0;

}