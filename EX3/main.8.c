#include <stdio.h>
int main() {
   int i;
   printf("請輸入圓形的直徑 i：");
   scanf("%d", &i); // 讀取使用者輸入的直徑
   // 計算圓周長（直徑 * 圓周率），並設定輸出格式只到小數點第五位
   printf("%.5f\n", i * 3.1415926535);
   return 0;
}
