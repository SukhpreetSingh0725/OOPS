#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter the number of Rows: ";
    cin >> num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout << j*j<< " ";
        }
        cout <<endl;
    }
    return 0;
}
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25...