#include <stdio.h> 
#include <string.h>

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
        "void"
    };
    //Definitions linked with keywords
    char *definitions[] = {
        "The int data type is used to store integer values (whole numbers) in the range of -32,768 to 32,767.",
        "The float data type is used to store floating-point values (numbers with decimal points) with a single precision.",
        "The double data type is used to store floating-point values with double precision.",
        "The char data type is used to store a single character. It can store a single ASCII character in the range of 0 to 127.",
        "The void data type is used to indicate that a function does not return a value."
    };
    //Displaying menu
    printf("\n--- Data Type Keywords ---\n");
    printf("1. int\n");
    printf("2. float\n");
    printf("3. double\n");
    printf("4. char\n");
    printf("5. void\n");
    printf("\nChoose a keyword: ");
    scanf("%d", &keywordChoice);  //scan for user choice

    printf("\nDefinition of %s:\n%s\n", keywords[keywordChoice - 1], definitions[keywordChoice - 1]);
}                                          // ^ this populates the keyword and ^definition the user selected

//Qualifiers - everything else within the function is the same as the function above so I won't repeat the comments in the other functions
void qualifierKeywords() {
    int keywordChoice;
    char *keywords[] = {
        "const",
        "volatile",
        "register"
    };
    char *definitions[] = {
        "The const keyword is used to declare a constant value, which cannot be modified once assigned.",
        "The volatile keyword is used to indicate that a variable may change at any time, even if the program does not change it.",
        "The register keyword is used to declare a variable that should be stored in a register instead of memory."
    };

    printf("\n--- Qualifier Keywords ---\n");
    printf("1. const\n");
    printf("2. volatile\n");
    printf("3. register\n");
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
        "do-while",
        "continue",
        "break"
    };

    char *definitions[] = {
        "The for loop is a control structure that executes a set of instructions a specified number of times. It uses a counter variable, an end condition, and an increment or decrement statement.",
        "The while loop is a control structure that repeatedly executes a set of instructions while a specified condition is true. It tests the condition before executing the loop.",
        "The do-while loop is similar to the while loop, but it tests the condition after executing the loop. This means that the loop will always be executed at least once.",
        "The continue statement skips the current iteration of a loop and continues with the next iteration.",
        "The break statement is used to exit a loop early, before the specified end condition is met."
    };

    printf("\n--- Loop Control Structure Keywords ---\n");
    printf("1. for\n");
    printf("2. while\n");
    printf("3. do-while\n");
    printf("4. continue\n");
    printf("5. break\n");
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
        "return"
    };
    char *definitions[] = {
        "The goto keyword is used to transfer control to a labeled statement, anywhere within the same function.",
        "The break keyword is used to exit a loop or switch statement, transferring control to the next statement following the loop or switch.",
        "The continue keyword is used to skip the current iteration of a loop, and continue with the next iteration.",
        "The return keyword is used to return control and an optional value from a function to its caller."
    };

    printf("\n--- Jumping Control Keywords ---\n");
    printf("1. goto\n");
    printf("2. break\n");
    printf("3. continue\n");
    printf("4. return\n");
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
