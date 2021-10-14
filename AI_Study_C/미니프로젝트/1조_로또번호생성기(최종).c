#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 다시뽑기 기준

1. 연속된 숫자가 4개 이상인 경우
2. 각 구간별 (1 ~ 10, 11 ~ 20, ... , 41 ~ 45) 숫자가 4개 이상인 경우
3. 전부 짝수이거나 전부 홀수인 경우
4. 1의 자릿수가 중복인 숫자가 3개 이상인 경우

*/

int main(void) {

    int lotto[6] = { 0, };      // 로또 번호 저장용
    int chk[6] = { 0, };        // 1의 자릿수 중복 체크용
    int i, j, temp, check, reset;

    srand(time(NULL));

    while (1) {
        
        for (i = 0; i < 6; i++) {
            
            // 랜덤난수 생성 및 저장
            lotto[i] = rand() % 45 + 1;

            // 중복값 체크 후 해당 배열의 값 재생성
            for (j = 0; j < i; j++) {
                if (lotto[i] == lotto[j]) {
                    i--;
                    break;
                }
            }

        }

        // 오름차순 정렬
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 5; j++)
                if (lotto[j] > lotto[j + 1]) {
                    temp = lotto[j];
                    lotto[j] = lotto[j + 1];
                    lotto[j + 1] = temp;
                }
        }

        // 연속된 숫자가 4개 이상일 경우 다시 뽑기
        check = 0;
        for (i = 0; i < 6; i++)
            if (lotto[i] + 1 == lotto[i + 1])
                check++;

        if (check >= 4)
            continue;

        // 각 구간별 숫자가 4개 이상일 경우 다시 뽑기
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

        // 전부 짝수일 경우 다시 뽑기
        check = 0;
        for (i = 0; i < 6; i++)
            if (lotto[i] % 2 == 0)
                check++;
        
        if (check == 6)
            continue;

        // 전부 홀수일 경우 다시 뽑기
        check = 0;
        for (i = 0; i < 6; i++)
            if (lotto[i] % 2 == 1)
                check++;

        if (check == 6)
            continue;

        // 1의 자릿수가 중복인 숫자가 3개 이상인 경우 다시 뽑기
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

        // 화면 출력
        printf("Lotto 복권 번호 생성 : ");
        for (i = 0; i < 6; i++)
            printf("%d ", lotto[i]);

        // 재실행 여부
        printf("\n\n다시 생성하시겠습니까?\n 1. 예  2. 아니오 : ");
        scanf_s("%d", &reset);

        if (reset == 1) {
            printf("\n");
            continue;
        }
        else
            break;

    }  //  while문의 끝

    printf("\nLotto 복권 번호 생성기 종료.\n");

    return 0;

}