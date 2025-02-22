#include  <iostream>

class gaari{
    public:
    void gaar(){
        std::cout<< "waa gaari bmw" ;

    }
    
};


class diyaarad: public gaari{
    public:
        void diyaara(){
    std::cout<<"waa diyaarad";
        }
};

int main(){
    diyaarad myobject;
    myobject.diyaara();
}
