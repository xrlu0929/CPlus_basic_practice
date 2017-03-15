//ourFunc.cpp -- define your own function
#include <iostream>
void anna(int);

int main()
{
    using namespace std;
    anna(3); //call the simon function
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count); // call it again
    cout << "Done!";
    cout << endl;
    return 0;
}

void anna(int n) //define the simon() function
{
    using namespace std;
    cout << "Anna will read this book " << n << " times.";
    cout << endl;
}
//revised from book <C++ primer plus>
