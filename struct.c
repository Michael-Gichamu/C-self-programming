#include <stdio.h>
#include <stdlib.h>

/**
 * Book - contains attributes of a given book.
 *
 *Return: Always(0) Success.
 */

struct Book{
    int no_of_pages;
    char owner[100];
    char size[100];
};

int main()
{
        struct Book book1;
        book1.no_of_pages = 100;
        strcpy(book1.owner,   "Michael Matere");
        strcpy(book1.size, "A4");
        
        printf("%s\n", book1.owner);
        printf("%s\n", book1.size);
        printf("%d\n", book1.no_of_pages);

        return (0);
}