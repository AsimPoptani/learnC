// This is a lib called standard input output 
// This allows us to do cool things like printing 
#include <stdio.h>
// -------------- header ------------
// Funtion declare
int divideByX( int , int );

// Structs should be defined in a header file but for now we will put it here

    // Lets go ahead and create some structs
    struct Human
    {
        char name[50];
        char des[200];
        
    };
    
    struct People
    {
        struct Human humans[100];
    }; 

// -------------- header ------------

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

    // Printf documentation
    // https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm


    // Int
    int aInt= 100;
    printf("aInt is %d \n",aInt);
    // This is typically 8 bits so you can assign letters to it
    // Please not this is quite important single characters are '' while strings are ""
    char aCoolChar = 'a';  
    printf("aCoolChar has a value of  %d but the ascii character is %c \n",aCoolChar,aCoolChar);
    
    // Lets do some crazzy math
    printf("Lets multiply a character and a number :) %d * %d = %d \n",aInt,aCoolChar,timesByX(aInt,aCoolChar));
    printf("Lets divide a character and a number :) %d * %d = %d \n",aInt,aCoolChar,divideByX(aInt,aCoolChar));

    // A very big number
    long aLong= 12728934782937402;
    // If you start using this you are doing something mad
    long long aLongLong = 4382473785673486587346578346589473;
    // A fractional num (are you a tau or pi?)
    float aFloat = 6.28318530718;
    // a fractional num with double accuracy
    double aDouble = 1.2345678901234567890;

    // Create a user called dave
    struct Human dave ={"Dave","Dave is ambitious but he has a problem he is Dave"};
    // Create a social group
    struct People socialGroup;
    // Assign a user
    socialGroup.humans[0]=dave;

    // If 1 ==1 then we are in this universe
    if (1==1)
    {
        printf("We are in this universe\n");
    }   

    // Use else and else if as normal

    // A for loop
    for (int i=0; i<100;i++)
    {
        printf("Counting to 100/%d\n",i);
    }

    // See above for discussion
    return 0;
}

// So in C89 and C90 (these are standards) you don't need to define a function prototype :) But there are some issues
// https://stackoverflow.com/questions/2575153/must-declare-function-prototype-in-c So best practice don't but if your lazy
// then do

int timesByX(int a , int b){
    return a*b;
}

int divideByX(int a, int b){
    return (int) a/b;
}