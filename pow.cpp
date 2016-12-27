#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int CountDigits(int n){
    int countDigit=0;
    
    int x = n;
    while(x){
        x = x/10;
        countDigit++;
        
    }
    cout <<"digits = "<<countDigit<<endl;
    return countDigit;
    
}
bool check(int n){
    int digit = CountDigits(n);
    int sum=0;
    int x = n;
    cout << "number is "<<x<<endl;
    while(x){
        int r = x%10;
        cout << "power = "<<pow(r, digit--)<<endl;
        int add = pow(r, digit--);
        cout <<"add is "<<add<<endl;
        sum = sum + add;
        cout <<"sum inside loop"<<sum<<endl;
        x = x / 10;
    }
    cout <<"sum is "<<sum<<endl;
    return (sum == n);
    
}

int main() {
	//code
	int loop;
	cin >> loop;
	for (int i =0; i<loop; i++){
	    int num;
	    cin >> num;
	    if (check(num)){
	         cout <<"1";
	    }
	        else
	        cout <<"0";
	    }
	return 0;
}
