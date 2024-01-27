#include <iostream>
#include <string>

using namespace std;                 //although code ran, the "problems" list grew
                                     //so added "namespace std" to clean that up
int main() {
    cout << "Enter a word: ";        // ask user to input a single word
    string w{};	
    cin >> w;
    int n = w.length();              //length of word for calculation
    
    for (int i = 0; i < n / 2; i++)  //characters are swapped to halfway of length
{
        swap(w[i], w[n - i - 1]);    //loop until length less than half of original length
    }

    cout << "Reversed string: " << w << endl;
    return 0;
}
