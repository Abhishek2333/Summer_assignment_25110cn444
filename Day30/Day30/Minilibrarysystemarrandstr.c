#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    char book[50][100];
    char author[50][100];

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar(); 
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book Name: ");
        fgets(book[i], sizeof(book[i]), stdin);
        book[i][strcspn(book[i], "\n")] = '\0';

        printf("Enter Author Name: ");
        fgets(author[i], sizeof(author[i]), stdin);
        author[i][strcspn(author[i], "\n")] = '\0';
    }

    
    printf("\n===== LIBRARY RECORDS =====\n");
    printf("%-5s %-30s %-30s\n", "No.", "Book Name", "Author");

    for(i = 0; i < n; i++)
    {
        printf("%-5d %-30s %-30s\n", i + 1, book[i], author[i]);
    }

    return 0;
}
