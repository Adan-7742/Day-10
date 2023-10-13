// Day 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sum_arr() {
    cout << "=================================================" << endl;

    //initilize kaerte huwe arr ko koi size ni dena hai

    int class_arr[]{ 3,7,8,5,4 };
    int sum = 0;
    //a hm in ka sum lai gain

    //it will autoatly show alll the values that are present in an arrey
    for (auto value : class_arr) {
        sum += value;
    }

    cout << "Sum of array is : " << sum << endl;
    return 0;
}
int size_1() {
    
    cout << "=================================================" << endl;

    int score[]  { 45,6,3,7,8,5,4 };
   // size of statement is used for printing the size of an array and size of a single index of an array

    cout << "size of( score)" << sizeof(score) << endl;

    cout << "size of( score)" << sizeof(score[0]) << endl;

    int count{ sizeof(score) / sizeof(score[0]) };
    // here count statement is used for counting the number of elements stored in an array

    for (size_t i = 0; i < count; i++) {
        cout << score[i] << endl;
    }
    return 0;
}
int rage() {
    cout << "=================================================" << endl;

    int score[]{ 45,6,3,7,8,5,4 };

    for (auto i : score) {
        cout <<"Value  :  " <<i << endl;

    }
    return 0;
}

// now we will use array of character here......

int arr() {
    cout << "=================================================" << endl;
    // here we print a character value inan array ........

    char myArray[] = "Hello, world!";

    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++) {
        cout << myArray[i];
    }
    cout << endl;

    return 0;
}
int main()
{
    sum_arr();
    size_1();
    rage();
    arr();
}

