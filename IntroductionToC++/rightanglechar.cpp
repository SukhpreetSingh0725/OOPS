#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter the number of Rows: ";
    cin >> num;
    for(int i=1;i<=num;i++){
        char name='a'+i-1;
        for(int j=1;j<=i;j++){
            cout << name<< " ";
        }
        cout <<endl;
    }
    return 0;
}