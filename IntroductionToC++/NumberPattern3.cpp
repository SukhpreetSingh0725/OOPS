#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter the number of Rows: ";
    cin >> num;
    for(int i=1;i<=num;i++){
        for(int j=num;j>=1;j--){
            cout << j<< " ";
        }
        cout <<endl;
    }
    return 0;
}
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1 
