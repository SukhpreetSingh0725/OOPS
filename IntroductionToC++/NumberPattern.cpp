#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter the number of Rows: ";
    cin >> num;
    for(int i=1;i<=num;i++){
        for(int j=0;j<num;j++){
            cout << i<< " ";
        }
        cout <<endl;
    }
    return 0;
}



//  1 1 1 1 
//  2 2 2 2
//  3 3 3 3...