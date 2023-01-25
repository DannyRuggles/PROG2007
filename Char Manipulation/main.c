/*
Author: Danny Ruggle
Title: Char Manipulation in C
Date: 1/25/2023
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c;
    char u;
    char l;

    do
    {
        c=getchar();
        switch(c)
        {
        case 'a' ... 'z':
            printf("\nIt is a letter: %c\n", c);
            l = tolower(c);
            u = toupper(c);
            printf("%c %c \n", u, l);
            printf("ASCII: %3.3d\n\n",c);
            break;
        case 'A' ... 'Z':
            printf("\nIt is a letter: %c\n", c);
            l = tolower(c);
            u = toupper(c);
            printf("%c %c \n", u, l);
            printf("ASCII: %3.3d\n\n",c);
            break;

        case '0' ... '9':
            printf("It is a digit:\n");
            putchar(c);
            putchar('\n');
            printf("ASCII: %3.3d\n\n",c);
            break;

        case '\n':
            break;

        default:
            printf("It is not a letter or digit:%c\n", c);
            printf("ASCII: %3.3d\n\n",c);
        }
    }
    while ( c != '\n');

    return (0);
}


/* #<--Remove this to run IF structure
int alChecker(c, l, u) {
    again:
    if(isalpha(c))
    {
        printf("It is a letter:\n");
        l=tolower(c);
        u=toupper(c);
        printf("\n%c %c ", u, l);
        printf("\nASCII: %3.3d\n",c);
    }
    else if(isdigit(c))
    {
        printf("It is a digit:\n");
        putchar(c);
        putchar('\n');
        printf("ASCII: %3.3d\n\n",c);

    }
    else
    {
        printf("Unrecognized. Use letters or numbers only.\n\n");
    }
}


int main()
{
    char c;
    char u;
    char l;

    start:

    do
    {
        c = getchar();
        alChecker(c);
        /*if(isalpha(c))
        {
            printf("It is a letter:\n");
            l = tolower(c);
            strcat(l, '\n');
            //putchar('\n');
            u = toupper(c);
            putchar(u);
            putchar('\n');
            printf("ASCII: %3.3d\n\n",c);
        }
        else if (isdigit(c))
        {
            printf("It is a digit:\n");
            putchar(c);
            putchar('\n');
            printf("ASCII: %3.3d\n\n",c);
        }
        else
        {
            printf("Unrecognized. Use letters or numbers only.");
            goto ;
        }*/                          /*
    } while ( c != '\n');

    goto start;

    return (0);
}

*/

