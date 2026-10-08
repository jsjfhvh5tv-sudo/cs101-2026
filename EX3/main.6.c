#include <stdio.h>
int main() {
   int i;
   // 提示使用者輸入停車時間
   printf("請輸入停車時間 (分鐘): ");
   scanf("%d", &i);
   if (i <= 30) {
       printf("免費\n");
   }
   else if (i >= 240) {
       printf("240元\n");
   }
   else {
       if (i % 30) {
           int h = ((i / 30) + 1) * 30;
           printf("%d 元\n", h);
       }
       else {
           printf("%d 元\n", i);
       }
   }
   return 0;
}
