// functionExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//function prototype
//void sumOfNumbers(int x, int y);
//int sumOfNumbers(int x, int y);
//void differenceOfNumbers(int x, int y);
void Greet(string person);



int main()
{
    string name;
    //int a, b, c, David;
    //cout << " Enter two values :";
    cout << " Enter yout name";
    cin >> name;
    Greet(name);
    Greet("Darijan");
   // sumOfNumbers(a,b); // calling the function
   // cout << " The sum of numbers = " << sumOfNumbers(a, b) << endl;
    //differenceOfNumbers(a,b);//calling with parameter
    return 0; //code exits
    

}

void Greet(string person) {
    cout << " Greetings " << person << endl;
}

/*
//function defenition - no return value and no parameter
void sumOfNumbers() {
    int a, b, c;
    cout << " Enter two values :";
    cin >> a >> b;
    c = a + b;
    cout << " c = " << c << endl;
}*/

//function has parameters
//void sumOfNumbers(int x, int y) {
//
//    cout << "a + b = " << x + y << endl;
//}

//function with retunr value and parameter

//int sumOfNumbers(int x, int y) {
//    return(x + y);
//}


/*
//void means nothing, this function returns no value to the main function is not passing any value to this function.
void differenceOfNumbers() {
    int a, b, c;
    cout << " Enter two values :";
    cin >> a >> b;
    c = a + b;
    cout << " c = " << c << endl;
}*/

//function with parameters
//void differenceOfNumbers(int x, int y) {
//    cout << "x-y=" << x - y << endl;
//
//}
