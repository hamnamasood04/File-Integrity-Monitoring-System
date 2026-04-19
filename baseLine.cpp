#include "baseLine.h"
#include "hash.h"
#include <iostream>
#include <fstream>
using namespace std;

string getBaselineFile() {
    string fname;
    cout << "Enter baseline file name: ";
    cin >> fname;
    return fname;
}

void createbaseLine(){
   string baseFile = getBaselineFile();

    ofstream out(baseFile);
    if (!out.is_open()) {
        cout << "Cannot create baseline file!\n";
        return;
    }

    int n;
    cout<<"Enter number of files: ";
    cin>>n;

    string filename;
    bool validFileFound = false;

    for(int i=0; i<n; i++){
        cout<<"Enter file name: ";
        cin>>filename;
        long long h = calculateHash(filename);
        
        if(h == -1){
            cout<<"File not Found!"<<endl;
        }else{
            out<<filename<<" "<< h<<endl;
            validFileFound = true;
        }
    }

    out.close();
    if(validFileFound){
     cout<<" BaseLine Created!(valid files only)"<<endl;
    }else{
        cout<<" No valid files found!"<<endl;
    }
}

void checkFiles(){
    string baseFile;
    cout << "Enter baseline file name: ";
    cin >> baseFile;

    ifstream in(baseFile);

    if (!in.is_open()) {
        cout << "Baseline file not found!\n";
        return;
    }

    string filename;
    long long oldHash;

    cout<<"---File Integrity Report---"<<endl;

    while(in>> filename>> oldHash){
        long long newHash = calculateHash(filename);

        if(newHash == -1){
            cout<<filename<<" is deleted!"<<endl;
        }else if(newHash != oldHash){
            cout<<filename<<" is Modified!"<<endl;
        }else{
            cout<<filename<< " is Safe!"<<endl;
        }
    }
    in.close();
}