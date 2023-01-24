#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>

/*
Author: Danny Ruggles w0401169
Date: 1/24/2023
*/


/*char *toLower(char *str, size_t len)
{
    char *str_l = calloc(len+1, sizeof(char));

    for (size_t i = 0; i < len; ++i)
    {
        str_l[i] = tolower((unsigned char)str[i]);
    }
    return str_l;
}
*/

int main()
{
    /*declaration and initialization of the variables.
     *Initialize n and count equal to zero.
     *Initialize playAgain to y or Y
     */
    int n=0, ran, count;
    char playAgain='y';


    //create the random seed with time to get random number
    srand(time(NULL));

    //while loop until playAgain not equal n
    while(playAgain!='n' && playAgain!='N')
    {

        //if playAgain equal to y
        if(playAgain=='y' || playAgain=='Y')
        {
            count=0;

            //generates rand number within a range. min=0 max=10
            ran=rand()%(10);

            //loop til n is not = to rand
            while(n!=ran)
            {

                //prompt user to guess int
                printf("Guess the number : ");
                scanf("%d",&n);
                count+=1;
                if (count==3)
                {
                    printf("You failed.");
                    break;
                }


                //rand is = to the guess, print "Nailed it bud"
                if(n==ran)
                {
                    printf("You nailed it bud.\n");

                    //Display
                    printf("Congrats! Lets Party!");
                }

                //guess is higher than rand, print "The guess was above"
                else if (n>ran)
                {
                    printf("You guessed to high\n");
                    printf("\nGuess Count(3 Max):%d\n", count);
                }

                //guess is less than rand, prints "The guess was too low"
                else     /*(n<ran)*/
                {
                    printf("You guessed too low\n");
                    printf("\nGuess Count(3 Max):%d\n", count);
                }

            }

        } // end of if block


        printf("\nWould you like to play again (y or n)? ");
        scanf("\n%c",&playAgain);
        printf("\n");

    }

    return 0;
}

