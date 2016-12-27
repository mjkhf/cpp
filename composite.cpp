#include <iostream>
using namespace std;

int main() {
    int n;
    for (int i=0; i<n; i++)
    {
        int num, res;
        cin >> num;
        for (int j=2;j<num;j++)
        {
            for (int k=1;k<j;k++)
            {
                if (j%k==0)
                {
                    res=j;
                }
            }
            if(res>>1)
            {
                cout<<res<<" ";
            }
            
        }
        
    }
	//code
	return 0;
}
