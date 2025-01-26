#include <iostream>

// break mesha aan jooji kudhahnay ayaa lagu joojinaa
int breakexample(){
    std::cout<<"this break *******\n";
    
    for( int i=0; i <10; i++){
        if( i == 8) break;
        std::cout<< i <<"\n";

        
        }
      
        return 0;

}

 double continueexample(){
    std::cout<<"this is continue *************\n";
    for ( int j =0 ; j <10 ;  j++){
        if( j == 5 ) continue;
           std::cout<< j <<"\n";
    }
    return 0;
 
 }

int main(){
    breakexample();
    continueexample();


}



