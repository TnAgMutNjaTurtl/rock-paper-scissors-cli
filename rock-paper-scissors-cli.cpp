#include <iostream>
#include <string.h>
//#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;



char parseUserThrow(char userInput)

{
    // switch (userInput)
    // {
    //     case 'R':
    //         return 'r';
    //     case 'P':
    //         return 'p';
    //     case 'S':
    //         return 's';
    //     case 'r':
    //         return 'r';
    //     case 'p':
    //         return 'p';
    //     case 's':
    //         return 's';
    // }
    return tolower(userInput);

}




char getComputerThrow()

{
    int num;
    srand(time(0));
    num = rand() % 3 + 1;
    if (num == 1)
    {
        return 'r';
    }

    if (num == 2)
    {
        return 'p';
    }

    if (num == 3)
    {
        return 's';
    }

}




int compareThrows(char userThrow, char computerThrow)

{
    if(userThrow == 'r')
    {
        if(computerThrow == 'r')
        {
            cout << "You tied!" << endl;
            return 0;
        }
        if(computerThrow == 's')
        {
            cout << "You win!" << endl;
            return 1;
        }
        if(computerThrow == 'p')
        {
            cout << "You lose!" << endl;
            return -1;
        }
    }
    if(userThrow == 'p')
    {
        if(computerThrow == 'p')
        {
            cout << "You tied!" << endl;
            return 0;
        }
        if(computerThrow == 'r')
        {
            cout << "You win!" << endl;
            return 1;
        }
        if(computerThrow == 's')
        {
            cout << "You lose!" << endl;
            return -1;
        }
    }
    if(userThrow == 's')
    {
        if(computerThrow == 's')
        {
            cout << "You tied!" << endl;
            return 0;
        }
        if(computerThrow == 'p')
        {
            cout << "You win!" << endl;
            return 1;
        }
        if(computerThrow == 'r')
        {
            cout << "You lose!" << endl;
            return -1;
        }
    }
    

}




int main(int argc, char ** argv)

{
    // this is to check if no argmnts were given from the command line
    if (argc <= 1)
    {
        cout << "You need to throw R for rock, P for paper, or S for scissors." << endl;
    }
    // this is to check if more than one argmnts were given from the command line
    else if (argc > 2) 
    {
        cout << "You only need to give me R, P, or S." << endl;
    }
    // this is if only onle argmnt was given from the command line
    else 
    {
        char userInput = argv[1][0];
        char userThrow = parseUserThrow(userInput);

        // this is to only except roshambo inputs
        if (strlen(argv[1]) == 1 && (userThrow == 'r' || userThrow == 'p' || userThrow == 's')) 
        {

            char computerThrow = getComputerThrow();

            int result = compareThrows(userThrow, computerThrow);

            return result;

        }
        // this is if you give anything else from the command line that is only one argmnt but not r, p, s
        else 
        {
            cout << "You only need to give me R, P, or S." << endl;
        }
    }

    // if (strlen(argv[1]) > 1)
    // {
    //     cout << "You only need to give me R, P, or S." << endl;
    // }

    // if (isdigit(argv[1][0]))
    // {
    //     cout << "You only need to give me R, P, or S." << endl;
    // }

    // if (argv[1] != rock)
    // {
    //     if (argv[1] != paper)
    //     {
    //         if (argv[1] != scissors)
    //         {
    //             cout << "You only need to give me R, P, or S." << endl;
    //         }
    //     }
    // }


    

    // cout << result << endl;

    // cout << getComputerThrow(computer) << endl;
    // cout << userThrow << endl;

}