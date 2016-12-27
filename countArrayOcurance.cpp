#include <iostream>
#include <math.h>

//using std::string;
//
// Created by manish on 21/11/16.
//

using namespace std;

int main(){

    int count;
    cin >> count;
    for (int i =0; i<count;i++){
        int size;
        cin >> size;
        int arr[size];
        for (int j=0;j<size;j++){
            cin >> arr[j];
        }
        for(int k=1;k<=size;k++){
            int num=0;
            for (int l=0;l<size;l++) {
                //cout <<"value of array "<<l <<arr[l] <<endl;
                if (k == arr[l]) {
                    num++;
                }
            }

                cout <<num <<" ";


        }



    }
}
