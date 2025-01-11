#include <iostream>
// A constructor in C++ is a special method that is automatically called when an object of a class is created.

// To create a constructor, use the same name as the class, followed by parentheses ():

// Note: The constructor has the same name as the class, it is always public,
//  and it does not have any return value.
class myclass{
    public:
    myclass(){
        std::cout<<"hellol world";
        // constructor waxa uu si automatic isku wacaa marka aad object samessid waxaa uu shaqeyaa sida function 
    }
};

int main(){
    myclass myobj;
    return 0;
}