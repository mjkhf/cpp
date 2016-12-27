using namespace std;

int main(){
    int loop;
    cin >> loop;
    for (int i =0;i<loop;i++){
        unsigned long long int fib, first=0, second=1,next, num;
        cin >> fib;
        next = first + second;
        for (int j=1;j<=((fib * 3) - 2);j++){
            first = second%1000000007;
            second = next%1000000007;
            next = next + first;
            next = next%1000000007;
            cout << next <<" ";

        }
        cout << next <<endl;

    }

}
