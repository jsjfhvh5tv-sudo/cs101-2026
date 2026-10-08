#include <stdio.h>
int main() {
   int i;
   printf("請輸入一個數字 i：");
   scanf("%d", &i); // 動態讀取使用者輸入的數字
   // 判斷奇偶數（亦可使用右側的位元運算 i & 1）
   if (i % 2 != 0) {
       printf("奇數\n");
   } else {
       printf("偶數\n");
   }
   return 0;
}
