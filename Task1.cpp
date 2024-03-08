#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int lowervalue = 0, uppervalue = 100, r, input;
    srand((unsigned) time(NULL));
    r = lowervalue + rand() % (uppervalue - lowervalue + 1);
    cout << " Number Guessing Game!" << endl;
    do
    {
        cout << "Guess the number between " << lowervalue << " and " << uppervalue << ": ";
        cin >> input;
        if (input > r)
        {
            cout << "Too high! Try a number between " << lowervalue << " and " << input << "." << endl;
            uppervalue = input;
        }
        else if (input < r)
        {
            cout << "Too low! Try a number between " << input << " and " << uppervalue << "." << endl;
            lowervalue = input;
        }
         else
         {
            cout << "Congratulations! You guessed the correct number: " << r << endl;
         }
    } while (input != r);
    return 0;
}
