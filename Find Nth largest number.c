#include <stdio.h>

void Nth(int* param, int len) {
    int i, j = 0;
    for (i = 0; i < len; i++) {
        int count = 0;
        for (j = 0; j < len; j++) {
            if (param[i] > param[j]) {
                count++;
            }
        }
        if (count == 3) { // 수정: 등호를 비교 연산자로 변경
            printf("%d ", param[i]); // 수정: 정수값을 출력하기 위해 %d를 사용하고, 값 뒤에 공백 추가
        }
    }
}

int main(void) {
    int a[10] = {0}; // initialization
    int size = sizeof(a) / sizeof(a[0]);
    printf("size is %d\n", size); // 수정: printf 문에 개행문자 추가
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    Nth(a, size);

    return 0;
}
