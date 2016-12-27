i#include <iostream>
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
        int num;
        cin >> num;
        int j=1, n=0;
        while(j){

            double x = 0;
            x = pow((n + 1),2);
            if (x >= num){
                cout << n << endl;
                break;
            }
            n++;
        }
    }
}
