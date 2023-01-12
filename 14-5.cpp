#include <iostream>
#include <string>
using namespace std;

class CM { 
    public:
    int m;
    float cm;
    void input(int x){
        m = x/100;
        cm = x%100;
    };
};

class MM: public CM {
  public:
   int mm;
    void input(int x){
        m = x/1000;
        cm = x/10-100*m;
        mm = x%10;
    };
};

int main() {
    int a, mm;
    MM mm1;
    cin >> a;
    
    mm1.input(a);
    cout << mm1.m << "m" << "\n";
    cout << mm1.cm << "cm" << "\n";
    cout << mm1.mm << "mm";
    return 0;
}
