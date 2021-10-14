#include <stdio.h>

int main(void) {

    char sx;
    double cm, kg, gkg, m, bmi;

    printf("성별(M, F)과 키(cm), 몸무게(kg)를 입력하세요 : ");
    scanf_s("%c %lf %lf", &sx, sizeof(sx), &cm, &kg);

    switch (sx) {
    case 'M' :
    case 'm' :
        gkg = (cm - 100) * 0.9;
        m = cm / 100;
        bmi = kg / (m * m);
        printf("당신의 적정 체중은 %.3lf 입니다.\n", gkg);
        printf("당신의 키와 체중에서 BMI지수는 %.3lf 입니다.\n", bmi);
        break;
    case 'F':
    case 'f':
        gkg = (cm - 100) * 0.85;
        m = cm / 100;
        bmi = kg / (m * m);
        printf("당신의 적정 체중은 %.3lf 입니다.\n", gkg);
        printf("당신의 키와 체중에서 BMI지수는 %.3lf 입니다.\n", bmi);
        break;
    }

    return 0;

}