#include <stdio.h>
int main() {
   int i;
   printf("請輸入一個數字 i：");
   scanf("%d", &i); // 動態讀取使用者輸入的數字
   // 必須大於 0 且透過位元運算判斷是否為 2 的次方
   if (i > 0 && (i & (i - 1)) == 0) {
       printf("是\n"); // 或印出 true，視題目要求而定，這裡對應題目「當 i=2, 4, 8, 16, 32.... 時請輸出是」
   } else {
       printf("否\n"); // 其他請輸出否
   }
   return 0;
}
