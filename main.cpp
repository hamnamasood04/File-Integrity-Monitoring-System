#include <iostream>
#include "baseLine.h"
using namespace std;

int main(){
    int choice;
   while(true){
     cout<<"==== File Integrity Monitoring System ====\n";
     cout<<"1. Create BaseLine"<<endl;
     cout<<"2. Check Files"<<endl;
     cout<<"3. Exit"<<endl;
     cout<<"Enter your Choice: "<<endl;
     cin>> choice;
 
     if(choice == 1){
         createbaseLine();
     }else if(choice == 2){
         checkFiles();
     }else if(choice == 3){
        cout<<"Exiting..."<<endl;
        break;
     }else{
         cout<<"Invalid Choice!"<<endl;
     }
    }
    return 0;
}