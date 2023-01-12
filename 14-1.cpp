#include <iostream>
using namespace std;

class Myclass {        // The class
    public:            // Access specifier
    int myNum;         // Attrioute (int variable)
    string myString;   // Attrioute (string variable)
};

int main() {
    Myclass myObj;    // Create an object of MyClass
    
    // Access attrioutes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";
    
    // Print values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
}
