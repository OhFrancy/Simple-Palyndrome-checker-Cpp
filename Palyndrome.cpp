#include <iostream>
#include <string>
#include <functional>

long long number, reversed, constValue;
//Function called in the main function to get the value of the number
void userInput()
{
    {
        std::cout<<"Enter the number you want to check if it's a palyndrome:\n";
        std::cin>>number;
        constValue = number;
    }
}    
int main()
{
    //Calling userInput to get the value of the number we want to check first
    userInput();
    if(number < 0)
    {
        std::cout<<"The number is not a palyndrome, as it's a negative number.\n";
    }else
    {
        // Simple maths to reverse the number without converting it to string
        while(number != 0)
        {
            reversed = reversed * 10;
            reversed = reversed + number % 10;
            number = number / 10;
        }
        //Simple conditions to check if it's a palyndrome or not
        if(constValue == reversed)
        {
            //Outputting that the number is palyndrome if it is equal to the original value after being reversed
            std::cout<<"The number is a palyndrome, as it's equal to it's original value after being reversed and it's not negative.";
        }else
        {
            //Outputting that the number is not a palyndrome if it is not equal to the original value after being reversed
            std::cout<<"The number is not a palyndrome, as it's not equal to it's original value after being reversed.\n";
        }    
    }
    return 0;
}
