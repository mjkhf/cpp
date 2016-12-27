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
        int min = arr[0];
        int max = arr[0];
        for (int k=0; k<size;k++){
            if (arr[k] > max){
                max = arr[k];
            }
            if (arr[k] < min){
                min = arr[k];
            }
        }cout << max <<" "<<min;
        cout <<endl;


    }
}
