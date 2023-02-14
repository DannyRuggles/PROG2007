#include <stdio.h> 
#include <string.h>
//Author: Danny R
//Date: 2/10/2023
//Purpose: A menu system to read keywords and definitions


void clrscr() {
    //Clears screen using terminal commands
    system("cls");
}

//Data Types
void datatypeKeywords() {
    int keywordChoice;
    //Keywords list
    char *keywords[] = {
        "int",
        "float",
        "double",
        "char",
    };
    //Definitions linked with keywords
    char *definitions[] = {
        "\tSpecifies the integer type of value a variable will hold.",
        "\tSpecifies the character type of value a variable will hold.",
        "\tSpecifies the single-precision floating-point of value a variable will hold.",
        "\tSpecifies the double-precision floating-point type of value a variable will.",
    };
    //Displaying menu
    printf("\n--- Data Type Keywords ---\n");
    printf("1. int\n");
    printf("2. float\n");
    printf("3. double\n");
    printf("4. char\n");
    printf("\nChoose a keyword: ");
    scanf("%d", &keywordChoice);  //scan for user choice

    printf("\nDefinition of %s:\n%s\n", keywords[keywordChoice - 1], definitions[keywordChoice - 1]);
}                                          // ^ this populates the keyword and ^definition the user selected with a -1 to correct for the array that starts at 0

//Qualifiers - everything else within the function is the same as the function above so I won't repeat the comments in the other functions
void qualifierKeywords() {
    int keywordChoice;
    char *keywords[] = {
        "signed",
        "unsigned",
        "short",
        "long"
    };
    char *definitions[] = {
        "\tSpecifies a variable can hold positive and negative integer type of data.",
        "\tSpecifies a variable can hold only the positive integer type of data.",
        "\tSpecifies a variable can hold fairly small integer type of data.",
        "\tSpecifies a variable can hold fairly large integer type of data.",
    };

    printf("\n--- Qualifier Keywords ---\n");
    printf("1. signed\n");
    printf("2. unsigned\n");
    printf("3. short\n");
    printf("4. long\n");
    printf("\nChoose a keyword: ");
    scanf("%d", &keywordChoice);

    printf("\nDefinition of %s:\n%s\n", keywords[keywordChoice - 1], definitions[keywordChoice - 1]);
}

//Loops
void loopKeywords() {
    int keywordChoice;
    char *keywords[] = {
        "for",
        "while",
        "do",
    };

    char *definitions[] = {
        "\tLoop is used when the number of passes is known in advance.",
        "\tLoop is used when the number of passes is not known in advance.",
        "\tLoop is used to handle menu-driven programs.",
    };

    printf("\n--- Loop Control Structure Keywords ---\n");
    printf("1. for\n");
    printf("2. while\n");
    printf("3. do\n");
    printf("\nChoose a keyword: ");
    scanf("%d", &keywordChoice);

    printf("\nDefinition of %s:\n%s\n", keywords[keywordChoice - 1], definitions[keywordChoice - 1]);
}

//Jump control
void jumpingControlKeywords() {
    int keywordChoice;
    char *keywords[] = {
        "goto",
        "break",
        "continue",
    };
    char *definitions[] = {
        "\tUsed to take the control to required place in the program.",
        "\tUsed to force immediate termination of a loop, bypassing the conditional expression and any remaining code in the body of the loop.",
        "\tUsed to take the control to the beginning of the loop bypassing the statements inside the loop.",
    };

    printf("\n--- Jumping Control Keywords ---\n");
    printf("1. goto\n");
    printf("2. break\n");
    printf("3. continue\n");;
    printf("\nChoose a keyword: ");
    scanf("%d", &keywordChoice);

    printf("\nDefinition of %s:\n%s\n", keywords[keywordChoice - 1], definitions[keywordChoice - 1]);
}

int main() {
    int choice;

    do {

        printf("\n--- Main Menu ---\n");
        printf("\n1. Data type Keywords");
        printf("\n2. Qualifier Keywords");
        printf("\n3. Loop Control Structure Keywords");
        printf("\n4. Jumping Control Keywords\n");
        printf("5. Quit\n");
        printf("\nChoose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                datatypeKeywords();
                break;
            case 2:
                qualifierKeywords();
                break;
            case 3:
                loopKeywords();
                break;
            case 4:
                jumpingControlKeywords();
                break;
            case 5:
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        if (choice != 5) {  //this keeps the loop running as long as the user doesn't select option 5, which will end the program

            printf("\nPress enter to return to the main menu...");
            getchar();
            getchar();
            clrscr();    //this clears the screen before restarting the loop

        }
    } while (choice != 5);

    return 0;
}
