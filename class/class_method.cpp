#include <iostream>

// Methods are functions that belongs to the class.

// There are two ways to define functions that belongs to a class:

// Inside class definition
// Outside class definition

// inside class 
// class myClass{
//     public:
//      std::string myname(std::string name){
//         return name;
// }
// };

// int main(){
//     myClass myobj;
   
//     std::cout<< myobj.myname("king");
// }

// outside class 



// kowdii hore functionka classka kushaaci kabacdi outsideka kuqeex

class outsideClass{
    public:
    int name(int num);
   
};

int outsideClass::name(int num){

    std::cout<<"hello world";
     return num;
};
int main(){
    outsideClass myobj;
  
    std::cout<<  myobj.name(10);
    return 0;
}

// To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function: