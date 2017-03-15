//
//  main.cpp
//  EX7_1 enter pairs of numbers until at least one of the pair is 0.
//  return each pair's harmonic mean of the numbers (harmonic mean = 2.0 *x *y/(x+y)
//
//  Created by Xinrui Lu on 2/27/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>

#include <iostream>

float harmonicMean(int a, int b);   //prototype harmonicMean

int main()
{
    int a;
    int b;
    
    std::cout << "Enter two numbers:\n";
    while (std::cin >> a >> b)
    {
        if (a != 0 || b != 0)   //if a or b != 0
            std::cout << "Harmonic Mean: " << harmonicMean(a,b) << std::endl;
        else
            break;
    }
}

float harmonicMean(int a, int b)
{
    return 2.0*a*b / (a+b); //find harmonic mean of a & b
}
