#include <iostream>
#include <string>
#include <functional>

int falseFirstTimeChecker = 0;
int number;
const int constValue;
long long reversed = 0;
//Function to be called in main function if the number is negativeù
void userInput()
{
    {
        std::cout<<"Enter the number you want to check if it's a palyndrome:\n";
        std::cin>>number;
        constValue = number;
    }
}    

void ifFalse()
{
        std::cout<<"The number is not a palyndrome, as it's a negative number.\n";
}

int main()
//Declareing a temporary variable with the value of x, and a value where the x Reversed value it's gonna be
{
    userInput();
    //Calling ifFalse function if the number is negative
    if(number < 0)
    {
        ifFalse();
    }
    //If it's not negative, using a simple algorithm to calculate if it's palyndrome or not, if x is equal to x Reversed, calling the isTrue function
    while(number != 0)
    {
        reversed = reversed * 10;
        reversed = reversed + number % 10;
        number = number / 10;
    }
    if(constValue == reversed)
    {
        std::cout<<"The number is a palyndrome, as it's equal to it's original value after being reversed and it's not negative.";
    }
    if(constValue != reversed)
    {
        std::cout<<"The number is not a palyndrome, as it's not equal to it's original value after being reversed.\n";
    }
    return 0;
}
