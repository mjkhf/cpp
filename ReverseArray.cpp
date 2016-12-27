#include <iostream>
#include <math.h>

//using std::string;
//
// Created by manish on 14/09/16.
//

using namespace std;

int main(){

    int count;
    cin >> count;
    for (int i =0; i<count;i++){
        int size;
        cin >> size;
        //cout << "size is " << size <<endl;
        int arr[size];
        for (int j=0;j<size;j++){
            cin >> arr[j];
        }
        for (int k=(size-1); k>=0;k--){
            //cout << "value of k" <<k;
            cout << arr[k] <<" ";
        }
        cout << endl;

    }
}
