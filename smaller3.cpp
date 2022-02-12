/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1 B

This program will find the smallest of three integers when inputted by user.
*/

#include <iostream>
using namespace std;

int main()
{
    int firstnum, secondnum, thirdnum;
    //program asks to input three integers
    cout << "Input first number: ";
    cin >> firstnum;
    cout << "Input second number: ";
    cin >> secondnum;
    cout << "Input third number: ";
    cin >> thirdnum;
    //used "and" operator using '&&' to try to find smallest int
    if(firstnum > secondnum && thirdnum > secondnum){
        cout << secondnum << endl;
    } else if(secondnum > firstnum && thirdnum > firstnum){
        cout << firstnum << endl;
    } else if(firstnum > thirdnum && secondnum > thirdnum){
        cout << thirdnum << endl;
        }

 return 0;

}
