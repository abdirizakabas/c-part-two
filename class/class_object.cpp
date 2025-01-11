#include <iostream>

class myClass{
    public: //waxaa uuno ogalaan in aan ugawacno banaanka classka
    int mynum;
    std::string mytext;
    //hadii varibleka classka dhaxdiisa haduu yahay waxaa lagu wacaa attribute
};

int main(){
    // object 
    myClass myobject;//siaad object u abuurto classname kasoqaado kabacdi magaca objectga qor 

    myobject.mynum=10;
    myobject.mytext="king abdirizak";

    std::cout<<myobject.mynum<<"\n";
    std::cout<<myobject.mytext<<"\n";
}