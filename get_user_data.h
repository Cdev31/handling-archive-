#include <iostream>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void getAllUsers(){

    int size = 0;
    int counter = 0;
    string users[size] ;
    string line;
    ifstream file("./users.txt");

    if( !file.is_open() ){
        cerr << " Error no se pudo abrri el archivo " << "\n";
        return ;
    }



    cout << size << endl;

    // while( getline( file, line, ',' )  ){
    //     if(  size > counter ){
    //         users[counter] = line;
    //         counter++;
    //     }else {
    //         break;
    //     }
    // }

    file.close();

    // for( short i =0; size > i; i++ ){
    //     cout << users[i] << endl;
    // }

}