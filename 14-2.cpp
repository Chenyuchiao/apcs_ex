#include <iostream>
#include <string>
using namespace std;

class Myclass { 
    public:
    int m;
    float cm;
};

int main() {
    int a;
    Myclass myObj;
    
    cin >> a;
    myObj.cm= a/100;
    myObj.m = a%100 ;
    
    
    cout << myObj.cm << "m" << "\n";
    cout << myObj.m << "cm";
    return 0;
}
