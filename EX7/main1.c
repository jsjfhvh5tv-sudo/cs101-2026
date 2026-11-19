#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
    int n = 0;
    printf("歡迎光臨長庚樂透彩購買機台\n");
    printf("請問您要買幾組樂透彩: ");
    scanf("%d", &n);
 
    if (n < 1 || n > 5) {
        printf("請輸入 1 到 5 之間的組數。\n");
        return 1;
    }
 
    srand((unsigned int)time(NULL));
    time_t now = time(NULL);
    char *time_str = ctime(&now);
 
    FILE *fp = fopen("lotto.txt", "w");
    if (fp == NULL) {
        printf("無法開啟 lotto.txt\n");
        return 1;
    }
 
    fprintf(fp, "lotto649\n");
    fprintf(fp, "= %s", time_str);
 
    for (int set = 1; set <= 5; set++) {
        fprintf(fp, "[%d]: ", set);
        if (set <= n) {
            int nums[7];
            int used[70] = {0};
            for (int i = 0; i < 7; i++) {
                int r;
                do {
                    r = rand() % 69 + 1;
                } while (used[r]);
                used[r] = 1;
                nums[i] = r;
                fprintf(fp, "%02d ", nums[i]);
            }
        } else {
            for (int i = 0; i < 7; i++) {
                fprintf(fp, "-- ");
            }
        }
        fprintf(fp, "\n");
    }
 
    fprintf(fp, "csie@CGU\n");
    fclose(fp);
 
    printf("以為您購買的%d組樂透組合輸出至 lotto.txt\n", n);
    return 0;
}
