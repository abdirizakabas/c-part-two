#include <iostream>

// enum waa keyword qaas ah aana isbadaleenin
// An enum is a special type that represents a group of constants (unchangeable values).

//si aad usameesid enum keyword adeegso
enum example{
    low,
    medium, //waa sidii qimo defualt ee watan oo kabilabanoy 0 kan kuxiga 1 ilaa saas usocdaan 
    high,
    name = 44,
    age , //value ee defualt ahaan uwataan waan kabali karnaa
    //note hadii midkamida value aad kabadasho si automalic update 
    // iskudhahayaan qimaha kan haa midka kowad sisid 10 kan labad 11 unoqonaa
    last // si aan uhelno dhamantod waa ina kudartaa value dummy ama value kaas aanu kuheli karno dhamantod
};

int main(){

    enum example matalaad =medium; // waa varible matalaayo enumka 

    std::cout<<matalaad <<"\n";
    


    return 0;
}