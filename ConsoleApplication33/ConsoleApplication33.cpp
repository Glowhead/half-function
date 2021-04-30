

// Hernan L. Paulet
// CIS1202
// 20210429
// Homework module assignment 15b
// This program will halve numbers in a float, int and double



#include <iostream> // required for cout

using namespace std;

template<typename T> // defining a template for double and flot types



T half(T number) // the function that will return a number for the float and double
{
    return number * 0.5;
}

int half(int number) // the function to process int values
{
    double tempNumber;
 

    tempNumber = static_cast<double>(number); // convert the number to a double

    number = static_cast<int>(tempNumber / (2.0) + 0.5);    // the int will always round to zero
                                                            // by dividing the double the remainer has been preserved. 
                                                            // if the remainder is .5 of greater, the int value will be rounded up.
                                                            // if the remmained is .4 or less the int will round down.

    return number;
}

    






int main()
{
    
    int c = 3;          // declare variables
    float b = 5.0f;
    double a = 7.0;

    cout << half(a) << endl; // call to functions and display the result
    cout << half(b) << endl;
    cout << half(c) << endl;

    return 0;

}

