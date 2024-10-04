#include <stdio.h>

int main() {
    int maxCount;

    // カウント上限を入力
    printf("いくつまで数えますか？: ");
    scanf("%d", &maxCount);

    // ループで処理
    for (int i = 1; i <= maxCount; i++) {
        if (i % 15 == 0) {
            printf("Fizz Buzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}
