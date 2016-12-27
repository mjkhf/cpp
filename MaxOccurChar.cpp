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
        int max=0;
        string check, maxarr;
        string str = "";
        cin >> str;
        for (int j=0; j<str.length(); j++){
            check = str[j];
            int count=0;
            for (int k=0; k<str.length();k++){
                if (str.at(j) == str.at(k)){
                    //cout << "inside match string loop";
                  count++;
                }
                if(count >= max){
                    if(count > max) {
                        // cout << "entered max loop"<< endl;
                        max = count;
                        maxarr = str[k];
                    }if(str[j] < maxarr[0]){
                        maxarr = str[j];
                    }
                }
            }

        }
        cout << maxarr <<endl;


    }
}
