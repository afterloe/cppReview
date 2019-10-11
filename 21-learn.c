#include <stdio.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books *);

int main() {

    struct Books book;
    struct Books book1;

    strcpy(book.title, "Clang练习");
    strcpy(book.author, "605728727@qq.com");
    strcpy(book.subject, "代码练习");
    book.book_id = 12;
 
    strcpy(book1.title, "C++ Demo");
    strcpy(book1.author, "lm6289511@gmail.com");
    strcpy(book1.subject, "练习项目");
    book1.book_id = 13;

    printBook(&book);
    printBook(&book1);

    return 0;
}

void printBook(struct Books* book) {
    printf("title: %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book->title, 
            book->author, book->subject, book->book_id);
} 
