/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 11th, 2019, 12:36 PM
 * Purpose:  Add and Multiply 2 Integer Numbers
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int op1,op2,sum,prod;
    
    //Initialize or input i.e. set variable values
    cout<<"Input 2 integer Values"<<endl;
    cout<<"In the Range of (+-10,000)"<<endl;
    cin>>op1>>op2;
    
    //Map inputs -> outputs
    sum  = op1 + op2;
    prod = op1 * op2;
    
    //Display the outputs
    cout<<op1<<" + "<<op2<<" = "<<sum<<endl;
    cout<<op1<<" * "<<op2<<" = "<<prod<<endl;

    //Exit stage right or left!
    return 0;
}