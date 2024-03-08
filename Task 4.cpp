#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main()
 {
    string filename;
    cout << "Enter the name of the file to count how many words in that file :  ";
    getline(cin, filename);
    ifstream file(filename);
    if (!file.is_open())
    {
        cout << "Error opening file. Please check if the file exists.If not file exists create new file.\n";
        return 1;
    }
    string word;
    int Count = 0;
    while (file >> word)
     {
        Count++;
     }
    cout << "Total number of words in the file: " <<Count << endl;
    file.close();
    return 0;
}
