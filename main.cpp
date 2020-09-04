#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int getRandom(int low, int high);

int main()
{ // The program will guess what number you are thinking of
    srand(time(NULL));
    cout << "Think of a number between 1 and 100; then I will guess what number you are thinking" << endl;
    int low, high;

    int guess = getRandom (low =1, high = 100);
    for (int i = 1; i < 101; i++)
    {

    char ans1 ;
    cout << "Is " << guess << " correct ?" << endl;
    cin >> ans1;

        if (ans1 == 'y')
        { // if the program guess the number right
            cout << "Your number is " << guess << "." << endl;
            break;
        }
        else if (ans1 == 'n')
        { // if the program guess it wrong
          // giving it a hint about the number whether higher or lower

                cout << "Is it higher (h) or lower (l)?" << endl;
                char ans2;
                cin >> ans2;

                if (ans2 == 'h')
                {

                    guess = getRandom(low = guess, high);

                }
                else if (ans2 == 'l')
                {
                    guess = getRandom (low, high = guess);

                }
                else
                {
                    cout << "Invalid answer. The answer should be lower or higher." << endl;
                }
            }
        }

        return 0;
    }

    int getRandom(int low, int high)
    { // the function to get a random number
        int num;
        if (low == 0)
            num = (rand() % high);
        else if (low == 1)
            num = (rand() % high) + 1;
        else
            num = low + (rand() % (high - low + 1));
        return num;
    }


