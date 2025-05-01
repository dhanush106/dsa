#include<iostream>
using namespace std;

// n decimals --> there will be (log n base 2) = 1 of binary digits

int main(){
    double x;
    cin>>x;
    int n;
    cin>>n;
    long binForm = n;
    double ans = 1;

    while(binForm > 0){
        if(binForm%2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
        cout<<binForm<<endl;
    }

    cout<<ans;
}