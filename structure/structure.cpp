#include <iostream>


// Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

// struct{
    // dataType1 member1;  menberka qiimaha ee default uwataan waa 
                            // string unknow numberskane waa 0
    // dataType2 member2;
    // // ...
// };  magaca waad uga wici kartaa sture 

// struct {
//     std::string name;
//     int age ;
   

// }person;

//     int main(){

//         person.name="abdirzak";
//         person.age=12;
      
//         std::cout<<"name :" <<person.name <<"\n" <<"age :"<<person.age <<"\n";
//         return 0;
//     }




    // waxaa sameenkartaa inaa multtible stucture name aad samesso


    struct {
        std::string brand;

    } car1,car2,car3 ;

    int main(){
        car1.brand="bmw";
        car2.brand="mercedez";
        car3.brand="ferrari";

        std::cout<<car1.brand<<"\n";
        std::cout<<car2.brand<<"\n";
        std::cout<<car3.brand<<"\n";

        return 0;
    }