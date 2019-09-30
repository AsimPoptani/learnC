// This is a lib called standard input output 
// This allows us to do cool things like printing 
#include <stdio.h>

// I apologize to Max Loyd for saying this should be void
// I was wrong you should never have this as void
// The return tells us if the program exited correctly 
// See more for a discussion here: https://stackoverflow.com/questions/204476/what-should-main-return-in-c-and-c
// Although I should not it does work for void :) but don't use it
int main() {
    //  Vars Vars Vars https://en.wikipedia.org/wiki/C_data_types

    //  You can use signed and unsigned with all of these
    // This does not increase its range! It just moves it!!!

    // Also you can use long/short with all of these which will attempt to increase/decrease
    // respectively the range

    // Int
    int aInt= 100;
    // This is typically 8 bits so you can assign letters to it
    char aCoolChar = "a"  
    // A very big number
    long aLong= 12728934782937402
    // If you start using this you are doing something mad
    long long aLongLong = 4382473785673486587346578346589473
    // A fractional num (are you a tau or pi?)
    float aFloat = 6.28318530718
    // a fractional num with double accuracy
    double aDouble = 1.2345678901234567890
    
    
    
    // See above for discussion
    return 0;
}