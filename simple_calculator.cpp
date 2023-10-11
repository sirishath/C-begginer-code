//  Calculator(simple).cpp
//  Created by Sirisha  on 11/10/2023.
// This is the simple way to make calculator
// This program will make u familiar with the arithmetic operations
// remember this is a simple program and  hence we will only use two numbers and perform arthimetic operations
// note c++ ignores minor white space
// we will assume that user will always input numbers as integer
// lets Stat

#include <iostream>
using namespace std; // using this to avoid use of std everytime while writing code


int main(){ // our program starts here
    
    // declaration
    int number1, number2; // takes two number
    int sum, sub, divide, remainder, mul; // using this for operators
    string operation; // user input for sign also remember this is a string
    
    // user input
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "what operation you would like to perform (only use +,-,*,/ or % )? ";
    cin >> operation; // this will input operation here i.e remeber this is a string
   
    // the working process of code based upon user input
    if (operation == "+"){ // is user inputs + this code will run
            sum = number1 + number2; // returns sum of number
            cout << "Your sum is " << sum << endl;
            return 0; // shows the code is executed correctly
        }
   // for substraction
    else if (operation == "-"){ // only works if the input is -
            string subNum;
            cout << "what you would like to substract from (number 1 or number 2)? "; // make sure to ask from user what they would like to do
            cin >> subNum;
            if (subNum == "number 1"){
                sub = number2 - number1;
                cout <<"Your substracted number is " << sub << endl;
                return 0;
            }
            else {
                sub = number1 - number2;
                cout << sub << endl;
                return 0;
            }
            
            
        }
    // for divide
        
    else if (operation == "/"){ // only works if the input is -
            string subNum;
            cout << "What you would like to divide from (number 1 or number 2)? "; // make sure to ask from user what they would like to do
            cin >> subNum;
            if (subNum == "number 1"){
                divide = number2 / number1;
                cout <<"Your quotient is " << divide << endl;
                return 0;
            }
            else {
                divide = number1 / number2;
                cout <<"Your quotient is " << divide << endl; // note: using / will give u quotient
                return 0;
            }
        }
    // for remainder
    else if (operation == "%"){ // only works if the input is %
            string subNum;
            cout << "What you would like to divide from (number 1 or number 2)? "; // make sure to ask from user what they would like to do
            cin >> subNum;
            if (subNum == "number 1"){
                remainder = number2 % number1; // note : using % will give u remainder
                cout <<"Your remainder is " << remainder << endl;
                return 0;
            }
            else {
                remainder = number1 % number2;
                cout <<"Your remainder is " << remainder << endl;
                return 0;
            }
        }
        
        // for multiplication
        
    else if (operation == "*"){ // is user inputs + this code will run
            mul = number1 * number2; // returns multiplication of number
            cout << "Your multiplying value is " << mul << endl;
            return 0; // shows the code is executed correctly
        }
        
// for wrong operator entered
        
    else {
        cout << "\nPlease enter correct sign. Use one from these (only use +,-,*,/ or ) " << endl;
        return 0;
        }
        
}
