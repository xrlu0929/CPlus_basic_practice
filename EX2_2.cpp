//EX2_2.cpp -- convert furlong to yard

#include <iostream>
void toyard(double);

int main(){
    using namespace std;
    double furlong;
    cout << "Type your integer of length in furlong: " << endl;
    cin >> furlong;
    toyard(furlong);
    cout << endl;
}

void toyard(double n){
    std::cout << "It is " << n * 220 << " yard(s)." ;
}
