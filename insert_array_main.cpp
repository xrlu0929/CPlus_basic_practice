//
//  main.cpp
//  EX7_2 enter 10 golf scores and store them into an array
//  after 10 times, return the score in a line, and return their mean
//
//  Created by Xinrui Lu on 2/27/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
#include <array>
using namespace std;

void display(array<double, 10> array);
double mean(array<double, 10> array);

int main() {
    array<double, 10> score;
    for (int temp = 0; temp <10; temp ++){
        cout << "Enter golf score #" << temp+1 << ": ";
        cin >> score[temp];
    }
    
    display(score);
    cout << mean(score);
    cout << endl;
    return 0;
}

void display(array<double, 10> array){
    cout << "All golf scores are: "<< endl;
    double score;
    for(int temp = 0; temp < 10; temp ++){
        score = array[temp];
        cout << score << " ";
    }
    cout<< endl;
}

double mean(array<double, 10> array){
    cout << "Scores mean is: "<< endl;
    double sum = 0;
    for(int temp = 0; temp < 10; temp ++){
        sum += array[temp];
    }
    double mean = sum / 10;
    return mean;
}
