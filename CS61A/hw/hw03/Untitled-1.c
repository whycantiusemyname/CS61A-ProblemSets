#include <stdio.h>

int main() {
    int n, i;
    // 用来存输入的数字
    int num[1000];
    int sum = 0;
    int max, min;
    int count_over_90 = 0;
    double avg;

    // 1. 输入个数
    scanf("%d", &n);

    // 2. 输入 n 个整数
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    // 3. 初始化最大、最小值为第一个数
    max = num[0];
    min = num[0];

    // 4. 遍历所有数，计算总和、最大、最小、超过90的个数
    for (i = 0; i < n; i++) {
        // 总和
        sum += num[i];

        // 最大值
        if (num[i] > max) {
            max = num[i];
        }

        // 最小值
        if (num[i] < min) {
            min = num[i];
        }

        // 超过90的个数
        if (num[i] > 90) {
            count_over_90++;
        }
    }

    // 5. 计算平均值
    avg = (double)sum / n;

    // 6. 输出结果
    printf("总和：%d\n", sum);
    printf("平均值：%.2f\n", avg);
    printf("最大值：%d\n", max);
    printf("最小值：%d\n", min);
    printf("超过90的数字个数：%d\n", count_over_90);

    return 0;
}