#include <stdio.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {

    struct Books book = {"Clang 练习", "Afterloe", "练习代码", 100001};
    printf("title: %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);

    return 0;
}
