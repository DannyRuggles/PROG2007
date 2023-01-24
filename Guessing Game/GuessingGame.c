#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    /*Declaration and initialization of the variables.
     *      Initialize n and count equal to zero.
     *      Initialize playAgain to y or Y
     */
    int n=0, ran, count=0;
    char playAgain='y';

    //Initialize the random seed with time(NULL) to get random number each time
    srand(time(NULL));

    //while loop : loops until playAgain not equal n or N
    while(playAgain!='n' && playAgain!='N')
    {

        //if playAgain equal to y or Y
        if(playAgain=='y' || playAgain=='Y')
        {

            //rand()%(max-min+1)+min generates the random number within a range. Here, min=1 and max=1000
            ran=rand()%(1000)+1;

            //loop til n is not equal to random number
            while(n!=ran)
            {

                //user to guess a number
                printf("Guess the number : ");
                scanf("%d",&n);

                //If the random number is equal to the number guessed, then print "Zero in"
                if(n==ran)
                {
                    printf("Zero in\n");

                    //Display "You guessed the number"
                    printf("Excellent! You guessed the number!");
                }

                //If the number guessed is greater than the random number, then print "The guess was too high"
                else if(n>ran)
                    printf("The guess was too high\n");

                //If the number guessed is lesser than the random number, then print "The guess was too low"
                else
                    printf("The guess was too low\n");

            } // end of while loop : entered number not equal to random number

        } // end of if block

        //Ask whether the user would like to play again
        printf("\nWould you like to play again (y or n)? ");
        scanf("\n%c",&playAgain);
        printf("\n");

    }       // end of while loop : playAgain not equal n or N

    return 0;
}

