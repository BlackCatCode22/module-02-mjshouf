#include <iostream>                      //included for std::cout and std::cin and std::end1 
#include <string>                        //include string library to build this function std::string
    
  int main() {                           //user input in a reversed string format
   
    std::cout << "Enter a word: ";       //ask user to input a single word
    std::string w{};	
    std::cin >> w;
    int n = w.length();                  //length of word for calculation
    
    for (int i = 0; i < n / 2; i++)      //characters are swapped to halfway of length
{
        std::swap(w[i], w[n - i - 1]);   //loop until length less than half of length
}

    std::cout << "Reversed string: " << w << std::endl;
    return 0;
}
