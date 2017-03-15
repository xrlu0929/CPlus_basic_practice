//
//  EX2_3.cpp -- 3 functions (1 main() and call other two twice) to display
//  Three blind mice
//  Three blind mice
//  See how they run
//  See how they run
//
//  Created by Xinrui Lu on 12/28/16.
//
//

#include "iostream"
void mice();
void run();

int main(){
    using namespace std;
    mice();
    mice();
    run();
    run();
    return 0;
}

void mice(){
    std::cout << "Three blind mice." << std::endl;
}

void run(){
    std::cout << "See how they run." << std::endl;
}
