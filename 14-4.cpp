#include <iostream>
#include <string>
using namespace std;

class Myclass { 
    public:
    int m;
    float cm;
    void input(int x){
        m = x/100;
        cm = x%100 ;
    };
};

int main() {
    int a;
    Myclass myObj;
    
    cin >> a;
    myObj.input(a);
    
    cout << myObj.m << "m" << "\n";
    cout << myObj.cm << "cm";
    return 0;
}
