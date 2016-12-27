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
        int size, sum=0;
        cin >> size;
        int arr[size];
        for (int j=0;j<size;j++){
            cin >> arr[j];
        }
        for (int k=0;k<size;k++){
             sum = sum + arr[k];
           // cout << arr[k] <<" ";
        }
         cout << sum <<endl;
    }
}
