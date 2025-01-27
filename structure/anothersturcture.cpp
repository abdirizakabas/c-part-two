#include <iostream>

// waxaa kale oo umagacabi kartaa structuere marka struct dhahdid inaa magica structure aad racisid kabacdi magaca structure aad magac kale oo isga matala aad samesid sidaan 

struct cars{
    std::string name;
};

int main(){

    //inaa maga matala structure aad samid
    cars mycar;

    mycar.name="gaari ";

    std::cout<<mycar.name <<"\n";

    //varibale badan waa sameenkartaa oo maga ula baxaayo struct matalaha

    cars mypersonal;
        mypersonal.name="abdirizak abas";
            std::cout<<mypersonal.name;
    return 0;
}