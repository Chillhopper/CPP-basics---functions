#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//functions
int inputNum(){
    int sampleNum;
    std::cout << "Enter a random number" << std::endl;
    std::cin >> sampleNum;
    return sampleNum;
}

int main(){
    int num1{ inputNum() };
    int num2{ inputNum() };

    std::cout << "The product of both random numbers is:" << '\n' << num1*num2 << std::endl;

}


