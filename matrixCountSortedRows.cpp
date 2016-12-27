#include <iostream>

//using std::string;
//
// Created by manish on 14/09/16.
//

using namespace std;

void inputMatrix(int a, int b);

int main(){
    int count;
    cin >> count;
    for (int i = 0; i<count; i++){
        //cout << "i is " <<i;
        int a,b;
        cin >> a >> b;
        inputMatrix(a,b);

    }
return 0;

}


void inputMatrix(int a, int b){
    //cout << "a is " << a <<endl;
    // cout << "b is " << b <<endl;
    int arr[a][b];
    int c=0,d=0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++) {
            if ((arr[i][j+1] <= arr[i][j])){
                //cout <<"comparing " << arr[i][j+1] <<" and " << arr[i][j];
                break;}
            if (j == b-1)
            {
                d++;
            }
            }
        }
    for(int i = 0; i < a; i++){
        for(int j=b-1; j>0; j--) {//cout <<"entered greater checking";
            if ((arr[i][j-1] <= arr[i][j])){
                cout <<"comparing " << arr[i][j+1] <<" and " << arr[i][j];
                break;}
            if ((b > 1) && (j == 1))
            {
                d++;
            }
        }
    }
    cout << d <<endl;

    }










