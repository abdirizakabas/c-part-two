#include <iostream>

// Multi-Dimensional Arrays
// A multi-dimensional array is an array of arrays.

// To declare a multi-dimensional array, define the variable type, specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have:

// int main (){
//     int arraynames[2][4]={
//         {2,54,4,6},
//         {9,90,2,8},
//     };

            // arraynames[1][2]=70;
//     std::cout<<arraynames[0][3]<<"\n";
// }



// more complex and loop 

int main(){
    std::string arrynames[2][2][2]={
        {
            {"a","b"},
            {"c","d"}
        },
        {
            {"g","k"},
            {"l","m"}
        }
    };

    for(int  i=0 ; i < 2; i++){
        for(int j=0; j <2 ; j++){
           for( int k=0 ; k <2 ; k++){
                std::cout<<arrynames[i][j][k]<<"\n";
           }
        }

    }
}