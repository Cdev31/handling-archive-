#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getUserNumbers(){
    int userNumbers = 0;
    string line;
    ifstream metaFile("./metadata.txt");

    if(!metaFile.is_open() ){
        return 1;
    }

    while( getline( metaFile, line ) ){
        int pos = line.find("users:");

        if( pos != string::npos ){
            string value = line.substr(pos + 6);
            userNumbers = stoi(value);
        }
    }

    metaFile.close();

    return userNumbers;
}