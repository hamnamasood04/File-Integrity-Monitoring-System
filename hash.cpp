#include "hash.h"
#include <fstream>

long long calculateHash(string filename){
    ifstream file;
    file.open(filename);

    if(!file.is_open()){
        return -1;
    }

    long long hash = 0;
    char ch;

    while(file.get(ch)){
        hash = hash*31 + ch;  //making hash by simple addition of characters
    }

    file.close();
    return hash;
}