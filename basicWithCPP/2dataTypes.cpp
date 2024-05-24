#include <iostream>
using namespace std;
main()
{
    //Declaration of All basic Datatypes
    int integer;                //integer data type to store all whole numbers except of decimal
    float decimal;              //float to store decimal numbers or values but with limited precision
    double extendedDecimal;            //double also store decimal but more number of decimal point, means much precision than float
    char singleCharacter;       //char used to store single alphabet character by using single inverted commas ''
    string stringOfCharacter;   //string is used to store sentence or we can say a stream of characters using couple of inverted commas ""
    bool boolean;               //bool is used to store boolean values, e.g. True/False, 0/1, Present/Absent, On/Off;

    //Now Initializing variable with values
    integer = 10;
    decimal = 6.3;
    extendedDecimal= 5.6784;
    singleCharacter='A';
    stringOfCharacter="Trainee at Knowledge Stream Lahore";
    boolean=true;
    //now displaying values of all variables on screen using "cout"
    //using endl to move next line
    std::cout<<"Value of integer is :"<<integer<<endl;
    std::cout<<"Value of decimal is :"<<decimal<<endl;
    std::cout<<"Value of double is :"<<extendedDecimal<<endl;
    std::cout<<"Value of singleCharacter is :"<<singleCharacter<<endl;
    std::cout<<"Value of stringOfCharacter is :"<<stringOfCharacter<<endl;
    std::cout<<"Value of boolean is :"<<boolean<<endl; //boolean shows value 1 and 0, if it is  true and false respectively
    
    return 0;
} 
