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
        int num, sum=0;
        cin >> num;

        while(num){
            int modulo = num % 10;
            sum = sum+modulo;
            num = num / 10;
        }
        cout << sum <<endl;



    }
}
