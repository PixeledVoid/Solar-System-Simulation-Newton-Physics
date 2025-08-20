#include <iostream>
#include <vector>
namespace first
{
    int x = 1;
}

// typedef std::vector<std::pair<std::string, int>> pairlist_t; //ends with _t because convention; //typedefine sort of
// std::vector<std::pair<std::string, int>> pairlist; // pairlist_t pairlist;
//  typedef replaced with 'using'
// typedef std::string text_t;
using text_t = std::string;
// text_t FirstName = "Sugyan"; std::cout << FirstName <<"!";
int main()
{
    // arithmatic operators~
    // int x =20; x += 1; //x=x+1; or x++; IF increment by 1
    // other operators: -(sub or x-- or --x), *(multiply or *=), /(divide or /= -> results in int if int else double if double), % modulus (gives remainder)
    // preceedence of operator -> () -> */ -> +- (left to right)
    // pre-increment, ++x is first increased by 1 before getting sent
    // double y = (int)3.14; -> 3.14 ->int ->double
    // char x = 100; // returns the character on the given position in ascii table, i.e. 'd'

    // int correct = 8;
    // int questions = 10;
    // double percentage = correct/(double)questions *100; // int division ignores 0.8 as a result or 8/10
    // std::cout << percentage<<"%";

    // cout << (insertion operator)
    // cin >> (exttraction operator)
    std::string name;
    int age;
    std::cout << "What's your age? ";
    std::cin >> age;
    std::cout << "What's your name? ";
    // std::cin >> name; //does not works if space in the entered text.
    std::getline(std::cin >> std::ws, name); // if we put age before getline, the '\n' at the end of age will be taken by the getline(). 
    //To stop that we put std::ws to eliminate and such newline before user input
    std::cout << "Hello " << name << "!" << "\nYou're " << age << " yrs old!";

    return 0;
}
// namespace second{int x = 2;}
// using namespace second; std::cout << first::x;
// int x;  #declaration //x = 1; #assignment
// std::cout << "I like Mango" << '\n'; or use std::endl;
// int, double, char(single character), bool(true/false), std::string(normal string)
// const <data-type> <variable> = <value>;  #constants
// <using std::cout/ std::string> to reduce repetations