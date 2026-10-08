#include <stdio.h>
int main() {
   int i;
   printf("請輸入一個年份：");
   scanf("%d", &i); // 讀取使用者輸入的數字
   if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
       printf("閏年\n");
   } else {
       printf("不是閏年\n");
   }
   return 0;
}
