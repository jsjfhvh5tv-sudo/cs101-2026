#include <stdio.h>
int main() {
   int i;
   printf("請輸入一個數字 i：");
   scanf("%d", &i); // 動態讀取使用者輸入的數字
   if (i % 15 == 0) {
       printf("Love IU\n");
   }
   else if (i % 3 == 0) {
       printf("Love\n");
   }
   else if (i % 5 == 0) {
       printf("IU\n");
   }
   else {
       printf("%d\n", i);
   }
   return 0;
}
