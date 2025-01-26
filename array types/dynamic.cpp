#include <iostream>
#include <vector> //waa kan nosuura galinaayo inaa array wax kabadalno 
#include <string>

// Do not mix std::string with std::vector<std::string>. They are separate types.

// Missing Headers:

// Always include the necessary headers (<vector> for vectors and <string> for strings).

// waad badali kartaa waxne waad kusoo dari kartaa 
int main (){
    // vector<date typa> arrayname or vector name =

   std::vector<std::string> names={"kow","lamo","sadex"};

   names.push_back("afar");

    for(std::string name:names){
        std::cout<<name<<"\n";
    }
}

