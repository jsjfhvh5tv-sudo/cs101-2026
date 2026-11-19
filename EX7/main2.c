#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct Books {
    int id;
    int price;
    char title[128];
} book_t;
 
void total_price(book_t books[], int count, int *total) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += books[i].price;
    }
    if (total != NULL) {
        *total = sum;
    }
}
 
void list_books(book_t books[], int count) {
    for (int i = 0; i < count; i++) {
        printf("[%d] ID: %d | Price: %d | Title: %s\n",
               i + 1, books[i].id, books[i].price, books[i].title);
    }
}
 
int main() {
    book_t books[6] = {
        {1, 1000, "All the Light We Cannot See"},
        {2, 300,  "The 38 Letters from J.D. Rockefeller to his son"},
        {3, 1000, "The Ballad of Songbirds and Snakes"},
        {4, 550,  "Killers of the Flower Moon"},
        {5, 870,  "Elon Musk"},
        {6, 1344, "Milk and Honey 12-Month 2024"}
    };
 
    FILE *fp = fopen("Book.bin", "wb");
    if (fp == NULL) {
        printf("無法建立 Book.bin\n");
        return 1;
    }
    fwrite(books, sizeof(book_t), 6, fp);
    fclose(fp);
 
    list_books(books, 6);
 
    int total = 0;
    total_price(books, 6, &total);
    printf("Total price: %d\n", total);
 
    return 0;
}
