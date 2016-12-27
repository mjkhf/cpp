#include <iostream>
#include <math.h>
//#include <string>

//using std::string;
//
// Created by manish on 21/11/16.
//

using namespace std;

int main(){

    int count;
    cin >> count;
    for (int i =0; i<count;i++){
        int num ;
        unsigned long int mult=1;
        cin >> num;
        for (int j=1;j <= num ;j++){
            mult = mult * j;
        }cout << mult <<endl;
    }
}
