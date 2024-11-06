#include "metadata.h"


string* getUser( string username ){

    int size = getUserNumbers();

    static string user[2];

    string line;
    ifstream file("./users.txt");

    if( !file.is_open() ){
        cerr << " Error no se pudo abrri el archivo " << "\n";
        return 0;
    }
    
    while( getline( file, line, ',') ){
        int userNameIndex = line.find( "username:" + username );
        int passwordIndex = line.find( "password:");

        if( userNameIndex != string::npos ){
            user[0] = username;
            user[1] = line.substr( passwordIndex + 9 );
        }
    }

    return user;
}